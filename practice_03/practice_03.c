#include <stdio.h>

// int main()
// {
//     int age = 65;
//     if (age<18)
//         printf("青少年\n");
//     else if (age>=18 && age<28)
//         printf("青年\n");
//     else if (age>=28 && age<40)
//         printf("中年\n");
//     else if (age>=40 && age<60)
//         printf("壮年\n");
//     else if (age>=60 && age<80)
//         printf("老年\n");
//     else
//         printf("老寿星\n");
//     return 0;
// }

// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     if (num%2 == 1)
//         printf("奇数\n");
//     else
//         printf("偶数\n");
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     while (i<=100)
//     {
//         if (i%2 == 1)
//             printf("%d: 奇数\n", i);
//         else
//             printf("%d: 偶数\n", i);
//         i++;
//     }       
//     return 0;
// }

// int main()
// {
//     int day = 0;
//     scanf("%d", &day);
//      switch (day)
//      {
//     //  case 1:
//     //     printf("星期一\n");
//     //     break;
//     //  case 2:
//     //     printf("星期二\n");
//     //     break;
//     //  case 3:
//     //     printf("星期三\n");
//     //     break;
//     //  case 4:
//     //     printf("星期四\n");
//     //     break;
//     //  case 5:
//     //     printf("星期五\n");
//     //     break;
//     //  case 6:
//     //     printf("星期六\n");
//     //     break;
//     //  case 7:
//     //     printf("星期天\n");
//     //     break;
//      case 1:
//      case 2:
//      case 3:
//      case 4:
//      case 5:
//         printf("weekday\n");
//         break;
//      case 6:
//      case 7:
//         printf("weekend\n");
//         break;
//      }
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     while (i<=10)
//     {   
//         i++;
//         if (i == 5)
//             continue;
//         printf("%d\n", i);       
//     }   
//     return 0;
// }

// int main()
// {
//     // int ch = getchar();
//     // printf("%c\n", ch);
//     // putchar(ch);
//     int ch = 0;
//     while ((ch = getchar()) != EOF)
//     {
//         putchar(ch);
//     }
//     return 0;
// }

int main()
{
    char password[20] = {0};
    printf("请输入密码: ");
    scanf("%s", password);
    getchar();
    printf("请确认密码(Y/N): ");
    int ret = getchar();
    if ('Y' == ret)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

