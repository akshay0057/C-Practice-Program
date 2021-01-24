#include<iostream>
using namespace std;

inline void add(int a, int b)
{
	cout<<"Sum : "<<a+b;
}

inline void sub(int a, int b)
{
	cout<<"Subtract : "<<a-b;
}

inline void pro(int a, int b)
{
	cout<<"Product : "<<a*b;
}

inline void div(int a, int b)
{
	cout<<"Division : "<<a/b;
}

int main()
{
	int num1, num2, choice;
	cout<<"Choose Following Options :"<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Substraction"<<endl;
	cout<<"3. Product"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"Enter your choice :";
	cin>>choice;
	switch(choice)
	{	
		case 1:
			cout<<"num1 : ";
		    cin>>num1;
			cout<<"num2 : ";
			cin>>num2;
			add(num1, num2);
			break;
			
		case 2:
			cout<<"num1 : ";
			cin>>num1;
			cout<<"num2 : ";
			cin>>num2;
			sub(num1, num2);
			break;
			
		case 3:
			cout<<"num1 : ";
			cin>>num1;
			cout<<"num2 : ";
			cin>>num2;
			pro(num1, num2);
			break;
			
		case 4:
			cout<<"num1 : ";
			cin>>num1;
			cout<<"num2 : ";
			cin>>num2;
			div(num1, num2);
	}
	return 0;
}
