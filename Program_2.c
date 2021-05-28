//You will be given a string 'str'. Your task is to reverse 'str' and print it.
//Input: vvce & Output: ecvv

#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],temp;
  int i=0,j=0;
  printf("enter the string : ");
	scanf("%s", str);

j=strlen(str)-1;
while(i<j)
{
  temp=str[i];
  str[i]=str[j];
  str[j]=temp;
  i++;
  j--;
}
printf("the reversed string : %s",str);
	return 0;
}
