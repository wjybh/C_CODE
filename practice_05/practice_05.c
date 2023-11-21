#include <stdio.h>
#include <string.h>

// int main()
// {
//     char arr1[20] = { 0 };
//     char arr2[] = "hello world";
//     strcpy(arr1, arr2);
//     printf("%s\n", arr1);
//     memset(arr2+5, 'x', 5);
//     printf("%s\n", arr2);
//     return 0;
// }


// int get_max(int x, int y)
// {
//     return (x > y ? x : y);
// }
// int main()
// {   
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     //求较大值
//     int m = get_max(a, b);
//     printf("%d\n", m);
//     return 0;
// }


// void Swap(int* px, int* py)
// {
//     int temp = 0;
//     temp = *px;
//     *px = *py;
//     *py = temp;
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     printf("before swap: a=%d, b=%d\n", a, b);
//     Swap(&a, &b);
//     printf("after swap: a=%d, b=%d\n", a, b);
//     return 0;
// }

//打印100-200之间的素数
//素数是只能被1和本身整除的数
int is_prime(int n)
{
    for (int j = 2; j <= sqrt(n); j++)
    {
        if (n%j == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    for (int i = 100; i<=200; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}

