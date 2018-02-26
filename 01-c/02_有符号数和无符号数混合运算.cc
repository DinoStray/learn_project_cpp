#include <stdio.h>
#include "catch.hpp"

TEST_CASE("signed and unsigned integer operation")
{
    int a = -10;
    unsigned int b = 5;
    int k = a + b;

    printf("%d, %u\n", k, k);
    if (a + b > 0)
    {
        printf("a + b > 0\n");
    }
    else
    {
        printf("a + b < 0\n");
    }
}
// 结果:
// -5, 4294967291
// a + b > 0

//总结:
// 1. %d 或者 %u, 对内存中的二进制数据是没有任何影响的, 它们只是标识怎样解析这些二进制数据
// 2. 4294967291 是无符号数解析结果, -5 是有符号数的解析结果
// 3. 有符号数 和 无符号数混合运算, 统一提升为无符号数, 运算结果为无符号数
// 4. 在 if 语句中, 使用 %u 相同的解析方式, 对内存数据做解析
