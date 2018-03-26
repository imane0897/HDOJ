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
//	结构体排序
int cmp(const void *a, const void *b)
{
    return ((struct name*)a)->item - ((struct naem*)b)->item;
}
qsort(array, 6, sizeof(struct name), cmp)
```

### 文件读写

```C
FILE *fp;
// 文件打开
if ((fp=fopen("C:\\f12.txt", "r"))==NULL)
{
    printf("File Open Error.\n");
    exit(0);
}
// 文件关闭
if (fclose(fp))
{
    printf("Cannot Close the File.\n");
    exit(0);
}
// 格式化方式读写
fscanf(fp, "%d", &n);
fprintf(fp, "%d", n);
// 字符方式读写
ch = fget(fp);
fputc(ch, fp);
```



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

### 多边形面积

```C
double cross_product(double x1, double y1, double x2, double y2)
{
    return x1 * y2 - x2 * y1;
}
int main(void)
{
    for (i = 0; i < n - 1; ++)
    {
        sum += cross_product(x[i], y[i], x[i+1], y[i+1]) / 2;
    }
    sum += cross_product(x[i], y[i], x[0], y[0]) / 2;
}
```

（题目：2036）