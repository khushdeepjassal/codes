#include <iostream>
using namespace std;

int main()
{
	int a,b,c,greatest;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	greatest=(a>b&&a>c)?a:(b>c)?b : c;
	cout<<"which is greater no.: "<<greatest;
	
	
	return 0;
}
