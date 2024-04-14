#include <unistd.h>
#include <stdio.h>

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
    while (s[i] && s[i] >= '0' && s[i] <= '9') {
        nb = nb * 10 + s[i] - '0';
        i++;
    }
    return (nb *sign);
}

void ft_putnbr(int nb) {
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    char c = nb % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av) {
    if(ac == 3) {
        int i;
        int n1;
        int n2;
        int min;
        int pgcd;

        i = 1;
        n1 = ft_atoi(av[1]);
        n2 = ft_atoi(av[2]);
        pgcd = 1;
        if (n1 >= n2) {
            min = n2;
        }
        else if (n1 <= n2) {
            min = n1;
        }
        while (i <= min) {
            if ((n1 % i == 0) && (n2 % i == 0)) {
                pgcd = i;
            }
            i++;
        }
        ft_putnbr(pgcd);
    }
    write(1, "\n", 1);
}