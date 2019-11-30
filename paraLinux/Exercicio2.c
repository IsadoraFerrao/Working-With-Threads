/*
* Sistemas Operacionais 2012/01 - Prof. Márcia Cristina Cera
* Aula Prática sobre threads no Linux
* Exercício 1: Criando threads
*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int capacidade = 5; 
int items = 0; 

void *colocar(void *T) 
{
	int *tempo; 
	tempo = (int *) T; 
	while (1) {
		if (items < capacidade) {	
			items ++; 
			printf("\n Caixa armazenada: Passaram a ser %d caixas", items); 
			sleep(tempo); 
		} 
	}	 
	return 0; 
} 

void *retirar(void *T) 
{
	int *tempo; 
	tempo = (int *) T; 
	while(1) {
		if (items > 0) {
			items --; 
			printf("\n Caixa retirada: Sobram %d caixas", items); 
			sleep(tempo); 
		} 
	} 
	return 0; 
} 

int main(int argc, char* argv[]) 
{ 
	// lançar produtor 
	// lançar consumidor 
	// espera que as threads terminem 
	return 0; 
}
