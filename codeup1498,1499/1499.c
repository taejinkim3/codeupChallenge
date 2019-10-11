#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
input*
5 3
1 3 5 4 2

output*
1 2
*/

int a[102];

int main(void)
{
	int n, g, i, j, t, v;
	scanf("%d%d", &n, &g);
	for (i = 1; i <= n; i++) {
		scanf("%d", &t);
		if (!(i % g) || i == n) {

			if (!(i % g)) {
				a[g] = t;
				v = a[1];
				for (j = 1; j <= g; j++) {
					if (v < a[j]) v = a[j];
				}
				printf("%d ", v);
			}
			else if (i == n) {
				a[n % g] = t;
				v = a[1];
				for (j = 1; j <= n % g; j++) {
					if (v < a[j]) v = a[j];
				}
				printf("%d ", v);
			}
		}
		else a[i % g] = t;
	}

	return 0;
}

