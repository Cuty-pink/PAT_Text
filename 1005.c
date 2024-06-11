/* 当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。 
例如对 n=3 进行验证的时候，我们需要计算 3、5、8、4、2、1，
则当我们对  n=5、8、4、2 进行验证的时候，就可以直接判定卡拉兹猜想的真伪，
而不需要重复计算， 因为这 4 个数已经在验证3的时候遇到过了，
我们称 5、8、4、2 是被 3“覆盖”的数。 我们称一个数列中的某个数 n 为“关键数”，
如果 n 不能被数列中的其他数字所覆盖。 现在给定一系列待验证的数字，我们只需要验证其中的几个关键数， 
就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字， 并按从大到小的顺序输出它们。 
对任何一个正整数 n，如果它是偶数，那么把它砍掉一半； 
如果它是奇数，那么把 (3n+1) 砍掉一半。这样一直反复砍下去，
最后一定在某一步得到 n=1。 */ 
#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h> 
int search(int value, int count, int *p); 
int main() 
{     
  int n, i, v, j=0, exist=0, m=0;     
  int arr[1000], key[1000];     
  bool choose=0;     
  v = scanf("%d", &n);     
  if(v != 1){         
    printf("input failed!\n");         
    return 0;     
  }     
  int *number1 = (int*)malloc(n * sizeof(int));  
  int *number2 = (int*)malloc(n * sizeof(int));   
  if(number1 == NULL || number2 == NULL){     
    printf("memory allocation failed\n");   
    return 0;    
  }   
  for(i = 0;i < n;i++){  
    scanf("%d", &number1[i]);    
    number2[i] = number1[i];     
    while(number2[i] != 1){      
      if(number2[i] % 2 == 0){   
        number2[i] = number2[i] / 2;  
        choose = search(number2[i], j, arr);  
        if(choose)                   
          continue;              
        else{             
          arr[j] = number2[i]; 
          j++;               
        }          
      }         
      else if(number2[i] % 2 != 0){   
        number2[i] = 3*number2[i] + 1;  
      }       
    }    
  }    
  for(i = 0; i < n; i++){   
    for(int k = 0; k < j; k++){   
      if(number1[i] == arr[k]){  
        exist = 1;            
        break;          
      }       
    }      
    if(!exist){  
      key[m] = number1[i];    
      m++;       
    }      
    exist = 0;  
  }    
  int temp = 0;  
  for(i = 0; i < m - 1;i++){  
    for(j = 0; j < m - 1 - i; j++){     
      if(key[j] > key[j + 1]){     
        temp = key[j];      
        key[j] = key[j+1];  
        key[j+1] = temp;     
      }      
    } 
  }    
  for(i = m - 1;i >= 0; i--){  
    if(i == 0)        
      printf("%d", key[i]);   
    else          
      printf("%d ", key[i]); 
  }        
  free(number1); 
  free(number2); 
  return 0;
}  
int search(int value, int count, int *p)
{     
  for(int i = 0;i < count;i++){ 
    if(p[i] == value)      
      return 1;   
  }    
  return 0;
}
