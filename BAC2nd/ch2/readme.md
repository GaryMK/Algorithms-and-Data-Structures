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
## exercise
### 2-4
```C
    // Bug 1
    //错误样例
    int n = 5;
    double m;
    m = 1 / n;
    printf("%d", m);
    //output
    0.0000000

    //正确
    m = 1.0 / n

    // Bug 2
    // 乘法溢出
    1 / (65536 * 65536)
    // 转换成
    1 / 65536 / 65536
```
### ***2-5***
double的有效精度只有16位
两个int型乘除运算，通过***乘以1.0***转换成浮点数

**思路**
这道题主要要注意的是小数的位数需要人工输入，就是模拟保留小数位的过程，具体的思路是先输出整数位和小数点，小数位则通过上一次除后的所得余数再除除数依次类推，到最后一位时要根据下一位的数值来判断是否进位。
> '~'是位运算符，在二进制中是按位取反的意思，也就是0变成1，1变成0.
### ***2-6***
【分析】因为abc:def:ghi=1：2：3，所以abc最大不超过333，最小不超过111，可以以abc为基数，用abc来表示def和ghi，用一个数组储存1-9，共9个数，将用过的数里存为1，输出时判断数组加起来是否为9即可
## topic
### 2-2
```C
// 判断浮点数值相等
if(fabs(i - 10) <= 1e-5)
```
> 单精度数的尾数用23位存储，加上默认的小数点前的1位1，2^(23+1) = 16777216。因为 10^7 < 16777216 < 10^8，所以说单精度浮点数的有效位数是7位。
> 双精度的尾数用52位存储，2^(52+1) = 9007199254740992，10^16 < 9007199254740992 < 10^17，所以双精度的有效位数是16位。