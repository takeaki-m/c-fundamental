#include <stdio.h>

void func(void) {
    // 関数の実行回数を記録する
    // しかしローカル関数として宣言すると、関数の処理が終了した時点で、変数は破棄されるから、回数は保存されない
    // int count = 0;
    // そこで、静的関数として保存する
    static int count = 0;

    count = count + 1;

    printf("count = %d\n", count);
    return;

}

int main(int argc, char *argv[]) {
    func();
    func();
    func();

    return 0;
}