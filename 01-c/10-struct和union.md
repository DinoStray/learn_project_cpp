sizeof 空结构体: C 语言中的灰色地带

gcc 空结构体 sizeof 0
struct TS t1;
struct TS t2;
t1 t2 地址相同

bcc 编译器: Compile Error: Size of the type 'TS' is unknown or zero
cl 编译器: C requires that a struct or union has at least one member



柔性数组: C99拓展
避免内存分配不连续, 避免空间浪费(指针空间, 或固定空间)
struct SoftArray
{
  int len;
  int array
};

union 的使用受大小端的影响
union C
{
  int i;
  char c;
};
union C c;
c.i = 1;
printf("%d\n", c.c); // 小端 1, 大端 0
