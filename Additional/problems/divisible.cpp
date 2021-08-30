#include<iostream>

using namespace std;

int main()

{

int testcases,i,j=0,temp,sum1=0,sum2=0,subtract,rem;

cin>>testcases;

int arr[testcases],b[testcases];
for(i=0;i<testcases;i++)
{

cin>>arr[i];
temp=arr[i];

if(i<testcases/2)
{

while(temp>0)
{

rem=temp%10;
temp=temp/10;

}
b[j]=rem;
}
else
b[j]=temp%10;
j++;
}
for(i=0;i<testcases;i++)
{
if(i%2==0)
   sum1=sum1+b[i];
else
   sum2=sum2+b[i];
}

subtract=sum1-sum2;
if(subtract<0)
   subtract=subtract*(-1);
if(subtract%11==0)
      cout<<"OUI";
else
       cout<<"NON";
return 0;

}