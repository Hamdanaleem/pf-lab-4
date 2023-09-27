#include<iostream>
using namespace std;

	void add(int number_1, int number_2);

main(){
	int number_1, number_2;
	char op;
	cout<<"Enter Number 1: ";
	cin>>number_1;
	cout<<"Enter Number 2: ";
	cin>>number_2;
	cout<<"Enter Operator(+,-,/,*): ";
	cin>>op;
	if(op == '+')
	{	add(number_1, number_2);
	}
}
	void add(int number_1, int number_2)
{
	int sum;
	sum=number_1+number_2;
	cout<<"Sum: "<<sum<<endl;
}






