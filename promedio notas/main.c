#include<stdio.h>

int main(){

printf("are you welcome \n");

float onenote;
float twonote;
float threenote;
float fournote;
float fivenote;

printf("in one note \n");
scanf("%f",&onenote);
printf("in two note \n");
scanf("%f",&twonote);
printf("in three note \n");
scanf("%f",&threenote);
printf("in four note \n");
scanf("%f",&fournote);
printf("in five note \n");
scanf("%f",&fivenote);

float promnotes=(onenote + twonote + threenote + fournote + fivenote)/5;
printf("your prom is:%f",promnotes);

return 0;

}


