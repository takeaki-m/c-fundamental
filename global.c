#include <stdio.h>

// 大域変数global_numberを宣言
int global_number;

void func_1(void) {
    printf("from func_1: %d\n", global_number);
    return;
}
void func_2(void) {
    printf("from func_2: %d\n", global_number);
    return;
}
void func_3(void) {
    printf("from func_3: %d\n", global_number);
    return;
}

int main(int argc, char const *argv[])
{
    global_number = 1;
    func_1();

    global_number = 10;
    func_2();

    global_number = 100;
    func_3();

    return 0;
}

