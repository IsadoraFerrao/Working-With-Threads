/*
* Sistemas Operacionais 2012/01 - Prof. Márcia Cristina Cera
* Aula Prática sobre threads no Linux
* Exercício 1: Criando threads
*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/* ---------------------------------------
 * funcao a ser executada pela thread
 * ---------------------------------------*/
void *func_hello (void *input)
{
  printf("%s", (char *)input);
  pthread_exit(NULL);
}

/* ---------------------------------------
 * funcao principal
 * ---------------------------------------*/
int main(int argc, char **argv)
{
  pthread_t tid[2]; // identificador da thread
  char *message1 = "hello \n"; 
  char *message2 = "world \n"; 

	
  pthread_create(&tid[0], NULL, (void *)func_hello, (void *) message1);
  pthread_create(&tid[1], NULL, (void *)func_hello, (void *) message2);

  pthread_join(tid[0], NULL); /* linha (a) */
  pthread_join(tid[1], NULL); /* linha (b) */

  return 0;

}

