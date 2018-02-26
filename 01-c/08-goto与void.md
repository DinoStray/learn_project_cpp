# goto 语法
STATUS:
    XXX
goto STATUS;

sizeof(void)
在 ASNI C 编译器中无法通过编译, C 语言没有定义 void 究竟是多大内存的别名
在 GNU 标准的编译器中合法

void 指针的意义
C 语言规定只有相同类型的指针才可以相互赋值
void* 作为左值接收任意类型的指针
void* 作为右值需要做强制类型转换
