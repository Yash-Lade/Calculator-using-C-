#include<iostream>
using namespace std;

int add()
{
	int a,b;
	
	cout<<"Enter first number :";
	cin>>a;
	cout<<"Enter second number :";
	cin>>b;
	cout<<"The sum is :"<<a+b;
}

int sub()
{
	int a,b;	
	cout<<"Enter first number :";
	cin>>a;	
	cout<<"Enter second number :";
	cin>>b;
	cout<<"The subtraction is :"<<a-b;
}
int mul()
{
	int a,b;	
	cout<<"Enter first number :";
	cin>>a;	
	cout<<"Enter second number :";
	cin>>b;
	cout<<"The multiplication is :"<<a*b;
}
int div()
{
	int a,b;	
	cout<<"Enter first number :";
	cin>>a;	
	cout<<"Enter second number :";
	cin>>b;
	cout<<"The subtraction is :"<<a/b;
}
int mod()
{
	int a,b;	
	cout<<"Enter first number :";
	cin>>a;	
	cout<<"Enter second number :";
	cin>>b;
	cout<<"The subtraction is :"<<a%b;
}

int main()
{
	char b=240,ch,x;
	cout<<b<<b<<b<<"-- Calculator by Yash Lade --"<<b<<b<<b<<endl;
	
	do
	{
		cout<<"\n\nPress + for performing addition ";
		cout<<"\nPress - for performing substraction ";
		cout<<"\nPress * for performing multiplication ";
		cout<<"\nPress / for performing division ";
		cout<<"\nPress % for performing modulus ";
		cout<<"\nPress x to exit the program \n";
		
		cout<<"Enter your choice :";
		cin>>ch;
		
		switch(ch)
		{
			case '+':add();break;
			case '-':sub();break;
			case '*':mul();break;
			case '/':div();break;
			case '%':mod();break;
			case 'x':break;
			default :cout<<"Wrong choice !!\n";
		}
	}while(ch!=x);
}
