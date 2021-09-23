#include<iostream>
using namespace std;
void linear_search(int A[],int N,int key);
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
		linear_search(A,N,key);


	}
	return 0;

}

void linear_search(int A[],int N,int key)
{
	int c=0;
	for(int j=0;j<N;j++)
	{
		if(key==A[j])
		{
			cout<<"Present "<<j+1<<endl;
		}
		else
		{
			c++;
		}
	}
	if(c==N)
	{
		cout<<"Not Present "<<c<<endl;
	}


}
