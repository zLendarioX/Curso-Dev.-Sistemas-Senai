#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	int i = 15;
	do {
		printf("%d ", i);
		i--;
	} while(i > 0);
	return 1;
}
