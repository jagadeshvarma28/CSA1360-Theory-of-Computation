#include <stdio.h>
#include <string.h>
int S(char *s, int i) 
{
if (s[i] == '0')
return S(s, i + 1);
return 0;
}
int A(char *s, int i) 
{
if (s[i] == '0')
return A(s, i + 1);
else if (s[i] == '1')
return A(s, i + 1);
else if (s[i] == '\0')
return 1;
return 0;
}
int main() 
{
char s[100];
printf("Enter a string: ");
scanf("%s", s);
if (S(s, 0))
printf("Accepted\n");
else
printf("Not Accepted\n");
return 0;
}

