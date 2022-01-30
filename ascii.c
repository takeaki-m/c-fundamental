#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 文字を数値として保存するための変数を宣言
    int character = 0;
    while (character < 256)
    {
        printf("%c ", character);

        character = character + 1;
        if((character % 16) == 0) {
            printf("\n");
        }
    }
    
    /* code */
    return 0;
}
