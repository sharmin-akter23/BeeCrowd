#include <stdio.h>
int main()
{
int A,B;
float C;

scanf("%d\n",&A);
scanf("%d\n",&B);
scanf("%f\n",&C);

float salary = B * C;
printf("NUMBER = %d\n",A);
printf("SALARY = U$ %.2f\n",salary);

 return 0;
}