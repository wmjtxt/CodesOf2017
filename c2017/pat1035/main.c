#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j,k,*a,*b,pos1,pos2;
	int s1,s2,t,mid;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(b[i]>b[i+1])
		{
			break;
		}
	}
	pos1=pos2=i+1;
	for(j=i+1;j<n;j++)
	{
		if(a[j]!=b[j])
		{
			break;
		}
	}
	if(j==n)
	{
		printf("Insertion Sort\n");
		for(i=0;i<n;i++)
		{
			if(b[i]<b[pos1])
			{
				printf("%d ",b[i]);
			}else{
				printf("%d",b[pos1]);
				break;
			}
		}
		if(i==n-1)
		{
			printf("\n");
			return;
		}
		for(k=i;k<n;k++)
		{
			if(k!=pos1){
				printf(" %d",b[k]);
			}
		}
	}else{
		printf("Merge Sort\n");
		for(i=pos1,j=0;i<n-1;i++)
		{
			if(b[i]>b[i+1])
			{
				if(j+1<pos2)
				{
					pos1=pos2;
					pos2=j+1;
				}
				j=0;
			}else{
				j++;
			}
		}
		/*if(j+1<pos2)
		{
			pos2=j+1;
		}
		j=2;
		while(pos2>j)
		{
			j*=2;
		}*/
		pos1*=2;
		t=0;
		for(i=0;i<n;i+=pos1)
		{
			mid=(pos1+2*i-1)/2;
			s1=i;
			s2=mid+1;
			while(s1<=mid&&s2<i+pos1&&s1<n&&s2<n)
			{
				if(b[s1]<b[s2])
				{
					a[t++]=b[s1++];
				}else{
					a[t++]=b[s2++];
				}
			}
			while(s1<=mid&&s1<n)
			{
				a[t++]=b[s1++];
			}
			while(s2<i+pos1&&s2<n)
			{
				a[t++]=b[s2++];
			}
		}
		for(i=0;i<n-1;i++)
		{
			printf("%d ",a[i]);
		}
		printf("%d\n",a[n-1]);
	}
	system("pause");
	return 0;
}
