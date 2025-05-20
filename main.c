#include <stdio.h>

int main(){

int quant,i,j;
int num[100];
int count[100];
 

printf("Informe a quantidade de livros: \n");
    scanf("%d",&quant);

printf("Informe o(s) numero(s) do livro(s): \n");

for(i= 0; i < quant; i++){
    scanf("%d",&num[i]);
    }
for(i =0; i < quant; i++){
    count[i]= 0;
    for(j=0; j< quant; j++){
        if(num[i] == num[j]){
            count[i]++;
        }
    }
}

for(i =0; i< quant; i++){
    if (count[i] == 1){
        int alreadyPrinted =0;

    for(j =0; j< i; j++){
        if(num[i] ==num[j]){
            alreadyPrinted =1;
            break;
        }
    } 
    
    if(!alreadyPrinted){
        printf("%d ",num[i]);

        }
     }
}


   return 0;
}