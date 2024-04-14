#include <stdlib.h>
#include <stdio.h>
int ft_atoi(const char *s) {
    int i;
    int num;
    int sign;

    i = 0;
    num = 0;
    sign = 1;
    while (s[i] && (s[i] == ' ' || s[i] == '\t')) {
        i++;
    }
    if (s[i] == '-') {
        sign = -1;
        i++;
    }
    else if (s[i] == '+') {
        i++;
    }
    while (s[i] && (s[i] >= '0' && s[i] <= '9')) {
        num = num*10 + s[i] - '0';
        i++;
    }
    return (num * sign);
}
