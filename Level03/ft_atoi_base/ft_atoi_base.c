#include <stdio.h>

int is_valid(char c, int base) {
    char digits[17] = "0123456789abcdef";
    char digits2[17] = "0123456789ABCDEF";
    while (base--) {
        if (digits[base] == c || digits2[base] == c) {
            return (1);
        }
    }
    return (0);
}

int value_of(char c) {
    if (c >= '0' && c <= '9') {
        return (c - '0'); 
    }
    else if (c >= 'a' && c <= 'f') {
        return (c - 'a' + 10);
    }
    else if (c >= 'A' && c <= 'F') {
        return (c - 'A' + 10);
    }
    else
        return (0);
}

int ft_atoi_base(char *str, int str_base) {
    int i;
    int nb;
    int sign;

    i = 0;
    nb = 0;
    sign = 1;
    while (str[i] <= 32) {
        i++;
    }
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    else if (str[i] == '+') {
        i++;
    }
    while (is_valid(str[i], str_base)) {
        nb = nb * str_base + value_of(str[i]);
        i++;
    }
    return (sign * nb);
}

int main() {
    printf("%d", ft_atoi_base("ab", 16));
}