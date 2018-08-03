enum, 第一个值默认为0, 后续在前一个值基础上加一  
```
enum Color
{
  GREEN,
  RED = 2,
  BLUE
};
enum Color c = GREEN;
```

enum 定义的值, 是 C 语言中真正意义上的常量  
在工程中用于定义整型常量  
```
enum // 无名枚举
{
  ARRAY_SIZE = 10, // 定义数组大小
};
int array[ARRAY_SIZE] = {0};
```

sizeof 的值在编译期确定, 是 C 语言的内置关键字而不是函数  
sizeof 用于类型 sizeof(type)  
用于变量 sizeof(var) sizeof var  
sizeof(var++) 不影响 var 的值  

typedef 用于给一个已经存在的数据类型定义别名, 本质上不产生新类型  
重命名的类型可以在 typedef 语句之后定义  

```
typedef struct _tag_list_node ListNode;
struct _tag_list_node
{
  ListNode* next;
};
```

typedef 重命名的类型, 不能被 unsigned 和 signed 修饰  
```
typedef int Int32;
unsigned Int32 ii = 0; // error
```
