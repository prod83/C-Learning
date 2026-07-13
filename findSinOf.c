#include<stdio.h>
// find sin function
//enter first value that represents the value of the adjacent side
//enter second value that represents the value of the opposide side
//C will turn values to doubles then divide adjacent by opposite a

int main(void)
{ 
 double adjacent;
 double opposite;
 printf("Enter adjacent side value:");
 scanf("%lf", &adjacent);
 printf("Enter opposite side value:");
 scanf("%lf", &opposite);
printf("Sin is : %lf \n\n", adjacent/opposite);
return 0;
}


