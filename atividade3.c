#include <stdio.h>    
#include <pthread.h>
#define NUM_THREADS 4

void *funcao(void *args)
{
  int id, num = 0, total = 0, cont = 0, quant = 0;
  int max = 0, min = 0, avg = 0;
  id = *(int *)args;
  if(id == 1){
    scanf("%d", &quant);
    do{
      scanf("%d", &num);
      total += num;
      if(cont == 0){
        min = num;
      }
      if(cont == 0){
      
      }
      if(num > max){
      max = num;
      }
      
      else if(num < min){
      min = num;
      }
      
      cont++;
    }while(cont < quant);
  avg = total/quant;
  printf("The average value is %d\n", avg);
  printf("The minimum value is %d\n", min);
  printf("The maximum value is %d\n", max);
  }
    return (NULL);
  }
 
int main ()
{
  pthread_t threads[NUM_THREADS];
  int i;
  for(i=0;i< NUM_THREADS;i++)
       pthread_create(&threads[i], NULL, funcao, &i);
 
  for(i=0;i< NUM_THREADS;i++)
      pthread_join(threads[i],NULL);
  return 0;   
}
