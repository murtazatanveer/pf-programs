#include<stdio.h>
int main(){

int a,b;
printf("Enter 24-hour time : ");
scanf("%d:%d",&a,&b);

printf("\nEquivalent 12-hour time : ");

if (a>12){

switch(a){

    case 13:
    printf("%d : ",1);
    break;

    case 14:
    printf("%d : ",2);
    break;

    case 15:
    printf("%d : ",3);
    break;

    case 16:
    printf("%d : ",4);
    break;

    case 17:
    printf("%d : ",5);
    break;

    case 18:
    printf("%d : ",6);
    break;

    case 19:
    printf("%d : ",7);
    break;

    case 20:
    printf("%d : ",8);
    break;

    case 21:
    printf("%d : ",9);
    break;

    case 22:
    printf("%d : ",10);
    break;

    case 23:
    printf("%d : ",11);
    break;

}

printf("%d PM",b);

}
else if(a==12){

printf("%d : %d AM   OR  %d : %d PM",a,b,a,b);

}
else{
    printf("%d : %d AM",a,b);
}



}