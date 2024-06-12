/* 让我们用字母 B 来表示“百”、字母 S 表示“十”， 
用 12...n 来表示不为零的个位数字 n（<10）， 
换个格式来输出任一个不超过 3 位的正整数。 
例如 234 应该被输出为 BBSSS1234，因为它有 
2 个“百”、3 个“十”、 以及个位的 4。 */ 
#include <stdio.h> 
int main()
{   
int number, i=0, thi, sec, fir;     
scanf("%d\n", &number);  
thi = number/100 % 10;   
sec = number/10 % 10;   
fir = number % 10;   
for(i = 0;i < thi;i++)    
  printf("B");    
for(i = 0;i < sec;i++)  
  printf("S");  
for(i = 1;i < fir + 1;i++)    
  printf("%d", i);  
printf("\n");   
return 0;
}
