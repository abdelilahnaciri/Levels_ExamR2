#include <unistd.h>

int ft_atoi(char *str) {
    int i = 0;
    int sign  = 1;
    int nb = 0;

    if (str[i] == '-') {
        sign *= -1;
        i++;
    }
    while (str[i]) {
        nb = nb * 10 + str[i] - '0';
        i++;
    }
    return (sign * nb);
}

void ft_putnbr(int nb) {
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    char c = nb % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av) {
    if (ac > 1) {
        int i = 1;
        int nb = ft_atoi(av[1]);
        while (i <= 9) {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nb);
            write(1, " = ", 3);
            ft_putnbr(i * nb);
            write(1, "\n", 1);
            i++;
        }
    } else
        write(1, "\n", 1);
}