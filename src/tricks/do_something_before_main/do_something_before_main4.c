#include <stdio.h>
//��Ҫʹ��g++����

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
