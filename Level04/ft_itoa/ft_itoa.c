#include <unistd.h>
#include <stdio.h>

int nbr_len(int nb) {
    int len;

    len = 1;
    if (nb < 0) {
        len++;
        nb *= -1;
    }
    while (nb != 0) {
        nb /= 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int nbr) {
    int len;
    int i;
    char *str;

    i = 0;
    len = nbr_len(nbr);
    str = malloc(sizeof(char) * len);
    if (nbr < 0) {
        str[0] = '-';
    }
    str[--len] = '\0';
    len--;
    while (nbr != 0) {
        str[len] = (nbr % 10) + '0';
        nbr = nbr / 10;
        len--;
    }
    return (str);
}

int main() {
    printf("%s", ft_itoa(15));
}