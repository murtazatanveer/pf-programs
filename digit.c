#include<stdio.h>
#include<stdlib.h>
int main(){

    

    printf("\nEnter two digit number : ");

    int num;

    scanf("%d",&num);

if(num>99 || num <10){

printf("\nYou Enter not a two digit number\n");
    exit(1);
}

printf("\nYou Entered ");
   
   
    if (num%10==0){

        switch(num){

         case 10:
         printf("Ten");
         break;

          case 20:
         printf("Twenty");
         break;

         case 30:
         printf("Thirty");
         break;

          case 40:
         printf("Fourty");
         break;
         
          case 50:
         printf("Fifty");
         break;

          case 60:
         printf("Sixty");
         break;

          case 70:
         printf("Seventy");
         break;

          case 80:
         printf("Eighty");
         break;

          case 90:
         printf("Ninty");
         break;}
        }

        else if(num>10 && num<20){

            switch(num){

                case 11:
                printf("Eleven");
                break;

                case 12:
                printf("Twelve");
                break;

                case 13:
                printf("Thirteen");
                break;

                case 14:
                printf("Fourteen");
                break;

                case 15:
                printf("Fifteen");
                break;

                case 16:
                printf("Sixteen");
                break;

                case 17:
                printf("Seventeen");
                break;

                case 18:
                printf("Eighteen");
                break;

                case 19:
                printf("Nineteen");
                break;
            }


        }

        else{

 int sec_dig =num % 10;

    int first_dig = num /10;

switch(first_dig){

    case 2:
         printf("Twenty");
         break;

         case 3:
         printf("Thirty");
         break;

          case 4:
         printf("Fourty");
         break;
         
          case 5:
         printf("Fifty");
         break;

          case 6:
         printf("Sixty");
         break;

          case 7:
         printf("Seventy");
         break;

          case 8:
         printf("Eighty");
         break;

          case 9:
         printf("Ninty");
         break;
}

switch(sec_dig){

    case 2:
         printf(" Two");
         break;

         case 3:
         printf(" Three");
         break;

          case 4:
         printf(" Four");
         break;
         
          case 5:
         printf(" Five");
         break;

          case 6:
         printf(" Six");
         break;

          case 7:
         printf(" Seven");
         break;

          case 8:
         printf(" Eight");
         break;

          case 9:
         printf(" Nine");
         break;
}


        }
    }
    
