# goto 语法
```
STATUS:
    XXX
goto STATUS;
```
目前 goto 被过分妖魔化了, 对 goto 的使用可以 参考 go 对 goto 的限制(go 源码使用 goto 有 1000 多处):  
1. 不能跳转到其他函数
2. 不能跳转到内层代码块内


sizeof(void)  
在 ASNI C 编译器中无法通过编译, C 语言没有定义 void 究竟是多大内存的别名  
在 GNU 标准的编译器中合法  
在 gcc 中, 对标准做了拓展, sizeof(void) 返回 1  
https://stackoverflow.com/questions/1666224/what-is-the-size-of-void  


void * 指针的意义  
C 语言规定只有相同类型的指针才可以相互赋值  
void* 作为左值接收任意类型的指针  
void* 作为右值需要做强制类型转换  
