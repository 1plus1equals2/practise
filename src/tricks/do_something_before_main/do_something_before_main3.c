#include <stdio.h>
#include <stdlib.h>
//gcc -e before_main do_something_before_main3.c

int main(int argc, char **argv) {
    printf("main\n");

    return 0;
}

int before_main(int argc, char **argv) {
    printf("before_main\n");

    exit(main(argc, argv));
}
