#include <unistd.h>
// #include <stdio.h>
int ft_atoi(char *s) {
    int i;
    int n;
    int sign;


    i = 0;
    n = 0;
    sign = 1;
    if (s[0] == '-') {
        sign *= -1;
        i++;
    }
    else if (s[0] == '+') {
        i++;
    }
    while (s[i]) {
        n = n * 10 + s[i] - '0';
        i++;
    }
    return(n * sign);
}

void ft_putnbr(int n) {
    if (n >= 10) {
        ft_putnbr(n / 10);
    }
    char c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av) {
    if (ac == 4) {
        int n1;
        int n2;
        int res;

        n1 = 0;
        n2 = 0;
        res = 0;

        n1 = ft_atoi(av[1]);
        n2 = ft_atoi(av[3]);
        if (av[2][0] == '+') {
            res = n1 + n2;
        }
        else if (av[2][0] == '-') {
            res = n1 - n2;
        }
        else if (av[2][0] == '*') {
            res = n1 *n2;
        }
        else if (av[2][0] == '/') {
            res = n1 / n2;
        }
        else if (av[2][0] == '%') {
            res = n1 % n2;
        }
        ft_putnbr(res);
    }
    write(1, "\n", 1);
    // printf("%d", ft_atoi("2001"));
}