#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,7>myarray{2,4,6,7,8,9};
	cout<<"size=>"<<myarray.size()<< " ";
	myarray.fill(8);
	for (int &x: myarray) {
		cout<<' '<<x;
	}
	return 0;
}