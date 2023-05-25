// MANG 2 CHIEU 2 3

#include<stdio.h>

void main() {
	int i, j;
	int ary[2] [3];
	
	for (i = 0; i<2 ; i++) {
		for (j=0; j<3; j++) {
			printf ("Number at [%d] [%d]: ", i, j);
			scanf ("%d", &ary[i] [j]); }
	}
	
	for (i = 0; i<2 ; i++) {
		for (j=0; j<3; j++)
			printf ("The Number [%d] [%d]: %d\n", i, j, ary[i][j]);
	}
	return; 
}
