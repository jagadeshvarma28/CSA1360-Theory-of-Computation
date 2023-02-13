#include <stdio.h>
#include <string.h>
int main()
{
int state = 0;
char input[100];
printf("Enter a string: ");
scanf("%d", input);
int len = strlen(input);
for (int i = 0; i < len; i++) {
if (state == 0 && input[i] == 'a')
state = 1;
else
state = 2;
}
if (state == 1 && input[len-1] == 'a')
printf("Accepted\n");
else
printf("Not Accepted\n");
return 0;
}

