#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	while(1){
		int m, k, n;
		printf("please input the number: number = ");
		scanf("%d",&n);
		int * p = (int *)malloc(sizeof(int)*n);
		int i = 0;
		for(i = 0;i < n;i++)
		{
			*(p+i) = i+1;
		}
		i = 0;
		m = 0;
		k = 0;
		while(m < n-1) {
			if(*(p+i)!=0)
			k++;
			if(k == 3)
			{
				*(p+i) = 0;
				k = 0;
				m++;
			}

			i++;
			if(i == n)
			{
				i = 0;	
			}
		}
	
		while(*p == 0)	
			p++;
		printf("the last is NO.%d\n",*p);
	}
}
