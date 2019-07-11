#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,m,c,l,pos;
    printf("Enter number of rounds\n");
    scanf("%d",&n);
    int *piles=(int*)malloc(n*sizeof(int));
    printf("Enter the piles for each round\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&piles[i]);
    }
    int card[100],shuffle[100];
    for(i=0;i<100;i++)
    {
        card[i]=i+1;
    }
    for(i=0;i<n;i++)
    {   k=100/piles[i];
        c=0;
        m=0;
        while(c<piles[i])
        {
            for(j=0;j<k;j++)
            {
                shuffle[m]=card[piles[i]*j+c];
                m++;
            }
            c++;
        }
        for(l=0;l<100;l++)
        {
            card[l]=shuffle[l];
        }
    }
    printf("Enter position in final pile to be determined\n");
    scanf("%d",&pos);
    printf("Card number at %d position is \n%d ",pos,card[pos-1]);
return 0;
}
