#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int cont = 0;
  int quant = 0, num = 0, num2 = 0, total = 0;
  int max = 0, min = 0, avg = 0;

  scanf("%d", &quant);
  
  do{
    scanf("%d", &num);
    total += num;
    if(cont == 0){
      min = num;
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
  return 0;
}
