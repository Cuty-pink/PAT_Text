#include <stdio.h> 
int main()
{  
  int m, n, i, p=0, j, jud=0; 
  int prime[1000000];  
  scanf("%d %d", &m, &n);   
  for(i = 2;i < 1000000;i++){   
    jud=0;      
    for(j = 2;j <= (int)sqrt(i);j++){    
      if(i%j == 0){        
        jud = 1;        
        break;      
      }    
    }   
    if(!jud){  
      prime[p] = i;   
      p++;      
    }      
    if(p > n){    
      break;     
    }    
  }   
  j=1;  
  for(i = m-1;i < n;i++){     
    if(i == n-1){    
      printf("%d", prime[i]);  
    }      
    else{        
      if(j % 10 == 0){     
        printf("%d", prime[i]);  
        printf("\n");       
        j++;       
      }        
      else{      
        printf("%d ", prime[i]);   
        j++;       
      }       
    }    
  }   
  return 0; 
}
