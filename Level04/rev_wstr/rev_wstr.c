#include <unistd.h>
#include <stdio.h>

int ft_word_len(char *s, int i) {
    int len;

    len = 0;
    while(s[i] > 32) {
        i--;
        len++;
    }
    return (len);
}

int main(int ac, char **av) {
    if (ac == 2) {
        int i;
        int word_len;

        i = 0;
        word_len = 0;
        while (av[1][i]) {
            i++;
        }
        i--;
        while (i > 0) {
            word_len = ft_word_len(av[1], i);
            i = i - word_len + 1;
            // write(1, "->", 2);
            write(1, &av[1][i], word_len);
            i--;
            while (av[1][i] <= 32 && i > 0)
            {
                write(1, &av[1][i], 1);
                i--;
            }
        }
    }
    write(1, "\n", 1);
}