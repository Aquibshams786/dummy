#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,n,k,x=0,y=0;
	    int a[10000];
	    scanf("%d",&n);
	    scanf("%d",&k);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        x=x+a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>k)
	        {
	            a[i]=k;
	        }
	        y=y+a[i];
	    }
	    printf("%d",x-y);
	}
	return 0;
}
