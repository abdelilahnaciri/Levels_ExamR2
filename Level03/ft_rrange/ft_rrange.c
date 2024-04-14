#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end) {
    int i;
    int *array;

    i = 0;
    if (start >= end) {
        array = malloc(sizeof(int) * (start - end + 1));
    }
    else if (start <= end) {
        array = malloc(sizeof(int) * (end - start + 1));
    }
    if (!array) {
        return (NULL);
    }
    if (start >= end) {
        while (end <= start) {
            array[i] = end;
            end++;
            i++;
        }
    }
    else if (start <= end) {
        while (start <= end)
        {
            array[i] = end;
            end--;
            i++;
        }
    }
    return (array);
}

int main() {
    printf("%d", ft_rrange(0, -3)[0]);
    printf("%d", ft_rrange(0, -3)[1]);
    printf("%d", ft_rrange(0, -3)[2]);
    printf("%d", ft_rrange(0, -3)[3]);
}