// #include <stdlib.h>
// #include <stdio.h>

// int word_len(char *str) {
//     int i = 0;
//     while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
//         ++i;
//     }
//     return (i);
// }

// char *word_dup(char *str) {
//     int i = 0;
//     int len = word_len(str);
//     char *word = malloc(sizeof(char *) * len + 1);
//     word[len] = '\0';
//     while (i < len) {
//         word[i] = str[i];
//         i++;
//     }
//     return (i);
// }

// void fill_Word(char **array, char *str) {
//     int word_index = 0;

//     while (*str == ' ' || *str == '\t' || *str == '\n') {
//         ++str;
//     }
//     while (*str != '\0') {
//         array[word_index] = word_dup(str);
//         ++word_index;
//         while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n') {
//             ++str;
//         }
//         while (*str == ' ' || *str == '\t' || *str == '\n') {
//             ++str;
//         }
//     }
// }

// int count_words(char *str) {
//     int i;

//     i = 0;
//     while (*str == ' ' || *str == '\t' || *str == '\n') {
//         ++str;
//     }
//     while (str[i]) {
//         ++i;
//         while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
//             ++str;
//         }
//         while (str[i] == ' ' || str[i] == '\t' && str[i] == '\n') {
//             ++str;
//         }
//     }
//     return (i);
// }

// char **ft_split(char *str) {
//     int num_words;
//     char **array;

//     num_words = count_words(str);
//     array = malloc(sizeof(char *) * (num_words + 1));
//     array[num_words] = 0;
//     fill_Word(array, str);
//     return (array);
// }

// int main() {
//     int num_words;
//     char **array;

//     num_words = count_words("    Hello World Okay  !  ");
//     printf("%d", num_words);
// }

// ########################## //

// #include <stdlib.h>

// int word_len(char *str) {
//     int i = 0;
//     while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\t') {
//         i++;
//     }
//     return (i);
// }

// char *word_dup(char *str) {
//     int i = 0;
//     int len = word_len(str);
//     char *word = malloc(sizeof(char) * i + 1);
//     word[len] = '\0';
//     while (i < len) {
//         word[i] = str[i];
//         i++;
//     }
//     return (word);
// }

// void word_fills(char **array, char *str) {
//     int word_index = 0;

//     while (*str == ' ' || *str == '\t' || *str == '\n') {
//         ++str;
//     }
//     while (*str != '\0') {
//         array[word_index] = word_dup(str);
//         ++word_index;
//         while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n') {
//             ++str;
//         }
//         while (*str == ' ' || *str == '\t' || *str == '\n') {   
//             ++str;
//         }
//     }
// }

// int word_count(char *str) {
//     int i = 0;
//     while(*str == ' ' || *str == '\t' || *str == '\n') {
//         ++str;
//     }
//     while (str[i]) {
//         i++;
//         while (*str != '\0' && *str != ' ' && *str != '\t' && *str !== '\n') {
//             ++str;
//         }
//         while (*str == ' ' || *str == '\t' || *str == '\n') {
//             ++str;
//         }
//     }
//     return (i);
// }

// char **ft_split(char *str) {
//     int word_nums;
//     char **array;

//     word_nums = word_count(str);
//     array = malloc(sizeof(char *) * word_nums + 1);
//     array[word_nums] = 0;
//     word_fills(array, str);
//     return (array);
// }

// #include <unistd.h>

// int word_len(char *str) {
//     int i = 0;
//     while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
//         i++;
//     }
//     return(i);
// }

// char *word_dup(char *str) {
//     int i = 0;
//     int len = word_len(str);
//     char *word = malloc(sizeof(char) * (len + 1));
//     while (i < len) {
//         word[i] = str[i];
//         i++;
//     }
//     return (word);
// }

// void word_fills(char **array, char *str) {
//     int word_index;
    
//     while (*str == ' ' || *str == '\t' || *str == '\n') {
//         ++str;
//     }
//     while (*str != '\0') {
//         array[word_index] = word_dup(str);
//         ++word_index;
//         while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n') {
//             ++str;
//         }
//         while (*str = ' ' || *str == '\t' || *str == '\n') {
//             ++str;
//         }
//     }
// }

// int word_count(char *str) {
//     int i = 0;
//     while (*str == ' ' || *str == '\n' || *str == '\n') {   
//         ++str;
//     }
//     while (*str != '\0') {
//         i++;
//         while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n') {
//             ++str;
//         }
//         while (*str == ' ' || *str == '\t' || *str == '\n') {
//             ++str;
//         }
//     }
//     return (i);
// }

// char **ft_split(char *str) {
//     int word_nums;
//     char **array;

//     word_nums = word_count(str);
//     array = malloc(sizeof(char *) * word_nums + 1);
//     array[word_nums] = 0;
//     word_fills(array, str);
//     return (array);
// }

// int word_len(char *str) {
//     int i = 0;
//     while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\t') {
//         i++;
//     }
//     return (i);
// }

// char *word_dup(char *str) {
//     int i = 0;
//     int len = word_len(str);
//     char *word = malloc(sizeof(char) * len + 1);
//     word[len] = '\0';
//     while (i < len) {
//         word[i] = str[i];
//         i++;
//     }
//     return (word);
// }

// void word_fills(char **array, char *str) {
//     int word_index = 0;

//     while (*str == ' ' || *str == '\t' || *str == '\n') {
//         ++str;
//     }
//     while (*str != '\0') {
//         array[word_index] = word_dup(str);
//         word_index++;
//         while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\t') {
//             ++str;
//         }
//         while (*str == ' ' || *str == '\t' || *str == '\n') {
//             ++str;
//         }
//     }
// }

// int word_count(char *str) {
//     int i = 0;

//     while (*str == ' ' || *str == '\t' || *str == '\n') {
//         ++str;
//     }
//     while (*str != '\0') {
//         i++;
//         while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\t') {
//             ++str;
//         }
//         while (*str == ' ' || *str == '\t' || *str == '\n') {
//             ++str;
//         }
//     }
//     return (i);
// }

// char **ft_split(char *str) {
//     int wordnums;
//     char **array;

//     wordnums = word_count(str);
//     array = malloc(sizeof(char *) * wordnums + 1);
//     array[wordnums] = 0;
//     word_fills(array, str);
//     return (array);
// }
#include <stdlib.h>

int word_len(char *str) {
    int i;
    i = 0;

    while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
        i++;
    }
    return (i);
}

char *word_dup(char *str) {
    int i = 0;
    int len = word_len(str);
    char *word = malloc(sizeof(char) * len + 1);
    word[len] = '\0';
    while (i < len) {
        word[i] = str[i];
        ++i;
    }
    return (word);
}

void words_fill(char **array, char *str) {
    int word_index;
    word_index = 0;

    while (*str == ' ' || *str == '\t' || *str == '\n') {
        ++str;
    }
    while (*str != '\0') {
        array[word_index] = word_dup(str);
        ++word_index;
        while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n') {
            ++str;
        }
        while (*str == ' ' || *str == '\t' || *str == '\n') {
            ++str;
        }
    }
}

int count_words(char *str) {
    int i;
    i = 0;
    while (*str == ' ' || *str == '\t' || *str == '\n') {
        ++str;
    }
    while (*str != '\0') {
        ++i;
        while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n') {
            ++str;
        }
        while (*str == ' ' || *str == '\t' || *str == '\n') {
            ++str;
        }
    }
    return (i);
}

char **ft_split(char *str) {
    int word_nums;
    char **array;

    word_nums = count_words(str);
    array = malloc(sizeof(char *) * word_nums + 1);
    array[word_nums] = 0;
    words_fill(array, str);
    return (array);
}