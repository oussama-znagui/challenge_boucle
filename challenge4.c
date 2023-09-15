#include<stdio.h>
int main(){
    int nb;
    int somme = 0;
    printf("bonjour cher ami \n");
    printf("Combient des nombre vous allez entrer \n");
    scanf("%d",&nb);
    int table[nb];
    
    for(int i = 0 ; i < nb ; i++){
        printf("entrez le chifre %d : \n",i+1);
        scanf("%d",&table[i]);    
    }
    int max = table[0];

    for(int j = 0 ; j < nb ; j++){
        int mod = table[j] % 10;
        
        if(table[j] < 100 && mod == 0 )   {
            printf("%d \n",table[j]);
            somme = somme + table[j];
            if(table[j] > max){
                max = table[j];
            }

        }
    }
    printf("la somme des chiffres est : %d \n",somme);
    printf("le max des chiffres est : %d",max);



}