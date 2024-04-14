#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av) {
    if (ac >= 2) {
        int i;
        int ac_nb;

        i = 0;
        ac_nb = 1;
        while (ac_nb < ac) {
            i = 0;
            while (av[ac_nb][i]) {
                if (av[ac_nb][i] >= 'A' && av[ac_nb][i] <= 'Z') {
                    av[ac_nb][i] += 32;
                }
                if (av[ac_nb][0] >= 'a' && av[ac_nb][0] <= 'z')
                    av[ac_nb][0] -= 32; 
                if (av[ac_nb][i] >= 'a' && av[ac_nb][i] <= 'z') {
                    if (av[ac_nb][i-1] <= 32) {
                        av[ac_nb][i] -= 32;
                    }
                }
                write(1, &av[ac_nb][i], 1);
                i++;
            }
            write(1, "\n", 1);
            ac_nb++;
        }
    }
    else
        write(1, "\n", 1);
}