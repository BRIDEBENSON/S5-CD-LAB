#include<stdio.h>
#include<stdlib.h>
void main()
{
	int sym[2]={0,1};
	int csym, cstate,length,nstate,k=0, final;
	printf("enter the length of the string:");
	scanf("%d",&length);
	int input[length], trans[length][length];
	printf("enter the input string:");
	for (int i=0;i<length;i++)
	{	
		printf("enter the %dth symbol:",i);
		scanf("%d", &input[i]);
	}
	printf("enter the no of states:");
	scanf("%d",&nstate);
	printf("enter the transition matrix:");
	for (int i=0;i<nstate;i++)
	{	
		for(int j=0;j<2;j++)
		{
			printf("enter the transition of state%d on symbol%d:",i,sym[j]);
			scanf("%d", &trans[i][j]);
		}
	}
	printf("enter the no of final states:");
	scanf("%d",&final);
	int sfinal[final];
	printf("enter the final states:");
	for(int i=0;i<final;i++)
	{
		printf("enter the %dth final state:",i+1);
		scanf("%d",&sfinal[i]);
	}	
	csym=input[k];
	cstate=0;
	do
	{
		for (int i=0;i<nstate;i++)
		{
			if(cstate==i)
			for(int j=0;j<2;j++)
			{
				if(csym==j)
				{
					printf("symbol%d state%d->%d\n", csym,cstate,trans[i][j]);
					cstate=trans[i][j]; 
					k++;
					csym=input[k];
				}
			}
		}
	} while(k<length);
	for(int i=0;i<final;i++)
	{
		if(cstate==sfinal[i])
		{
			printf("the string is accepted");
			exit(0);
		}
	}
	printf("the string is rejected");
}
	
						
	
		
	
	
	
	
