#include <stdio.h>

// int main()
// {
//     int arr[10];
//     char ch[5];
//     double data1[20];
//     double data2[15+5];
//     //下面的代码只能在支持C99标准的编译器上编译
//     int n = 10;
//     scanf("%d,"&n);
//     int arr2[n];//这种数组是不能初始化的
//     return 0;
// }

// int main()=
// {
//     //不完全初始化，剩余的元素默认初始化为0
//     int arr1[10] = {1,2,3};
//     int arr2[10] = {1,2,3,4,5,6,7,8,9,0};
//     int arr3[] = {1,2,3};
//     char ch1[10] = {'a','b','c'};
//     char ch2[10] = 'abc';
//     char ch3[] = {'a','b','c'};
//     char ch4[] = 'abc';
//     return 0;
// }

//1 2 3 4
//2 3 4 5
//3 4 5 6
// int main()
// {
//     int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//     char arr2[5][10] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
//     int arr3[][4] = {{1,2,3,4},{2,3}};
//     for (int i = 0; i < 3; i++)
//     {
//         for( int j = 0; j < 4; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// void bubble_sort(int arr[], int sz)
// {
//     for (int i = 0; i < sz-1; i++)
//     {
//         for (int j = 0; j < sz-1-i; j++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = { 9,8,7,6,5,4,3,2,1,0};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr, sz);
//     for (int i = 0; i < sz; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }

// int main()
// {
//     int arr[10] = {0};
//     printf("%p\n", arr);
//     printf("%p\n", arr+1);
//     printf("-------------------\n");
//     printf("%p\n", &arr[0]);
//     printf("%p\n", &arr[0]+1);
//     printf("-------------------\n");
//     printf("%p\n", &arr);
//     printf("%p\n", &arr+1);
//     return 0;
// }

int main()
{
    int arr[3][4];
    printf("%d\n", sizeof(arr)/sizeof(arr[0]));
    printf("%d\n", sizeof(arr[0])/sizeof(arr[0][0]));
    // arr;
}

