/*
* Sistemas Operacionais 2012/01 - Prof. Márcia Cristina Cera
* Aula Prática sobre threads no Windows
* Exercício 1: Criando threads
*/

#include <windows.h> 

DWORD WINAPI print_message(LPVOID ptr) 
{ 
	char *message; 
	message = (char *) ptr; 
	printf("%s", message); 
	return 0; 
} 

int main(int argc, char* argv[]) 
{ 
	DWORD threadID1, threadID2; 
	HANDLE threadH1, threadH2; 
	char *message1 = "hello \n"; 
	char *message2 = "world"; 

	threadH1=CreateThread(NULL, 0, print_message, message1, 0, &threadID1); 
	threadH2=CreateThread(NULL, 0, print_message, message2, 0, &threadID2); 
	
	WaitForSingleObject(threadH1, INFINITE); /* linha (a) */
	WaitForSingleObject(threadH2, INFINITE); /* linha (b) */

	CloseHandle(threadH1); 
	CloseHandle(threadH2); 
	return 0; 
} 

