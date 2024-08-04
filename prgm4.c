#include<stdio.h>
int main()
{
  char str1[20],str2[20];
  int i=0,j=0;
  scanf("%s %s",str1,str2);
  while(str1[i]!='\0')
  {
      i++;
  }
  while(str2[j]!='\0')
  {
      str1[i]=str2[j];
      j++;
      i++;
  }
  printf("%s",str1);
  return 0;
}

