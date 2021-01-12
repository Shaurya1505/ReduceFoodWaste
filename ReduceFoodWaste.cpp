#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
static int no=0;

class list
{
	public:
	int sno;
	int quantity;
	string item;
	
	list()
	{
		quantity=0;
		item="NULL";
		no++;
		sno=no;
		
	}
	void getData()
	{
		cout<<"\nEnter item name";
		cin>>item;
		cout<<"\nEnter quantity";
		cin>>quantity;
	}
	void printData()
	{
		cout<<"\n"<<sno<<setw(17)<<item<<setw(17)<<quantity;
	}
};

int main()
{
	int n;
	list s[50];
	cout<<"\nEnter the no. of items";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s[i].getData();
	}
	
	cout<<setw(21)<<"!!!!LIST!!!!";
	cout<<"\n\nS.no----------item----------quantity\n";
	for(int j=0;j<n;j++)
	{
		s[j].printData();
	}
	return 0;
}
