#include<stdio.h>
int main(){
  char inp1[30],inp2[20];
  gets(inp1);
  gets(inp2);
  int count=0,p,h=0;
  for(p=0;inp2[p]!='\0';p++)
    h++;
  char c;
  c=inp[h-1];
  for(p=0;inp1[p]!='\0';p++)
  {
    if(inp1[p]==c)
      count++;
  }
  printf("%d",count);
  return 0;
}
    
    
