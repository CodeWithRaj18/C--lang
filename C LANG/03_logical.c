#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    printf("the vaule of a and  b is %d \n", a && b);
    printf("the vaule of a or  b is %d \n", a || b);
    printf("the value of not(a) is %d", !a);
    if (a && b)
    {
        printf("both are true");
        // we collab both of them a and b by using opertors other wise we have to do like this
        // both are the same thing
        if (a)
        {
            if (b)
            {
                printf("both are true");
            }
        }
    }
    return (0);
}