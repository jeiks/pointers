/**
 * @author: Jacson Rodrigues Correia da Silva <jacsonrcsilva@gmail.com>
 */
#include "ponteiros.h"

int  d1=100,  d2=200,  d3=300,  d4=400;
int *p1=&d1, *p2=&d2, *p3=&d3, *p4=&d4;

int impressao()
{
	LIMPA_TELA;
	printf("    [Endereço de Memória]  Valor:\n");
	IMP("d1"); IMP_END("d1",d1); IMP_INT("d1",d1); ENTER;
	IMP("d2"); IMP_END("d2",d2); IMP_INT("d2",d2); ENTER;
	IMP("d3"); IMP_END("d3",d3); IMP_INT("d3",d3); ENTER;
	IMP("d4"); IMP_END("d4",d4); IMP_INT("d4",d4); ENTER;

	IMP("p1"); IMP_END("p1",p1); IMP_PONT("p1",p1); ENTER;
	IMP("p2"); IMP_END("p2",p2); IMP_PONT("p2",p2); ENTER;
	IMP("p3"); IMP_END("p3",p3); IMP_PONT("p3",p3); ENTER;
	IMP("p4"); IMP_END("p4",p4); IMP_PONT("p4",p4); ENTER;

	ENTER;
	return 1;
}

int qualNumero(int inicio, int fim, const char *pal) {
	int resp;
	do {
		printf("Digite qual é %s [1-4]: ", pal);
		scanf("%d", &resp);
	} while(resp < inicio || resp > fim);
	return resp;
}

// Altera o valor de um ponteiro
void valorPonteiro() {
	int resp = qualNumero(1,4,"o ponteiro");
	printf("Digite o valor em hexadecimal: p%d=", resp);
	switch (resp) {
		case 1: scanf("%p", &p1); break;
		case 2: scanf("%p", &p2); break;
		case 3: scanf("%p", &p3); break;
		case 4: scanf("%p", &p4); break;
	}
}

void velorReferenciado() {
	int resp = qualNumero(1,4,"o ponteiro");
	printf("Digite o valor em inteiro: *p%d=", resp);
	switch (resp) {
		case 1: scanf("%d", p1); break;
		case 2: scanf("%d", p2); break;
		case 3: scanf("%d", p3); break;
		case 4: scanf("%d", p4); break;
	}
}

void valorVariavel() {
	int resp = qualNumero(1,4,"a variável");
	printf("Digite o valor em inteiro: d%d=", resp);
	switch (resp) {
		case 1: scanf("%d", &d1); break;
		case 2: scanf("%d", &d2); break;
		case 3: scanf("%d", &d3); break;
		case 4: scanf("%d", &d4); break;
	}
}

int main()
{
	int resp = 0;
	impressao();
	while ( resp != 4 ) {
		printf("Menu\n"
		       "  [1] - Alterar o valor armazenado em p1, p2, p3 ou p4 (Ex.: p1=0x557b840e8028).\n"
		       "  [2] - Alterar o valor armazenado em d1, d2, d3 ou d4 (Ex.: d1=400.\n"
		       "  [3] - Alterar o valor referenciado por p1, p2, p3 ou p4 (Ex.: *p1=400).\n"
		       "  [4] - Sair.\n"
		       "Digite a opção desejada: ");
		scanf("%d", &resp);
		switch (resp) {
			case 1: valorPonteiro();
				break;
			case 2: valorVariavel();
				break;
			case 3: velorReferenciado();
				break;
			case 4: printf("Até mais!\n");
				break;
			default: printf("Não entendi!\n");
		}
		impressao();
	}
	LIMPA_TELA;
}

