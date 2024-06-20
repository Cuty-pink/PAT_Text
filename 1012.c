#include <stdio.h>
#include <string.h>
int main()
{ 
  int n, a1=0, a2=0, a3=0, a4=0, a5=0, i=0, j=0, k=0, l=0;   
  char number[10000], *token; 
  int A2[10000], inter[10000];    
  fgets(number, sizeof(number), stdin); 
  n=strlen(number);  
  if(number[n-1] == '\n'){    
    number[n-1] == '\0';   
    n--; 
  }  
  token = strtok(number, " "); 
  while(token != NULL){   
    inter[l] = atoi(token); 
    l++;     
    token=strtok(NULL, " ");   
  }   
  for(i = 1;i < l;i++){    
    if(inter[i] % 10 == 0){    
      a1 += inter[i];   
    }         
    else if(inter[i] % 5 == 1){     
      A2[j] = (j%2==0) ? inter[i] : (-1)*inter[i];  
      j++;      
    }       
    else if(inter[i] % 5 == 2){     
      a3++;       
    }     
    else if(inter[i] % 5 == 3){    
      a4 += inter[i];    
      k++;    
    }       
    else if(inter[i] % 5 ==4){     
      a5 = (a5 > inter[i]) ? a5 : inter[i];  
    }   
  }   
  for(i=0;i<j;i++){     
    a2 += A2[i];
  }    
  if(a1==0)     
    printf("N ");   
  else     
    printf("%d ", a1);
  if(j==0)           
    printf("N ");    
  else         
    printf("%d ", a2);  
  if(a3==0)       
    printf("N ");    
  else       
    printf("%d ", a3); 
  if(k==0)    
    printf("N ");  
  else      
    printf("%.1f ", 1.0*a4/k);   
  if(a5==0)       
    printf("N");  
  else      
    printf("%d", a5);   
  return 0; 
}
