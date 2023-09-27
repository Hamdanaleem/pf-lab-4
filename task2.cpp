#include<iostream>
using namespace std;

	void add();

main(){
	add();
	add();

}
	void add()
{
	int number_1, number_2;
	cout<<"Enter First number: ";
	cin>>number_1;
	cout<<"Enter Second number: ";
	cin>>number_2;
	int sum;
	sum=number_1+number_2;
	cout<<"Sum: "<<sum<<endl;
}