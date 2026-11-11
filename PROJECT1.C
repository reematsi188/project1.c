#include <stdio.h>
int main()
{
float a,b;
char c;
scanf("%f %c %f",&a,&c,&b);
switch(c)
{
case '+':
{
printf("addition=%f",a+b);
break;
}
case'-':
{
printf("subtraction= %f",a-b);
break;
}
case'*':
{
printf("multiplication=%f",a*b);
break;
}
case'/':
{
printf("division=%f",a/b);
break;
}
}
return 0;
}                    666