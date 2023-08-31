//97 설탕뽑기
/*#include <stdio.h>
#include <stdlib.h>

int main() {
	int h, w;
	int n;
	int l, d, x, y;
	int i, j;
	int a, b;

	scanf_s("%d %d", &h, &w);
	scanf_s("%d", &n);

	int** pan = (int**)malloc(h * sizeof(int*));
	for (i = 0; i < h; i++) {
		pan[i] = (int*)malloc(w * sizeof(int));
	}

	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			pan[i][j] = 0;
		}
	}

	for (a = 0; a < n; a++) {
		scanf_s("%d %d %d %d", &l, &d, &x, &y); //x가 세로, y가 가로
		if (d == 0) { // 가로
			for (b = 0; b < l; b++) {
				//if (y > w) break;
				pan[x - 1][y - 1] = 1;
				y++;
			}
		}
		else { //세로
			for (b = 0; b < l; b++) {
				//if (x > h) break;
				pan[x - 1][y - 1] = 1;
				x++;
			}
		}
	}

	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			printf("%d ", pan[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < h; i++) {
		free(pan[i]);
	}
	free(pan);

	return 0;
}*/

//96 바둑알 십자 뒤집기
/*#include <stdio.h>

int main() {
	int ten[20][20];
	int i, j;
	int n;
	int g, s;
	for (i = 1; i < 20; i++) {
		for (j = 1; j < 20; j++) {
			scanf_s("%d", &ten[i][j]);
		}
	}

	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d %d", &s, &g);
		for (j = 1; j <= 19; j++) {
			if (ten[j][g] == 0) ten[j][g] = 1;
			else ten[j][g] = 0;
		}
		for (j = 1; j <= 19; j++) {
			if (ten[s][j] == 0) ten[s][j] = 1;
			else ten[s][j] = 0;
		}
	}
	for (i = 1; i < 20; i++) {
		for (j = 1; j < 20; j++) {
			printf("%d ", ten[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

//95 바둑판에 흰 돌 놓기
/*#include <stdio.h>
int ar[20][20] = { 0 };

void change(int x, int y) {
	ar[x][y] = 1;
}

int main() {
	int n, x, y;
	int i, j;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d %d", &x, &y);
		change(x, y);
	}
	for (i = 1; i < 20; i++) {
		for (j = 1; j < 20; j++) {
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

//92 이상한 출석 번호 부르기1
/*#include <stdio.h>
#define student 24

int main() {
	int n, num, i;
	int ar[student] = { 0 };
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &num);
		ar[num]++;
	}
	for (i = 1; i < student; i++) {
		printf("%d ", ar[i]);
	}
	return 0;
}*/

#include <stdio.h>

int main() {
	printf("hello");
	printf("goggooogo");
	return 0;
}