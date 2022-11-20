#include <stdio.h>


int plus(a,b)
{
    printf("Value\n");
    scanf("%d", &b);
    a = a + b;
    return (a);
}
int minus(a,b)
{
    printf("Value\n");
    scanf("%d", &b);
    a = a - b;
    return (a);
}
int delenie(a,b)
{
    printf("Value\n");
    scanf("%d", &b);
    a = a / b;
    return (a);
}
int umnoshenie(a,b)
{
    printf("Value\n");
    scanf("%d", &b);
    a = a * b;
    return (a);
}





int main(void)
{
    int a,b = 0,c,d;
    printf("Operation count?\n");
    scanf("%d",&c);
    for (int i = 0; i < c;) {
        if (i == 1 )
            {
                 printf("value?\n");
                 scanf("%d", &a);
            }
        printf("Operation id? 1 - plus, 2 - minus, 3 - delenie, 4 - umnoshenie\n");
        scanf("%d", &d);

            if (d == 1)
            {
                a = plus(a,b);
            }
            else  if (d == 2)
            {
                a = minus(a,b);
            }
            else if (d == 3)
            {
                a = delenie(a,b);
            }
            else if (d == 4)
            {
                a = umnoshenie(a,b);
            }
        i++;

    }
    printf("%d is a result\n",a);

}
