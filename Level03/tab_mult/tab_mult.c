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
    return (nb*sign);
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
        int nb;

        i = 1;
        nb = ft_atoi(av[1]);
        while (i <= 9) {
            write(1, "1 x ", 4);
            ft_putnbr(nb);
            write(1, " = ", 3);
            ft_putnbr(nb * i);
            write(1, "\n", 1);
            i++;
        }
        
    }
    else
        write(1, "\n", 1);
}