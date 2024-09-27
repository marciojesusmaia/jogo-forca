#include <stdio.h>
#include <string.h>

int main(){
	char wordsec [20];
	int acertou = 0;
	int enforcou = 0;
	char chutes[26];
	int tentativas = 0;
	
	sprintf(wordsec, "melancia");
	
	do{
		for(int i = 0; i < strlen(wordsec);i++){
			int achou = 0;
			for(int j = 0;j< tentativas; j++){
			if(chutes[j] == wordsec[i]){
				achou = 1;
				break;
			}
		}
			if(achou){
				printf("%c", wordsec[i]);
			}
			else
				printf("_ ");
		
		}
		
		printf("\n");
		
		char chute;
		printf("Qual a letra?");
		scanf(" %c", &chute);
		chutes[tentativas] = chute;
		tentativas++;
		
		
		for(int i = 0; i < strlen(wordsec); i++){
			if(wordsec[i] == chute){
				printf("A posição %d tem essa letra\n", i+1);
			}
		}
	}
		while(!acertou && !enforcou);
}