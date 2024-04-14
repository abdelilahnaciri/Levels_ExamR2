#include <unistd.h>

int ft_skip_whitespaces(char *str, int i) {
    while (str[i] == ' ' || str[i] == '\t') {
        i++;
    }
    return (i);
}

int ft_word_len(char *str) {
    int i;

    i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\t') {
        i++;
    }
    return (i);
}

int main(int ac, char **av) {
    if (ac == 2) {
        int i;
        int first_word;
        int word_len;

        i = 0;
        first_word = 1;
        word_len = 0;
        i = ft_skip_whitespaces(av[1], i);
        while (av[1][i]) {
            if (first_word == 0) {
                write(1, "   ", 3);
            }
            word_len = ft_word_len(av[1] + i);
            write(1, &av[1][i], word_len);
            i = i + word_len;
            i = ft_skip_whitespaces(av[1], i);
            first_word = 0;
        }
    }
    write(1, "\n", 1);
}