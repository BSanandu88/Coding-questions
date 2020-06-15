#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[1000];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int count[1000]={0},out=0;

        for(int i=0;i<n;i++)
            count[a[i]]++;

        for(int j=0;j<n;j++)
        {
            if(a[j]!=a[j+1])
            { if(out!=0)
                   break;
               for(int k=j+2;k<n;k++)
               {
                   if(a[j]==a[k])
                   {
                     out++;
                     break;
                   }

               }
               
               if(out!=0)
                 break;
               
               for(int k=j+1;k<n;k++)
               {
                     if(count[a[j]] == count[a[k]])
                     {
                        out++;
                        break;
                     }
                     for(int l=k;l<n;l++)
                     {
                         if(a[l] != a[l+1])
                         {
                            break;
                         }
                         else
                            k++;
                     }

               }

            }
            
        }
if(out==0)
            cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
      
    }

    return 0;
}
