#include<iostream>
using namespace std;
void binary_search(int A[],int N,int key);
int main()
{
	int A[1000],key,N,t;

	cin>>t;
	while(t--)
	{
		cin>>N;
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
		}

		cin>>key;
		binary_search(A,N,key);


	}
	return 0;

}

void binary_search(int A[],int N,int key)
{
	int low=0,high=N-1,mid,c=0,flag=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(A[mid]==key)
		{
			flag++;
			cout<<"Present " ;
			c++;
			break;

		}
		if(key<A[mid]){
			high=mid-1;
			c++;

		}
		else
		{
			low=mid+1;
			c++;
		}

	}
	if(flag==0)
	{
		cout<<"Not Present ";
	}
	cout<<c;



}
