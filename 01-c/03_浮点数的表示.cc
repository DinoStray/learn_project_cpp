#include <stdio.h>
#include "catch.hpp"

TEST_CASE("float number")
{
    float f = 8.25;

    unsigned int* p = (unsigned int*)&f;

    printf("0x%08X\n", *p);
}

// 运行结果 0x41040000
// 对应 0100 0001 0000 0100 ...
// 0 10000010 0000100 ...

//        符号位   指数   尾数
// float  1位      8位   23位
// double 1位     11位   52位
// 指数 全为 0 尾数任意 趋近 0 的值
// 指数 全为 1 尾数全为 0 无穷大
// 指数 全为 1 尾数非全 0 NAN not a number 非数值型

// 分析程序
// 8 二进制  1000
// 0.25 二进制  0.01
// 得 1.00001 * 2^3
// 符号位为 0
// 指数位 3 + 127 = 130  1000 0010  (float 偏移地址 127 double 偏移地址 1023)
// 尾数位 00001
