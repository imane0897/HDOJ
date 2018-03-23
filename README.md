# HDOJ

## 需要记住的库函数

### string.h

```C
// 连接
char *strcat(char *dest, const char *src)
// 比较
int strcmp(const char *str1, const char *str2)
// 复制
char *strcpy(char *dest, const char *str2)
// memset
void *memset(void *ptr, int value, size_t num)
```

### stdlib.h

```C
int abs(int x)
// 返回 x 的绝对值
```

### math.h

```C
double sqrt(double x)
// 返回 x 的平方根
double pow(double x, double y)
// 返回 x 的 y 次幂
double fabs(double x)
// 返回 x 的绝对值
```

### limits.h

```C
INT_MAX
INT_MIN
```

## 字符串处理

```C
// 读入
scanf("%s", s); // 遇到空格结束
gets(s);        // 遇到回车结束
// 读入字符串直到文件尾
while (gets(s)) {}
// 遍历
for (p = s; *p != '\0'; p++) {}
#include <string.h>
char str[100];
for (i = 0; i < strlen(str); i++) {}
```

## 常见处理

### 交换值

```c
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

### qsort 排序

```c
// function
void qsort(void *base, size_t num, size_t size, int(*compare)(const void*, const void*))
// example
#include <stdlib.h>
int cmp(const void * a, const void * b)
{
    return *(int*)a - *(int*)b;
}
int main(void)
{
    int array[] = {4, 1, 10, 9, 2, 5};
    qsort(array, 6, sizeof(int), cmp);
}
```

### 文件读写

### 求最大公约数

```c
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
```

### 汉字统计
汉字的 ASCII 值为负，且一个汉字占两个字符。（题目；2030）