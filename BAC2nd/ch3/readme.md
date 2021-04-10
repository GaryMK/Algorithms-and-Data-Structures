## chapter 3
### Programs
#### 3-1
比较大的数组尽量声明在main函数外，否则程序可能无法运行
#### 3-2
```C
memcpy(b, a, sizeof(int) * k);
memset(a, 0, sizeof(a));
```
#### 3-3
蛇形填数
#### 3-4
竖式问题
转义序列（Escape Sequence）：以反斜线开头的字符
##### 函数
strchr(str, c): 在一个字符串中查找单个字符;在字符串str中寻找字符C第一次出现的位置，并返回其位置（地址指针），若失败则返回NULL；
sprintf: 输出到字符串，应该保证写入的字符串有足够的空间
> 至少字符个数加1，因为C语言的字符串是以空字符 “\0”结尾的
strlen: 获取字符串的实际长度，就是结束标记之前的字符个数

> 变量在赋值之前是不确定的

strcpy,strcmp,strcat: 赋值、比较和连接(string.h)

```C
    int count = 0;
    printf("%d %d %d", count++, count++, count++);
    
    // output
    2 1 0
```

#### 3-6
环状序列