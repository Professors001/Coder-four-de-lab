#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
		int x = 1;
		while (x < m) {
			if (*killerPtr == 0) {
				killerPtr = &prisoners[0];
				continue;
			} 
			else {
				x++;
				killerPtr++;
			}
			if (x == m && *killerPtr == 0) {
				killerPtr = &prisoners[0];
			}
		}

		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);

	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
	return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
	int i = 0;
	for (i; i < size; i++) {
		if (array[i] == killedPrisoner) {
			break;
		}
	}
	for (i; i < size - 1; i++) {
		array[i] = array[i+1];
	}
	array[i] = 0;
}