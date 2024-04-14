#include <unistd.h>

int ft_atoi(char *s) {
    int i;
    int nb;
    int sign;

    i = 0;
    nb = 0;
    sign = 1;
    if (s[i] == '-') {
        sign = -1;
        i++;
    }
    else if (s[i] == '+') {
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') {
        nb = nb * 10 + s[i] - '0';
        i++;
    }
    return (nb * sign);
}

void ft_print_hex(int nb) {
    char digits[17] = "0123456789abcdef";
    if (nb >= 16) {
        ft_print_hex(nb / 16);
    }
    write(1, &digits[nb % 16], 1);
}

int main(int ac, char **av) {
    if (ac == 2) {
        ft_print_hex(ft_atoi(av[1]));
    }
    write(1, "\n", 1);
}