#include <stdio.h>

// パラメータを取らず、字文字列を呼び出し元の関数に渡す関数func

char * func(void)
{
    // 以下の変数は、スタック上に確保される。func()関数の終了時点で他の処理に使われて内容が破壊されるから、
    // 以下のmainメソッドを実行しても想定した表示ができない
    char one_string[14] = "hello, world\n";

    printf("from func: %s", one_string);

    return one_string;
}

// メイン関数
int main(int argc, char const *argv[])
{
    printf("from main: %s", func());
    return 0;
}
