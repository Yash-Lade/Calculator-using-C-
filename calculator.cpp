#include<iostream>
using namespace std;

int main()
{
	int a,b,ch,add,mul,sub,mod,comp;
	float div;
	cout<<"\n              @Author Name - Yash Lade !!\n;
	cout<<"Calculator \n";
	do
	{
		cout<<"\n\nPress 1 for addition \n";
		cout<<"Press 2 for Substraction \n";
		cout<<"Press 3 for Multiplication \n";
		cout<<"Press 4 for Division \n";
		cout<<"Press 5 for Modulus \n";
		cout<<"Press 6 for Comparsion between two numbers\n";
		cout<<"Press 7 to exit !!\n";
		
		cout<<"\nEnter Your Choice :";
		cin>>ch;
		
		
		switch(ch)
		{
			case 1:cout<<"Enter the first number :";
				   cin>>a;
				   cout<<"Enter the second number :";
				   cin>>b;
				   
				   add=a+b;
				   
				   cout<<"\nThe addition of "<<a<<" and "<<b<<" is "<<add;break;
				   
			case 2:cout<<"Enter the first number :";
				   cin>>a;
				   cout<<"Enter the second number :";
				   cin>>b;
				   
				   sub=a-b;
				   
				   cout<<"\nThe substraction(a-b) of "<<a<<" and "<<b<<" is "<<sub<<endl;break;
				   
			case 3:cout<<"Enter the first number :";
				   cin>>a;
				   cout<<"Enter the second number :";
				   cin>>b;
				   
				   mul=a*b;
				   
				   cout<<"\nThe multiplication of "<<a<<" and "<<b<<" is "<<mul<<endl;break;
				   
			case 4:cout<<"Enter the first number :";
				   cin>>a;
				   cout<<"Enter the second number :";
				   cin>>b;
				   
				   div=a/b;
				   cout<<"\nThe division(a/b) of "<<a<<" and "<<b<<" is "<<div<<endl;break;
			
			case 5:cout<<"Enter the first number :";
				   cin>>a;
				   cout<<"Enter the second number :";
				   cin>>b;
				   
				   mod=a%b;
				   
				   cout<<"\nThe modulus of "<<a<<" and "<<b<<" is "<<mod<<endl;break;
				   
				   
			case 6:cout<<"Enter the first number :";
				   cin>>a;
				   cout<<"Enter the second number :";
				   cin>>b;
				   
				   if(a<b)
				   cout<<"\nB is greater than A that is "<<b<<" is greater than "<<a;
				   else
				   cout<<"\nA is greater than B that is "<<a<<" is greater than "<<b;
				   
				   
				   break;
				   
			case 7:break;
		}
		
	}while (ch!=7);
}
