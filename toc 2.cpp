#include <stdio.h>
#include <string.h>
int main() {
int state = 0;
char input[100];
printf("Enter a string: ");
scanf("%s", input);
for (int i = 0; i < strlen(input); i++) {
if (state == 0 && input[i] == '0') {
state = 1;
} 
else if (state == 1 && input[i] == '1') {
state = 2;
} 
else 
{
state = 3;
}
}
if (state == 2) {
printf("Accepted\n");
} else 
{
printf("Rejected\n");
}
return 0;
}

