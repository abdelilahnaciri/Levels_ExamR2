#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end) {
    int i;
    int *array;

    i = 0;
    if (start <= end) {
        array = malloc(sizeof(int) * (end - start + 1));
    }
    else if (start >= end) {
        array = malloc(sizeof(int) * (start - end + 1));
    }
    if (!array) {
        return (NULL);
    }
    if (end >= start) {
        while (end >= start) {
            array[i] = start;
            i++;
            start++;
        }
    }
    else if (end <= start) {
        while (end <= start) {
            array[i] = end;
            i++;
            end++;
        }
    }
    return (array);
}

int main() {
    printf("%d", ft_range(1, 3)[0]);
    printf("%d", ft_range(1, 3)[1]);
    printf("%d", ft_range(1, 3)[2]);
}