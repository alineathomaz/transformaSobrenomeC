#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[30]; /*30 será o tamanho de caracteres*/
	int i;
	
	printf("Digite o sobrenome do aluno ou aluna:\n");
	
	gets(nome); /*função do C que pega o valor do teclado, mais simples que o scanf*/
	
	for(i=0; nome[i]!=' ';i++)
	
		nome[i] = toupper(nome[i]); /*toupper é uma funcionalidade já pronta, que pega o carctere do índice e coloca em maiúscula a letra*/
		
		printf("\n\n Sobrenome convertido: %s\n\n",nome);
		
		getch();

	
	return 0;
}