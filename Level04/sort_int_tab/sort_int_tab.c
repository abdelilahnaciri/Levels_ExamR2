void ft_swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_int_tab(int *tab, unsigned int size) {
    int bubble = 0;
    int idx = 0;

    if (size <= 1) {
        return ;
    }
    while (bubble < size) {
        idx = 0;
        while (idx < size - 1) {
            if (tab[idx] > tab[idx+1]) {
                ft_swap(&tab[idx], &tab[idx+1]);
            }
            idx++;
        }
        bubble++;
    }
}