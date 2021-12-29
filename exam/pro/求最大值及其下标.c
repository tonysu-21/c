#include <stdio.h>

int main()
{
	int n, idx = 0;

	scanf("%d", &n);

	int a[n - 1];

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int j = 1; j < n; j++)
	{
		if (a[j] > a[idx])
			idx = j;
	}

	printf("%d %d", a[idx], idx);

	return 0;
}