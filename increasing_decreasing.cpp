#include<iostream>
using namespace std;
int main()
{
	int n,number,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>number;
		if(number-i<number)
			s++;
		cout<<true;
	}
		
	return 0;
}