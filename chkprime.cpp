//prime Number check
#include<iostream>
using namespace std;
int main()
{

	int num;
	cin>>num;
	
	bool status=false;
	for(int i=2;i<num;i++)
	{
		
		if(num%i==0)
		{
			status=false;
		cout<<"not prime"<<endl;		
		break;
		}
		else
		{
			status=true;
		cout<<"prime";
		}
	}

   
}