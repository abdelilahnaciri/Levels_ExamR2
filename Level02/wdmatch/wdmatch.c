#include <unistd.h>

void ft_putstr(char *str) {
    int i;

    i = 0;
    while (str[i]) {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av) {
    if (ac == 3) {
        int i;
        int j;


        i = 0;
        j = 0;
        while (av[2][i]) {
            if (av[2][i] == av[1][j]) {
                j++;
            }
            i++;
        }
        if (!av[1][j]) {
            ft_putstr(av[1]);
        }
    }
    write(1, "\n", 1);
}