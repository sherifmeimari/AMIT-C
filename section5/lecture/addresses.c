#include <stdio.h>
#include <stdlib.h>

struct Human {
	int age;
	int size;
	struct Human *finger;
};

int main() {

	struct Human x, y, z;
	x.age = 10;
	x.size = 1;
	y.age = 20;
	y.size = 2;
	z.age = 30;
	z.size = 3;

	x.finger = &y;
	y.finger = &z;
	z.finger = &x;

	printf("x age = %i\n", z.finger->age);
	printf("x size = %i\n", z.finger->size);

	printf("y age = %i\n", x.finger->age);
	printf("y size = %i\n", x.finger->size);

	printf("z age = %i\n", y.finger->age);
	printf("z size = %i\n", y.finger->size);

	return 0;
}
