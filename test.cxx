#include <stdio.h>
#include <string.h>

int main()
{
	char blue[50];
	char str1[1];

	strcpy(str1, "\033[0;34m");

	strcat(str1, "Hello World\n");

	printf(str1);

	return 0;
}
# HelloWorld
