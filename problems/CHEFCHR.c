#include<stdio.h>
#include<string.h>
int main()
{
char str[500000];
int t,i,j;
scanf("%d\n",&t);
while(t--)
{
gets(str);
int f=0,p=0,q=0,r=0,s=0;
int n=strlen(str);
for(i=0;i<n-3;i++)
{
     for(j=i;j<i+4;j++)
       {
          if(str[j]=='c')
                p++;
          if(str[j]=='h')
                q++;
          if(str[j]=='e')
                r++;
          if(str[j]=='f')
                s++;
       }
  if(p==1&&q==1&&r==1&&s==1)
       f++;
       p=0;
       q=0;
       r=0;
       s=0;
   }
if(f==0)
printf("normal\n");
else
printf("lovely %d\n",f);
}
return 0;
}
