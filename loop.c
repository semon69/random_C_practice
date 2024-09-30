#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    // if (a < 10)
    // {
    //     if (a == 5)
    //     {
    //         printf("A is equal 5");
    //     }else{
    //         printf("A less than 10 but not equal 5");
    //     }

    // }else{
    //     printf("A greater than 10");
    // }
    // return 0;


    switch (a)
    {
    case 1:
        printf("Friday");
        break;
    case 2:
        printf("Saturday");
        break;
    case 3:
        printf("Sunday");
        break;
    case 4:
        printf("Monday");
        break;

    default:
        printf("Wrong number"); 
        break;
    }
}
