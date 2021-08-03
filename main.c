#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int v = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= i; j++) {
			if (j != 0)
				puts(" ");
			
			printf("%2d", v);
			v += 2;
		}
		
		v += 1;
	}
	
	return EXIT_SUCCESS;
}