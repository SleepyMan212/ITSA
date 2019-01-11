/*
	status: ac
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define Max 10000000
char line[Max],c,ans[Max]={'\0'};

int main(void)
{
    int test,i,j;
    int num;


    while((fgets(line,Max,stdin))!=NULL)
    {
            line[strlen(line)-1]='\0';

            for(i=0;line[i]!='\0';i++)
            {
                c = line[i];
                test = isalpha(c);
                if(test!=0)
                {
                    test = isupper(c);
                    if(test!=0)
                    {
                        c = tolower(c);
                        c = 'a'+(26-(c-'a'+1));
                    }
                    else
                    {
                        c = toupper(c);
                        c = 'A'+(26-(c-'A'+1));
                    }
                }
                else if((test = isdigit(c))!=0)
                {
                        num = c - '0';
                        num = (num+1)%10;
                        c = '0' + num;
                }
                ans[i]= c;
            }
            printf("%s\n",ans);
            for(j=0;j<i;j++){ans[j]='\0';}
    }

    return 0;
}
