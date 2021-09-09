#include<stdio.h>

//En el mes de septiembre tenemos un descuento especial para ti por cualquier  compra  que realices en nuetro almacén

int main(){

    printf("¿what do you want to buy?  \n");

    float buygeneral;
    float buyWhitTV;
    float valuetoPay;

    printf("¿you will make a general purchase?  \n");
    scanf("%f",&buygeneral);

    printf("¿do you want to include a TV on sale? \n");
    scanf("%f",&buyWhitTV);

    printf(" ¿let you know the value of your purchase? \n") ;
     scanf("%f",&valuetoPay);



    if (buygeneral  ==1)
     printf("\n su descuento es 10% %f") ;
     
    

    if (buyWhitTV  ==1)
     printf("\n su descuento es 15% %f") ;

    
    
    if (valuetoPay  >=1)
    printf("\n its total value to pay is: $ %f") ;



 




 

return 0;

}




