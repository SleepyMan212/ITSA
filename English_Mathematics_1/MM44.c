/*
	status: ac
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,j,n;
    int a,b;
    int number[10000] = {0};
    char op[2];
    i = 0;
    while(scanf("%d",&number[i])!=-1){
        i++;
    }
    for(j=0;j<i-1;j++){
        a = number[j];
        b = number[j + 1];
        while(b != 0){
            n = a % b;
            a = b;
            b = n;
        }
        number[j + 1] = (number[j] * number[j + 1]) / a;
    }
    printf("Lowest common multiple: %d\n",number[j]);
    return 0;
}
