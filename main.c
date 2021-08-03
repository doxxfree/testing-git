#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	do_the_thing();
	return EXIT_SUCCESS;
}

void do_the_thing() {
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
}
