#include <stdio.h> 
#include <stdbool.h> 
int main()
{   
  int T, i;  
  int jud=0;   
  char status[2][6] = {"false","true"};   
  scanf("%d", &T);   
  long int n[100][3];  
  for(i = 0;i < T;i++){   
    scanf("%ld %ld %ld", &n[i][0], &n[i][1], &n[i][2]);    
    jud = (n[i][0] + n[i][1]) > n[i][2] ? 1 : 0;    
    printf("Case #%d: %s\n", i+1, status[jud]);  
  }        
  return 0;
}
