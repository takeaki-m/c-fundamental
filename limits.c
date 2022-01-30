#include <stdio.h>

int
main(int argc, char *arfv[])
{
    /*
     * 変数の宣言
     */
    char char_min, char_max;
    short short_min, short_max;
    int int_min, int_max;
    long long_min, long_max;
    unsigned char unsigned_char_min, unsigned_char_max;
    unsigned short unsigned_short_min, unsigned_short_max;
    unsigned int unsigned_int_min, unsigned_int_max;
    unsigned long unsigned_long_min, unsigned_long_max;
    unsigned long long unsigned_long_long_min, unsigned_long_long_max;
    float float_min, float_max;
    double double_min, double_max;

    char_min = 0x80;
    char_max = 0x7f + 1;

    short_min = 0x8000;
    short_max = 0x7FFF;

    int_min = 0x80000000;
    int_max = 0x7FFFFFFF + 1;

    long_min = 0x8000000000000000;
    long_max = 0x7FFFFFFFFFFFFFFF;

    unsigned_char_min = 0x00;
    unsigned_char_max = 0xFF;

    unsigned_short_min = 0x0000;
    unsigned_short_max = 0xFFFF;

    unsigned_int_min = 0x00000000;
    unsigned_int_max = 0xFFFFFFFF;

    unsigned_long_min = 0x00000000;
    unsigned_long_max = 0xFFFFFFFF;

    unsigned_long_long_min = 0x000000000000000;
    unsigned_long_long_max = 0xFFFFFFFFFFFFFFF;

    float_min = -3.402823e+38;
    float_max = 3.402823e+38;

    double_min = -1.797693e+308;
    double_max = 1.797693e+308;

    printf("char_min = %d, char_max = %d\n", char_min, char_max);
    printf("short_min = %d, short_max = %d\n", short_min, short_max);
    printf("int_min = %d, int_max = %d\n", int_min, int_max);
    printf("long_min = %ld, long_max = %ld\n", long_min, long_max);
    printf("unsigned_char_min = %u, unsigned_char_max = %u\n", unsigned_char_min, unsigned_char_max);
    printf("unsigned_short_min = %u, unsigned_short_max = %u\n", unsigned_short_min, unsigned_short_max);
    printf("unsigned_int_min = %u, unsigned_int_max = %u\n", unsigned_int_min, unsigned_int_max);
    printf("unsigned_long_min = %lu, unsigned_long_max = %lu\n", unsigned_long_min, unsigned_long_max);
    printf("unsigned_long_long_min = %llu, unsigned_long_long_max = %llu\n", unsigned_long_long_min, unsigned_long_long_max);
    printf("float_min = %f, float_max = %f\n", float_min, float_max);
    printf("double_min = %f, double_max = %f\n", double_min, double_max);

    return 0;
}