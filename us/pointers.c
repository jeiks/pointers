/**
 * @author: Jacson Rodrigues Correia da Silva <jacsonrcsilva@gmail.com>
 */
#include "pointers.h"

int  d1=111,  d2=222,  d3=333,  d4=444;
int *p1=&d1, *p2=&d2, *p3=&d3, *p4=&d4;

int print_vars_pointers()
{
	CLEAR_SCREEN;
	printf("    [Ref: Memory address]  Value:\n");
	PRINT("d1"); PRINT_END("d1",d1); PRINT_INT("d1",d1); ENTER;
	PRINT("d2"); PRINT_END("d2",d2); PRINT_INT("d2",d2); ENTER;
	PRINT("d3"); PRINT_END("d3",d3); PRINT_INT("d3",d3); ENTER;
	PRINT("d4"); PRINT_END("d4",d4); PRINT_INT("d4",d4); ENTER;

	PRINT("p1"); PRINT_END("p1",p1); PRINT_PONT("p1",p1); ENTER;
	PRINT("p2"); PRINT_END("p2",p2); PRINT_PONT("p2",p2); ENTER;
	PRINT("p3"); PRINT_END("p3",p3); PRINT_PONT("p3",p3); ENTER;
	PRINT("p4"); PRINT_END("p4",p4); PRINT_PONT("p4",p4); ENTER;

	ENTER;
	return 1;
}

int whichNumber(int inicio, int fim, const char *pal) {
	int resp;
	do {
		printf("Select which %s [1-4]: ", pal);
		scanf("%d", &resp);
	} while(resp < inicio || resp > fim);
	return resp;
}

// Altera o valor de um ponteiro
void pointerValue() {
	int resp = whichNumber(1,4,"pointer");
	printf("Type an hexadecimal value: p%d=", resp);
	switch (resp) {
		case 1: scanf("%p", &p1); break;
		case 2: scanf("%p", &p2); break;
		case 3: scanf("%p", &p3); break;
		case 4: scanf("%p", &p4); break;
	}
}

void referredValue() {
	int resp = whichNumber(1,4,"pointer");
	printf("Type an integer value: *p%d=", resp);
	switch (resp) {
		case 1: scanf("%d", p1); break;
		case 2: scanf("%d", p2); break;
		case 3: scanf("%d", p3); break;
		case 4: scanf("%d", p4); break;
	}
}

void variableValue() {
	int resp = whichNumber(1,4,"variable");
	printf("Type an integer value: d%d=", resp);
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
	print_vars_pointers();
	while ( resp != 4 ) {
		printf("Menu\n"
		       "  [1] - Change the value stored in: p1, p2, p3 or p4 (i.e.: p1=0x557b840e8028).\n"
		       "  [2] - Change the value stored in: d1, d2, d3 or d4 (i.e.: d1=400).\n"
		       "  [3] - Change the value referred in: p1, p2, p3 ou p4 (i.e.: *p1=400).\n"
		       "  [4] - Exit.\n"
		       "Type the desired option: ");
		scanf("%d", &resp);
		switch (resp) {
			case 1: pointerValue();
				break;
			case 2: variableValue();
				break;
			case 3: referredValue();
				break;
			case 4: printf("Até mais!\n");
				break;
			default: printf("Não entendi!\n");
		}
		print_vars_pointers();
	}
	CLEAR_SCREEN;
}

