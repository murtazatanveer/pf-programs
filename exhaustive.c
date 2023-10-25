#include<stdio.h>
int main(){

int gents,ladies,child;

for(gents=1;gents<=30;gents++){
     
     for(ladies=1;ladies<=30;ladies++){

        for(child=1;child<=30;child++){

            if(((3 * gents) + (2 * ladies) + child) == 50 && (gents + ladies + child) == 30){
                
                printf("Gentlemen : %d\tLadies : %d\tChildren : %d\n\n",gents,ladies,child);
            }
        }
     }

}



}