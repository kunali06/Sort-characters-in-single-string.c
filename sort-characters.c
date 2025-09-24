#include<stdio.h>
#include<string.h>
void main(){
char ch[100];
char temp;
int i,j,n;
printf("enter string:\n");
gets(ch);
n=strlen(ch);

for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(ch[i]>ch[j])
        {
            temp=ch[i];
            ch[i]=ch[j];
            ch[j]=temp;
        }
    }
}
printf("sorted string :%s",ch);
getch();
}
