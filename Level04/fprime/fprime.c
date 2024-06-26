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

//Other Method//

// #include <unistd.h>

// int ft_atoi(char *str) {
//     int i = 0;
//     int sign  = 1;
//     int nb = 0;

//     if (str[i] == '-') {
//         sign *= -1;
//         i++;
//     }
//     while (str[i]) {
//         nb = nb * 10 + str[i] - '0';
//         i++;
//     }
//     return (nb * sign);
// }

// int is_prime(int nb) {
//     int i = 2;
//     while (i < nb) {
//         if ((nb % i) == 0) {
//             return (0);
//         }
//         i++;
//     }
//     return (1);
// }

// void ft_putnbr(int nb) {
//     if (nb >= 10) {
//         ft_putnbr(nb / 10);
//     }
//     char c = nb % 10 + '0';
//     write(1, &c, 1);
// }

// int main(int ac, char **av) {
//     if (ac == 2) {
//         int nb = ft_atoi(av[1]);
//         int i = 2;
//         if (is_prime(nb) && nb > 0) {
//             ft_putnbr(nb);
//         }
//         else {
//             while (i <= nb) {
//                 if (is_prime(i)) {
//                     while (nb % i == 0) {
//                         ft_putnbr(i);
//                         nb  = nb / i;
//                         if (nb > i)
//                             write(1, "*", 1);
//                     }
//                 }
//                 i++;
//             }
//         }
        
//     }
//     write(1, "\n", 1);
// }