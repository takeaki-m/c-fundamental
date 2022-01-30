#include <stdio.h>

int main(int argc, char const *argv[])
{
    char one_string[14];

    one_string[0] = 104;
    one_string[1] = 101;
    one_string[2] = 108;
    one_string[3] = 108;
    one_string[4] = 111;
    one_string[5] = 44;
    one_string[6] = 32;
    one_string[7] = 119;
    one_string[8] = 111;
    one_string[9] = 114;
    one_string[10] = 108;
    one_string[11] = 100;
    one_string[12] = 10;
    one_string[13] = 0;
    printf("%s", one_string);

    char one_string_quote[14];

    one_string_quote[0] = 'h';
    one_string_quote[1] = 'e';
    one_string_quote[2] = 'l';
    one_string_quote[3] = 'l';
    one_string_quote[4] = 'o';
    one_string_quote[5] = ',';
    one_string_quote[6] = ' ';
    one_string_quote[7] = 'w';
    one_string_quote[8] = 'o';
    one_string_quote[9] = 'r';
    one_string_quote[10] = 'l';
    one_string_quote[11] = 'd';
    one_string_quote[12] = '\n';
    one_string_quote[13] = '\0';
    printf("%s", one_string_quote);

    char one_string_direct[14] = "hello, wolrd\n";
    printf("%s", one_string_direct);

    // ERROR
    // char one_string_direct_error[14];
    // one_string_direct_error = "hello, wolrd\n";
    // printf("%s", one_string_direct);


    return 0;
}
