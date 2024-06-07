#include <stdio.h>  
int main(void) 
{     
  int i, n, value;     
  value = scanf("%d", &n);     
  if(n < 1 || n > 1000){         
    printf("The number must smaller than 1000 and bigger than 1\n");         
    printf("input a number again:\n");         value = scanf("%d", &n);     
  }     
  if(value != 1){         
    printf("read data failed!\n");     
  }     
  for(i = 0;;i++){         
    if(n == 1)             
      break;         
    else if(n % 2 == 0)             
      n = n / 2;         
    else             
      n = (3*n + 1) / 2;     
  }     
  printf("%d\n", i);     
  return 0; 
}



































