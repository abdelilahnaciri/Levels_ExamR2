#include <stdlib.h>

int count_nb(int nb) {
    int i = 0;
    if (nb <= 0) {
        i++;
        nb *= -1;
    }
    while (nb > 0) {
        nb = nb / 10;
        i++;
    }
    return (i);
}

char	*ft_itoa(int nbr) {
    int i = 0;
    char *str;

    i = count_nb(nbr);
    str = malloc(sizeof(char ) * i + 1);
    str[i] = '\0';
    i--;
    if (nbr < 0) {
        str[0] = '-';
        nbr *= -1;
    }
    else if (nbr == 0) {
        str[0] = '0';
        return (str);
    }
    while (nbr != 0) {
        str[i] = nbr % 10 + '0';
        nbr = nbr / 10;
        i--;
    }
    return (str);
}