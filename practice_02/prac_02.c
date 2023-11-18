#include <stdio.h>

// int main()
// {   
//     int input = 0;
//     printf("要好好学习吗(1/0)?");
//     scanf("%d", &input);
//     if (input==1)
//     {
//         printf("好offer\n");
//     }
//     else
//     {
//         printf("卖红薯\n");
//     }
//     return 0;
// }

// int main()
// {
//     int line = 0;
//     printf("加入比特\n");
//     while (line<20000)
//     {
//         printf("写代码: %d\n", line);
//         line++;
//     }
//     if (line>=20000)
//     {
//         printf("好offer\n");
//     }  
//     else
//     {
//         printf("继续加油\n");
//     }
//     return 0;
// }

// int main()
// {
//     int a = 7/2;
//     int b = 7%2;
//     float c = 7/2.0;
//     printf("%d\n", a);
//     printf("%d\n", b);
//     printf("%.2f\n", c);

//     int a = 10;
//     int b = a++; //后置++，先使用，后++
//     //int b = a; a = a+1
//     printf("%d\n", b);//10
//     printf("%d\n", a);//11

//     int c = 10;
//     int d = ++c; //前置++，先++，后使用
//     //c = c+1; d = c;
//     printf("%d\n", d);//11
//     printf("%d\n", c);//11

//     return 0;
// }

// int main()
// {   
    // && 逻辑与 - 并且
    // || 逻辑或 - 或者

    // int a = 0;
    // int b = 20;
    // if (a&&b)
    // {
    //     printf("hehe\n");
    // } 
    // if (a||b)
    // {
    //     printf("haha\n");
    // }

//     int a = 10;
//     int b =20;
//     int r = a > b ? a : b;
//     printf("%d\n", r);
    
//     return 0;
// }

// int Add(int x, int y)
// {
//     return x+y;
// }

// int main()
// {
//     int sum = Add(2, 3); // ()就是函数调用操作符,Add,2,3都是()的操作数
//     printf("%d\n", sum);
//     return 0;
// }

//static
//1. 修饰局部变量       static修饰局部变量的时候，局部变量出了作用域，不销毁的.
//                     本质上，static修饰局部变量的时候，改变了变量的存储位置的。                        
//2. 修饰全局变量       static修饰全局变量的时候这个全局变量的外部链接属性就变成了内部链接属性。
//                     其他源文件(.c)就不能再使用到这个全局变量了。
//3. 修饰函数           一个函数本来是具有外部链接属性的但是被static修饰的时候，
//                     外部链接属性就变成了内部链接属性，其他源文件(.c)就无法使用了。

// void test()  //void 表明函数不需要任何返回
// {
//     static int a = 1;
//     a++;
//     printf("%d ", a);
// }

// int main()
// {
//     int i = 0;
//     while (i<10)
//     {
//         test();
//         i++;
//     }

//     return 0;
// }

// int main()
// {
//     // 寄存器变量
//     register int num = 3; //建议：3存放在寄存中
//     return 0;
// }

// #define NUM 100
// #define ADD(x,y) x+y
// int main()
// {
//     // printf("%d\n", NUM);
//     // int n = NUM;
//     // printf("%d\n", n);
//     // int arr[NUM] = {0};
//     int a = 10;
//     int b = 20;
//     int c = ADD(a,b);
//     printf("%d\n", c);
//     return 0;
// }

// int main()
// {
//     int a = 10; //向内存申请4个字节，储存10
//     &a; //取地址操作符
//     printf("%p\n", &a);
//     int* p = &a;
//     // p就是指针变量
//     *p = 20; //解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
//     printf("%d\n", a);

//     char ch = 'w';
//     char * pc = &ch;

//     return 0;
// }

// struct Stu
// {
//     char name[20];
//     int age;
//     char sex[10];
//     char tele[12];
// };

// void print(struct Stu* ps)
// {
//     printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//     printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
// }

// int main()
// {
//     struct Stu s = {"zhangsan", 20, "nan", "13525348793"};
//     printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//     print(&s);
//     return 0;
// }
