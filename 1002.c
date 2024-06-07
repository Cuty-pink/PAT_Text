#include <stdio.h> 
#include <string.h> 
#include <math.h>  
int main(void) 
{     
  char string[100];     
  int value, length, i, n[100], and = 0;     
  value = scanf("%s", string);     
  if(value != 1){         
    printf("input number failed\n");     
  }     
  length = strlen(string);     
  char* spell[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};     
  for(i = 0; i < length;i++){         
    and += string[i] - '0';     
  }    
  for(i = 0; i < 100; i++){         
    n[i] = -1;     
  }     
  for(i = 0; i < 100; i++){        
    n[i] = and % 10;         
    and = floor(and / 10);         
    if(and == 0)             
      break;     
  }    
  for(i = 99; i >= 0; i--){         
    if(n[i] != -1){          
      if(i == 0)               
        printf("%s\n", spell[n[i]]);       
      else              
        printf("%s ", spell[n[i]]);   
    }   
  }    
  return 0;
}
