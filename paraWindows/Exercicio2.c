/*
* Sistemas Operacionais 2012/01 - Prof. Márcia Cristina Cera
* Aula Prática sobre threads no Windows
* Exercício 2: Produtor/Consumidor
*/

#include <windows.h> 

int capacidade = 5; 
int items = 0; 

DWORD WINAPI colocar(LPVOID T) 
{
	int *tempo; 
	tempo = (int *) T; 
	while (1) {
		if (items < capacidade) {	
			items ++; 
			printf("\n Caixa armazenada: Passaram a ser %d caixas", items); 
			Sleep(*tempo); 
		} 
	}	 
	return 0; 
} 

DWORD WINAPI retirar(LPVOID T) 
{
	int *tempo; 
	tempo = (int *) T; 
	while(1) {
		if (items > 0) {
			items --; 
			printf("\n Caixa retirada: Sobram %d caixas", items); 
			Sleep(*tempo); 
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
