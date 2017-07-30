#include<stdio.h>
int main()
{
char s;
printf("enter a character:");
scanf("%c",&s);
if(s>='a'&&s<='z'||s>='A'&&s<='Z')
printf("alphabet");
else
printf("not alphabet");
return 0;
}
