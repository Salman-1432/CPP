#include<iostream>
using namespace std;
int main()
{
	int r,c;
	int Arr[50][50];
	
	cout<<"Enter the number r c:"<<endl;
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>Arr[i][j];
		}
	}
	cout<<"show the number of the programing:"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<Arr[j][i]<<" ";
		}
		cout<<"\n";
	}
}
