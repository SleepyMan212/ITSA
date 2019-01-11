/*
	status: ac
*/
#include<stdio.h>
#define max 60
int main(void)
{
    int num;
    int i,j;
    int data[max];
    scanf("%d",&num);
    for(i=0;i<num;i++)
        scanf("%d",&data[i]);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1;j++)
        {
            if(data[j]<data[j+1])
            {
                int temp;
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%d %d\n",i+1,data[i]);
    }
    return 0;
}
