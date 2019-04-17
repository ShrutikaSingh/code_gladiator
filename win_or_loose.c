#include<stdio.h>

int N;
void swap(int c,int d)
  {
   int temp;
   temp=c;
   d=c;
   c=temp;
  }


void sort_villian(int e[N])
{

  for(int i=0;i<N-1;i++)
    {
	for(int l=1;l<N-l;l++)
	  {
	    if(e[k]>e[k+1])
	    swap(e[k],e[k+1]);
	  }
        printf("%d",e[k]);
    }


}



int main()
  {
    
    int e[N],b[N];
    int i,testcase;
    printf("Enter no. of villians");
    scanf("%d",&N); 
    for(testcase=1;testcase<2;testcase++)
	{
	   printf("Enter Strength of villians");
	   for(i=0;i<N;i++)
	      {
		scanf("%d,",&e[i]);
		printf(",");
	      }
	printf("sorted_villian_strength");
	void sort_villian(int e[N]);
	   printf("Enter Energy of players");
	   for(int j=0;j<N;j++)
	      {
		scanf("%d,",&b[j]);
		printf(",");
	      }
	
	 }
	
  }
