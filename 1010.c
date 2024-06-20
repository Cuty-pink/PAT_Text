#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main() 
{  
  char str[100], *token;  
  int i=0, j=0, length, k=0;  
  int ty[100], fom[100]; 
  fgets(str, sizeof(str), stdin);   
  length = strlen(str);  
  if(str[length - 1] == '\n'){  
    str[length - 1] == '\0';    
    length--;  
  }   
  token = strtok(str, " ");  
  while(token != NULL){  
    ty[i] = atoi(token); 
    i++;     
    token =strtok(NULL, " "); 
  }   
  if(ty[0]==0 && ty[1]==0){    
    printf("0 0");  
  }
  else if(ty[0]!=0 && ty[1] == 0){ 
    printf("0");   
  }
  else{   
    for(k = 0;k < i;k++){ 
      if(k%2 != 1)  
        continue;  
      else{      
        if(ty[k] - 1 < 0)     
          continue;       
        else{      
          fom[j] = ty[k-1] * ty[k];    
          j++;           
          fom[j] = ty[k] - 1;   
          j++;          
        }         
      }    
    }      
    for(i = 0;i < j;i++){  
      if(i == j-1)    
        printf("%d", fom[i]);     
      else            
        printf("%d ", fom[i]); 
    }   
  }   
  printf("\n");    
  return 0; 
}
