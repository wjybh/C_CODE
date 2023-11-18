#include <stdio.h>

// int main()
// {
//     int i = 1;
//     while (i<=10)
//     {
//         printf("%d ", i);
//         i++;  
//     return 0;
// }

// int main()
// {
//     for (int i=1;i<=10;i++)
//     {
//         printf("%d ", i);
//     }
//     return 0;
// }

// int main()
// {
//     int i = 1;
//     do
//     {
//         printf("%d ", i);
//         i++;
//     }
//     while (i<=10);
//     return 0;
// }

//计算n的阶乘
// int main()
// {   
//     int i = 1;
//     int n = 0;
//     int ret = 1;
//     scanf("%d", &n);
//     for (i = 1; i<=n; i++)
//     {
//         ret = ret * i;
//     }
//     printf("%d", ret);
//     return 0;
// }

//计算1!+2!+3!....+10!

// int factorial(int n)
// {   
//     int i = 1;
//     int ret = 1;
//     for (i = 1; i<=n; i++)
//     {
//         ret = ret * i;
//     }
//     return ret;
// }

// int main()
// {   
//     int sum = 0;
//     for (int i = 1; i<=3; i++)
//     {
//         sum = sum + factorial(i);
//     }
//     printf("%d", sum);
//     return 0;
// }

//在有序数组中查找具体的某个数字n
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0]) - 1;
    while (left<=right)
    {
        int mid = (left+right)/2;
        if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            printf("找到了,下标是%d", mid);
            break;
        }
    }
    if (left>right)
    {
        printf("找不到\n");
    }
    
    return 0;
}

