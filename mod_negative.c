#include <stdio.h>

int main(int argc, char **argv) {
	printf("%d %d %d %d\n", 9 % 4, -9 % 4, 9 % -4, -9 % -4);
	printf("%d %d %d %d\n", 8 % 4, -8 % 4, 8 % -4, -8 % -4);
	return 0;
}
