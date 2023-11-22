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
// int is_prime(int n)
// {
//     for (int j = 2; j <= sqrt(n); j++)
//     {
//         if (n%j == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     for (int i = 100; i<=200; i++)
//     {
//         if (is_prime(i))
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// int is_leap_year(int year)
// {
//     if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
//         return 1;
//     else
//         return 0;
// }
// int main()
// {
//     for (int year=1000; year<=2000; year++)
//     {
//         if (is_leap_year(year))
//         {
//             printf("%d ", year);
//         }
//     }
//     return 0;
// }

// int main()
// {
//     printf("%d", printf("%d", printf("%d", 43)));
//     return 0;
// }

//递归
// void print(unsigned int n)
// {
//     if (n>9)
//     {
//         print(n/10);
//     }
//     printf("%d ", n%10);
// }
// int main()
// {
//     unsigned int num = 0;
//     scanf("%u", &num);
//     print(num);
//     return 0;
// }

//模拟实现strlen
// int my_strlen(char* str)
// {
//     int count = 0;
//     while (*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
// int my_strlen(char* str)
// {
//     if (*str != '\0')
//     {
//         return 1 + my_strlen(str+1);
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int len = my_strlen("abc");
//     printf("%d\n", len);
//     return 0;
// }

//n的阶乘
// int fac(int n)
// {
//     if (n<=1)
//         return 1;
//     else
//         return n * fac(n-1);
// }
// int main()
// {   
//     int n = 0;
//     scanf("%d", &n);
//     int ret = fac(n);
//     printf("ret = %d\n", ret);
//     return 0;
// }

//求第n个斐波那契数
int fib(int n)
{
    if (n<=2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}
int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;

    while (n >= 3)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fib(n);
    printf("ret = %d\n", ret);
    return 0;
}