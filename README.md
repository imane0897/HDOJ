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
scanf("%s", s);
gets(s);
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

```C

```



