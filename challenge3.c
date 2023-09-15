#include<stdio.h>
int main(){
    int x;
    int verif = 0;
    printf("bonjour cher ami \n");
    printf("enterez le nombre \n");
    scanf("%d",&x);
    for (int i = 2; i < x/2 ; i++)
    {
        if (x % i == 0){
            verif = 1;
        }      
        
    }
    if (verif == 0)
    {
        printf("le nombre que vous avez tapez est premier");
    }
    else{
        printf("le nombre que vous avez tapez n'est  pas premier");
    }

    
    
}