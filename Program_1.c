//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>

int main()
{
	char str[100];
  int i=0,v=0 ;
	scanf("%s", str);
  while(str[i++]!='\0')
  {
    if(str[i]=='a'||
    str[i]=='e'||
    str[i]=='i'||
    str[i]=='o'||
    str[i]=='u')
    v++;
  }
printf("no of vowels = %d",v);
	//Write your code here

	return 0;
}
