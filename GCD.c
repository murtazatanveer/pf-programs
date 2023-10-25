#include<stdio.h>
int main(){

int lar,count;

int num_1;
printf("\nEnter 1st Number : ");
scanf("%d",&num_1);

int num_2;
printf("\nEnter 2nd Number : ");
scanf("%d",&num_2);

if(num_1>num_2){

lar=num_1;

}

else{
    lar=num_2;
}

for(int i=1;i<=lar;i++){

if( (num_1%i==0) && (num_2%i==0)){

count=i;

}


}
printf("\n\nGcd of %d and %d is %d",num_1,num_2,count);


}