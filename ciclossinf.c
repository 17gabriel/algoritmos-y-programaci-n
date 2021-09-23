#include <stdio.h>

int TableNumber, ResultTableNumber; 
void startprocess(){
    printf("welcome to multiplication tables program\n");
    printf("plase enter Table Number:");
}

void FuntionFor(){
    
     scanf ("%d",&TableNumber);
    for (int i=1; i<=10;  i++){
        
    ResultTableNumber = TableNumber*i;
    
    printf("Table %d * %d =%d\n" ,TableNumber ,i, ResultTableNumber );
    }
FuntionWhile();
FuntionDoWhile();
}

void FuntionWhile(){


int i=0;

    while (i<=9){
        i++;
    int ResultTableNumber = TableNumber*i;
    printf("Table %d * %d =%d\n" ,TableNumber ,i, ResultTableNumber );
    }
}

int FuntionDoWhile(){
    int i=0;
    do {
    ResultTableNumber = TableNumber*i;
    printf("Table %d * %d =%d\n" ,TableNumber ,i, ResultTableNumber );
    i=1+i;
    } while(i<=10);

}

int main()
{ 
startprocess();
FuntionFor();
printf("please reboot to get a new result from a table number");
return 0;
}
