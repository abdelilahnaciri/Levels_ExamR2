typedef struct s_list {
    struct s_list *next;
    void *data;
} t_list;

int ft_list_size(t_list *begin_list){
    if (begin_list == 0) {
        return (0);
    }
    else {
        return(1 + ft_list_size(begin_list->next));
    }
}

// Other method //
// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;

// int	ft_list_size(t_list *begin_list) {
//     int i;
//     t_list *cur;
//     i = 0;
//     cur  = begin_list;
//     while (cur != 0) {
//         i++;
//         cur = cur->next;
//     }
//     return (i);
// }