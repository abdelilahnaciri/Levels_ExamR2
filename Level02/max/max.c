#include <stdio.h>

int max(int *tab, unsigned int len) {
    int i;

    i = 0;
    int max = tab[0];
    if (len == 0) {
        return (0);
    }
    while (tab[i] && i < len) {
        if (tab[i] > max) {
            max = tab[i];
        }
        i++;
    }
    return (max);
}

// int main() {
//     int tab[5] = {15, 20, -100, 100, 2};
//     printf("%d", max(tab, -1));
// }