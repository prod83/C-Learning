#include<stdio.h>
#include<math.h>
// find sin function
//
int main(void)
{ 
 double value;

 printf("Enter value between 0 and 1:");
 scanf("%lf", &value);
 printf("sin(%lf) is %lf\n", value, sin(value));

return 0;
}


