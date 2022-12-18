#include<stdio.h>
int main()
{
	int s=0,i,j,bt[100],at[100],n,qt,c=0,tat[100],wt[100],ft[100]={0},temp[100],cc=0,awt=0,atat=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		temp[i]=bt[i];//copying the burst time values
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	scanf("%d",&qt);
	i=0;
	while(cc<n)
	{
		if(bt[i]!=0)
		{
			if(bt[i]-qt>0)
			{
				bt[i]-=qt;
				c+=qt;
			}
			else
			{
				c+=bt[i];
				bt[i]=0;
				ft[i]=c;
				cc++;//counting which process becomes zero
			}
		}
		i=(i+1)%n;
	}
	for(i=0;i<n;i++)
	{
		printf("p:%d bt:%d at:%d ft(or)tat:%d wt:%d\n",i+1,temp[i],at[i],ft[i],ft[i]-temp[i]);
	}
	for(i=0;i<n;i++)
	{
		atat+=ft[i];
		awt+=(ft[i]-temp[i]);
	}
	printf("atat: %d awt: %d",atat/n,awt/n);
	return 0;
}
/*
4
5 4 2 1
0 0 0 0
2
p:1 bt:5 at:0 tat:12 wt:7
p:2 bt:4 at:0 tat:11 wt:7
p:3 bt:2 at:0 tat:6 wt:4
p:4 bt:1 at:0 tat:7 wt:6
atat: 9 awt: 6
*/