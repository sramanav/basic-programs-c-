#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
void swap(int *a,int *b)            //swap function to store temporary values while swapping the numbers
{
	int temp=*a;
	*a= *b;
	*b= temp;
}
void ascending(vector<int>& myarr)       //function for ascending order
{
		for(unsigned int i=0;i<=(myarr.size())-2;i++)    //loop to check each number for sorting
		{
			if(myarr[i+1]<myarr[i])        //condition to check the adjacent numbers for ascending order
			{
				swap(&myarr[i],&myarr[i+1]);     //swap the numbers if not in ascending order

			}
		}
	}

void descending(vector<int>& myarr)        //function for descending order
{

		for(unsigned int i=0;i<=((myarr.size())-2);i++)   //loop to check numbers
		{
			if(myarr[i+1]>myarr[i])              //condition to check numbers in descending order
			{
				swap(&myarr[i],&myarr[i+1]);   //swap the numbers if not in descending order

			}
		}
	}


void display(vector<int>myarr)    //this function displays the result either in ascending or descending order
{
	for(vector<int>::size_type j=0;j!=myarr.size();++j)   //loop to check numbers according to our choice
	{
		cout<<myarr[j]<<" ";   //displays the numbers
	}
}
int main()
{
	vector<int> myarr;           //direct calling of array
	int in,n=0,i=0;
	cout<<"enter maximum number of array ";
	cin>>n;
	cout<<"Enter any "<<n<<" number ";
	while(i!=n)         //loop continues until the size of array is not reached
	{
		cin>>in;    //enter the desired numbers
		myarr.push_back(in);
		++i;
	}
	int dir;         //for direction
	cout<<"enter 0 for ascending and 1 for dscending ";
	cin>>dir;             //choice for direction(0 or 1)
	if(dir==0)           //condition for ascending
	{

    ascending(myarr);        //ascending function is directly called
	cout<<"Numbers in ascending order are:  ";
    display(myarr);      //array sorted in ascending order is displayed
	}
	if(dir==1)            //condition for descending order
	{

	descending(myarr);           //descending function is directly called
	cout<<"Numbers in descending order are: ";
    display(myarr);          //array sorted in descending order is displayed
	}

}

