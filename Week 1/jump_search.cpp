#include<iostream>
using namespace std;
int main()
{
    int n,key,jump=1;
    cout<<"enter the size of an array and key element"<<endl;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int m=2;       //jump size
   int low=0,high=m;
   while(high<=n)
   {
       if(arr[high]>key)
       {
            for(int i=low;i<m;i++)
          {

             if(arr[i]==key)
            {
           cout<<"YES"<<endl;
           cout<<"no. of jump ="<<jump;
           return 0;
            }
          }
           cout<<"NO"<<endl;
               return 0;
       }
       else{
           low=m;
           m=m+2;
           high=m;
           jump++;
       }
   }

    return 0;

}
