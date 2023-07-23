#include <stdio.h>

int hello_world (int n) {
	for (int i = 0; i < n; i++) {
		puts("Function For Loop: Hello World!");
	}
	return 0;
}

int main(void) {
	int limit = 5;
	for (int i = 0; i < limit; i++) {
		puts("For Loop: Hello World!");
	}
	while (limit != 0) {
		puts("While Loop: Hello World!");
		limit -= 1;
	}
	hello_world(3);
	do {
		puts("Do While: Hello World!");
		limit += 1;
	} while (limit != 5);
	switch (limit) {
		case 1:
			puts("1: Hello World!");
			break;
		case 2:
			puts("2: Hello World!");
			break;
		case 3:
			puts("3: Hello World!");
			break;
		case 4:
			puts("4: Hello World!");
			break;
		case 5:
			puts("5: Hello World!");
			break;
		default:
			puts("Default: Hello World!");
			break;
	}
	for (int i = 0; i < limit; i++) {
		if (i != 3) {
			continue;
		}
		puts("For Loop With Continue: Hello World!");
	}
	return 0;
}

