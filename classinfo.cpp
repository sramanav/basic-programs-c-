#include<iostream>              //header file input and output
#include<string>          //string is used in the program
using namespace std;         //standard library

class personal             //base class
{
public:               //class is public and can be accessed by everyone
	int age;
	int id;                 //data members in the class
	string gender;
	string name;
	void CStudent()          //member function for personal class
	{

		cout<<"enter your name: ";
		cin>>name;
      cout<<"enter age: ";
      cin>>age;                              //data member for CStudent
      cout<<"enter id number: ";
      cin>>id;
      cout<<"enter your gender: ";
      cin>>gender;

	}
};               //class is terminated
class student : public personal         //derived class from personal class
{
public:                       //class is public
	int cal;
			int marks;
	    int number;                        //data members for class
	    	int totalcredits;
	    	string courseinfo;
	void CStudent()                       //member function for class student
	{

    cout<<"enter student number: "<<endl;
    cin>>number;                                       //data members for CStudent
    cout<<"course information: ";
    cin>>courseinfo;
    cout<<"total credits for course are: ";
    cin>>totalcredits;
    cout<<"total marks are: ";
    cin>>marks;
    cal=(marks*totalcredits)/3;
    cout<<"calculated score is: "<<cal;

	}
};
class subject : public student                     //class subject has attributes of class student
{
public:


	string teacher;                 //data member

	void CCourse()                  //member function CCourse
	{
		cout<<"course name is: ";
		cin>>courseinfo;
		cout<<"name of the instructor is: ";                //displays the output
		cin>>teacher;
	}
};
class clas : public student                  //class clas has attributes of class student
{
public:
	int cnumber;
	string cname;                              //data members of clas
	int highest,lowest,average,i=100;
	void CClass()
	{
		cout<<"class number is: ";
		cin>>cnumber;
		cout<<"name of class is: ";
		cin>>cname;
		highest=i;                                       //outputs for the CClass
		cout<<"highest marks are: "<<i<<endl;
		lowest=i/2;
		cout<<"lowest marks are: "<<lowest<<endl;
		average=highest-lowest;
		cout<<"average is: "<<average;

		}
};
int main()                    //main function to create objects and calling
{
	personal p;
	p.CStudent();         //object p is created for class personal and then called
	student s;
	s.CStudent();             //object s is created for class student and then called
	subject sub;
	sub.CCourse();              //object sub is created for class subject and then called
	clas c;
	c.CClass();

}             //program is terminated
