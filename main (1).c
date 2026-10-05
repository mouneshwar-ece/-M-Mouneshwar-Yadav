#include <stdio.h>
int main()
{
    int a,b,choice,res;
    printf("=====BITWISE OPERATIONS=====\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("\n-----MENU-----");
    printf("1.Bitwise and(&)\n");
    printf("2.Bitwise or(!)\n");
    printf("3.Bitwise xor(^)\n");
    printf("4.Bitwise not(~)\n");
    printf("5.Left shift(<<)\n");
    printf("6.Right shift(>>)\n");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
             res=a+b;
             printf("Bitwise and Result=%d", res);
             break;
        case 2:
             res=a/b;
             printf("Bitwise or Result=%d", res);
             break;
        case 3:
             res=a^b;
             printf("Bitwise xor Result=%d", res);
             break;
        case 4:
             res=~a;
             printf("Bitwise not Result=%d", res);
             break;
        case 5:
             res=a<<b;
             printf("Left shift Result=%d", res);
             break;
        case 6:
             res=a>>b;
             printf("Right shift Result=%d", res);
             break;
             default:
             printf("Invalid choice: ");
    }
    return 0;
}                 
            
   
       
