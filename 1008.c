#include <stdio.h> 
#include <stdlib.h> 
int main() 
{     
  int n, m, i, j, temp1, temp2, v;   
  int B[100];    
  v = scanf("%d %d", &n, &m);    
  if(v != 2){     
    printf("input failed!\n");   
    return 0;    
  }   
  // 不知道为什么用malloc会报错，只能在前面定义一个数组B
  // int *B = (int *)malloc(n * sizeof(int));  
  // if(B == NULL){         
  //   printf("memory allocation failed\n");   
  //   return 0;  
  // }    
  for(i = 0;i < n;i++){    
    v=scanf("%d", &B[i]);
    if(v != 1){        
      printf("input failed!\n");  
      return 0;          
    }   
  }  
  if(m % n == 0){  
    for(i = 0;i < n;i++){   
      if(i == n-1)         
        printf("%d", B[i]);  
      else              
        printf("%d ", B[i]);    
    }    
  }   
  else{
    for(i = 0;i < m%n;i++){      
      temp1 = B[0];      
      temp2 = B[1];      
      for(j = 0;j < n;j++){     
        if(j == n-2){           
          B[j+1] = temp1;     
          B[0] = temp2;       
        }                
        else{            
          B[j+1] = temp1;    
          temp1 = temp2;     
          temp2 = B[j+2];    
        }           
      }      
    }    
    for(i = 0;i < n;i++){   
      if(i == n-1)       
        printf("%d", B[i]);   
      else          
        printf("%d ", B[i]);   
    }     
  }    
  free(B);  
  return 0; 
}
