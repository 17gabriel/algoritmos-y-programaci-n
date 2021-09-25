#include <stdio.h>
#include <stdlib.h>

void WelcomeMessage(){
printf("wellcome, please enter 10 numbers for know if odd or even numbers \n");  
}
 
void funtionOddOrEvenNumbers(){
int oddAndEvenNumbers [10]; 
for (int i = 0; i < 10; i++){
scanf("%d", &oddAndEvenNumbers[i]);
}

    for (int i = 0; i < 10; i++){ 
        if(oddAndEvenNumbers[i]% 2==0){
        printf("%d this is even number\n",oddAndEvenNumbers[i]);
        
 
        } else{ 
        printf("%d this is odd number\n",oddAndEvenNumbers[i]);
       }  
    }
}

int main(int argc, char const *argv[]){


    WelcomeMessage();
    funtionOddOrEvenNumbers();

    return 0;
}