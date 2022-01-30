#include <stdio.h>

// constの定数定義を確認するプログラム。コンパイルエラーになる
int main(int argc, char const *argv[])
{
    /* code */
    const char charcter = 'A';
    const int number = 1;

    printf("character is = %c\n", charcter);
    printf("number is = %d\n", charcter);

    charcter = '0'; // コンパイルエラー
    number = 2;     // コンパイルエラー
    return 0;
}
