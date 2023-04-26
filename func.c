#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int _printd(int val)
{
	int k, j;
	int count = 0;
	int mod = 0;
	int r;
	int *arr;
	k = val;
	//156
	while(k > 0)
	{
		/*mod = k % 10;*/
		k /= 10;
		count++;
	}
	//651
	/*printf("count %d\n", count);*/
	arr = calloc(count, sizeof(int *));
    j = val;
    r = count - 1;
    while(j > 0)
	{
		arr[r] = j % 10;
        r--;
		j /= 10;
	}
    for (mod = 0; mod < count; mod++)
    {
        putchar('0' + arr[mod]);
    }
    return count;
}

int main (void)
{
    _printd(7);
    printf("\n");
    _printd(1234567890);
    printf("\n");
    return (0);
}
