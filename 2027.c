#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, array[5];
    char str[101];
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        gets(str);
        memset (array, 0, 5 * sizeof(int));
        for (int i = 0; str[i] != '\0'; i++)
        {
            switch (str[i])
            {
            case 'a':
                array[0]++;
                break;
            case 'e':
                array[1]++;
                break;
            case 'i':
                array[2]++;
                break;
            case 'o':
                array[3]++;
                break;
            case 'u':
                array[4]++;
                break;
            }
        }
        printf("a:%d\n", array[0]);
        printf("e:%d\n", array[1]);
        printf("i:%d\n", array[2]);
        printf("o:%d\n", array[3]);
        printf("u:%d\n", array[4]);
        if (n > 0)
        {
            printf("\n");
        }
    }
    return 0;
}