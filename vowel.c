#include<stdio.h>
int main(){

char c;
printf("\nEnter String : ");
int vowel=0 , constant=0 , spacecounter = 0;

do{

scanf("%c",&c);

if((c>='a'&&c<='z') || (c>='A'&&c<='Z')){

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){

vowel++;

}
else {

    constant++;
}

}
if(c==' '){
spacecounter++;}
    
} while(c!='\n');

printf("\n\nvowels : %d\n\nConstant letters : %d\n\nSpaces : %d",vowel,constant,spacecounter);


}