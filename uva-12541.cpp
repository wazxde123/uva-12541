#include <stdio.h>  
#include <stdlib.h>  

char name[101][16];
int  date[101];

int main()
{
	int n, year, month, day;
	while (~scanf("%d", &n)) {
		for (int i = 1; i <= n; ++i) {
			scanf("%s%d%d%d", name[i], &day, &month, &year);
			date[i] = 10000 * year + 100 * month + day;
		}

		int min_id = 1, max_id = 1;
		for (int i = 2; i <= n; ++i) {
			if (date[i] < date[min_id]) {
				min_id = i;
			}
			if (date[i] > date[max_id]) {
				max_id = i;
			}
		}

		printf("%s\n%s\n", name[max_id], name[min_id]);
	}

	return 0;
}
