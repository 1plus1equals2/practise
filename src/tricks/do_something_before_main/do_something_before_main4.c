#include <stdio.h>
//需要使用g++编译

int func()
{
    printf("before main\n");
    return 0;
}

int g_value = func();

int main(void)
{
    printf("main\n");
    return 0;
}
