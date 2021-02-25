#include <stdio.h>
#include <string.h>
#include <iostream>

#define tamg 100

int ct;
char msg [tamg];
char crip [tamg];
int tam, i, rep;

void encript(){											//criptografar
	printf("Digite a mensagem a ser criptografada, sem espacos ou com um underline.\n");
	scanf("%s",&msg);

	tam = strlen(msg);
	for (i = 0; i < tam; ++i){ 			//Para cada caracter na array msg, desloque-o por 5 e salve-o na crip array
	crip[i] = msg[i] - 5;
	}
	printf("A mensagem criptografada e: %s \n", crip );

}

void descript(){										//descriptografar
	printf("Digite a mensagem a ser descriptografada, sem espacos ou com um underline.\n");
	scanf("%s",&crip);

	tam = strlen(crip);
	for (int i = 0; i < tam; ++i){
	msg[i] = crip[i] + 5;
	}
	printf("A mensagem descriptografada e: %s \n", msg );

}

int main(void){
rep = 1;
while(rep==1){

	printf("O que voce gostaria de fazer?\n [1] Encriptar\n [2] Descripitar");
	scanf("%d",&ct);
	switch (ct){
		case 1:
			encript();
		break;
			
		case 2:
			descript();
		break;
	}
	printf("Voce deseja reiniciar?\n [1] SIM \n [2] NAO");
	scanf("%d", &rep);	

}
return (0);
}
