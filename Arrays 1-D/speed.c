#include <stdio.h>
     //Compiler version g++ 4.9
     
     int main(void)
     {
     	int t;
     	unsigned long long n,a[100000],i,c;
     	scanf("%d",&t);
     	while(t!=0)
     	{
     		c=1;
     		scanf("%llu",&n);
     		for(i=0;i<n;i++)
     		scanf("%llu",&a[i]);
     		for(i=0;i<n-1;i++)
     		{
     			if(a[i]<a[i+1])
     			 a[i+1]=a[i];
     			 else
     			 c++;
     		}
     		printf("%llu\n",c);
     		
     		t--;
     	}
     	return 0;
     }
