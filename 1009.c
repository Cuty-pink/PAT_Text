#include <stdio.h>
#include <string.h>
int main() 
{   
  char str[1000]; 
  int length, i, j=0;   
  int pos[1000];     
  fgets(str, sizeof(str), stdin);    
  length = strlen(str);  
  // 获取字符串长度，并去除末尾换行符   
  if (str[length - 1] == '\n'){    
    str[length - 1] = '\0';   
    length--;   
  } 
  for(i = 0;i < length;i++){    
    if(str[i] == ' '){    
      pos[j] = i;   
      j++;     
    }  
  }   
  j -= 1;   
  while(j>=0){  
    for(i = pos[j]+1;;i++){  
      if(i == length){     
        length = pos[j];    
        printf(" ");       
        break;    
      }       
      else{   
        printf("%c", str[i]);        
      }     
    }    
    j--;  
  }   
  for(i = 0; i < length;i++){   
    printf("%c", str[i]);   
  }   
  return 0; 
}
