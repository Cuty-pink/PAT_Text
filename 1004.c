/* 读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。 
输入样例： 3 Joe Math990112 89 Mike CS991301 100 Mary EE990830 95 输出样例： Mike CS991301 Joe Math990112 */ 
#include <stdio.h>  
int main(void) 
{     
  int n = 0, i, value, max, min, j = 0, k = 0;     
  char name[1000][100];    
  char mark[1000][200]; 
  int grade[1000][1];   
  value = scanf("%d", &n);   
  if(value != 1){    
    printf("input failed\n");   
    return 0;   
  }  
  for(i = 0; i < n; i++){      
    scanf("%s %s %d", name[i], mark[i], grade[i]); 
  }  
  max=grade[0][0];    
  min=grade[0][0];    
  for(i = 0; i < n; i++){   
    if(max <= grade[i][0]){ 
      max = grade[i][0];      
      j = i;       
    }       
    if(min >= grade[i][0]){  
      min = grade[i][0];  
      k = i;      
    }   
  }   
  printf("%s %s\n", name[j], mark[j]);   
  printf("%s %s\n", name[k], mark[k]);  
  return 0; 
}

