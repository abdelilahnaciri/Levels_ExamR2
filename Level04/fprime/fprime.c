#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s) {
    int i;
    int nb;
    int sign;

    i = 0;
    nb = 0;
    sign = 1;
    while (s[i]) {
        nb = nb * 10 + s[i] - '0';
        i++;
    }
    return (nb * sign);
}

int is_prime(int i) {
    int k;
    k = 2;
    while (k < i) {
        if (i % k == 0) {
            return (0);
        }
        k++;
    }
    return (1);
}

void ft_putnbr(int nb) {
    
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    char c = nb % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av) {
    if (ac == 2) {
        int i;
        int k;
        int nb;

        i = 2;
        k = 0;
        nb = ft_atoi(av[1]);
        while (i <= nb) {
            while (is_prime(i)) {
                while (nb % i == 0) {
                    ft_putnbr(i);
                    nb = nb / i;
                    if (nb > 1)
                        write(1, "*", 1);
                }
                i++;
            }
            i++;
        }
        if (av[1][0] == '1' && av[1][1] == '\0') {
            write(1, "1", 1);
        }
    }
    write(1, "\n", 1);
}