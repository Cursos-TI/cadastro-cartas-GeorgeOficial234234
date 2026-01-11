#include <stdio.h>

int main() {

int pop1 = 30;
int pop2 = 20;
int popres = pop1 > pop2;

printf("Carta %d venceu (%d)\n", popres ? 1 : 2, popres);

}