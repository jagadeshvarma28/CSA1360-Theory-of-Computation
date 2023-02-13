#include <stdio.h>
#include <string.h>
int checkString(char *str)
{
int i = 0, j = strlen(str) - 1;
while (i <= j)
{
if (str[i] == '0' && str[j] == '0')
{
i++;
j--;
}
else if (str[i] == '1' && str[j] == '1')
{
i++;
j--;
}
else
return 0;
}
return 1;
}
int main()
{
char str[100];
printf("Enter the string: ");
scanf("%s", str);
if (checkString(str))
printf("Belongs to the language\n");
else
printf("Does not belong to the language\n");
return 0;
}

