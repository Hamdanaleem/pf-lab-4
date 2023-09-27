#include<iostream>
using namespace std;
	void add(float number_1, float number_2);
	void sub(float number_1, float number_2);
	void mult(float number_1, float number_2);
	void divi(float number_1, float number_2);
main(){
	float number_1, number_2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>number_1;
	cout<<"Enter 2nd number: ";
	cin>>number_2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
	if(op=='+')
	{add(number_1, number_2);
	}
	if(op=='-')
	{sub(number_1, number_2);
	}
	if(op=='*')
	{mult(number_1, number_2);
	}
	if(op=='/')
	{divi(number_1, number_2);
	}
}	
	void add(float number_1, float number_2)
{	float sum;
	sum=number_1+number_2;
	cout<<"Addition: "<<sum<<endl;
}
	void sub(float number_1, float number_2)
{	float sub;
	sub=number_1-number_2;
	cout<<"Subtraction: "<<sub<<endl;
}
	void mult(float number_1, float number_2)
{	float multiply;
	multiply=number_1*number_2;
	cout<<"Multiplication: "<<multiply<<endl;
}
	void divi(float number_1, float number_2)
{	float divide;
	divide=number_1/number_2;
	cout<<"Division: "<<divide<<endl;
}