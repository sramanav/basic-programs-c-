/*code to find largest using vector*/

#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;



int main()
{
	vector<int> myarr;
	int fill=0;

while(fill !=10)
{
	myarr.push_back(fill);
	++fill;
}
cout<<"your integers are :"<<endl;
for(vector<int>::size_type j=0;j!=0;++j)
{
	cout<<myarr[j]<<" ";
}
cout<<endl;
}
