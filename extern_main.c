#include <stdio.h>

// 別のファイルに宣言されている変数や関数利用するときに、リンクするときに実体があることを指し示す
extern int global_number;

int main(int argc, char const *argv[])
{
    /* code */
    printf("global_number = %d\n", global_number);
    return 0;
}
