# ch2
本章主要内容是循环结构程序设计
## example
### floor() 
函数 floor() 返回不超过 x 的最大整数
```C
// 四舍五入
int m = floor(n + 0.5)

// 验证完全平方数
// Method 1
int m = floor(sqrt(n) + 0.5)
if (m*m = n)
//Method2
if(sqrt(n) == floor(sqrt(n)))
```
> 浮点运算可能存在误差，经过大量计算，由于误差的影响，整数1变成了0.9999999999
### 运行时间计算
```C
printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
```
clock（）获取整个程序的运行时间，包括键盘输入，这个时间除以常数CLOCKS_PER_SEC（这个常数值与系统有关）之后得到的值以“秒”为单位
### 输入输出框架
1. 标准输入输出
2. 重定向
3. fopen