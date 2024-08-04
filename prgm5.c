#include<stdio.h>
int main()
{
  char str1[10],str2[10],str[10];
  scanf("%s",str1);
  int len,i=0,temp=len-1;
  while(str1[i]<=len-1)
  {
      str2[i]=str[temp];
      i++;
      temp--;
  }
  printf ("%s",str2);
  return 0;
}

