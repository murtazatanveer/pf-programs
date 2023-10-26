#include<stdio.h>
int is_perfect_num(int num);

int main(){

int num;
printf("\nReturn Value : %d",is_perfect_num(num));


}

int is_perfect_num(int num){

printf("\nenter number : ");
scanf("%d",&num);

int sum=0;

for(int i=1;i<num;i++){

if(num%i==0){
    sum =sum +i;
}

}

if(sum==num){

    return 1;
}

    return 0;

}