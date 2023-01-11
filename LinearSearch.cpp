//linear search algorithm by using vector 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	int size;
	cout<<"enter size of array:";
	cin>>size;
	cout<<"enter elements:";
	for(int i=0;i<size;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	cout<<"enter number to find:";
	int num;
	cin>>num;
	bool check=false;
	for(int i=0;i<size;i++)
	{
		if(a.at(i)==num)
		{
			check=true;
			break;
		}
	}
	if(check)
	cout<<"number found";
	else
	cout<<"number not found";
	return 0;
}