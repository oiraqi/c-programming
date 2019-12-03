#define SIZE 3
void fill(float grades[][SIZE]) {
	int i, j;
	for(i=0; i < SIZE; i++)
		for(j=0; j < SIZE; j++)
			grades[i][j] = i * j;
}

int main(void) {
	float grades[SIZE][SIZE];
	fill(grades);
	return 0;
}
