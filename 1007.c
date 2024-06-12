#include <stdio.h> 
#include <stdbool.h> 
#include <math.h>  
bool judgement(int a); // 判断是否为质数  
int main() 
{   
  int n, i, p, j=0, m=0, d; 
  int prime_n[100000];
  scanf("%d\n", &n);  
  for(i = 1;i < n+1;i++){  
    p = judgement(i);      
    if(p){    
      prime_n[j] = i; 
      j++;      
    }    
  }   
  for(i = 1;i < j;i++){   
    d = prime_n[i+1] - prime_n[i];   
    if(d == 2)          
      m++;  
  }   
  printf("%d", m);  
  return 0;
} 
bool judgement(int a)
{ 
  if(a <= 3)      
    return a > 1;    
  int s = (int)sqrt(a);  
  //判断一个数能否被小于sqrt(a)的数整除    
  for(int i = 2;i <= s;i++){      
    if(a % i == 0)     
      return false;   
  }    
  return true; 
}


