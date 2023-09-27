#include<iostream>
using namespace std;

	void conversion(float inches);

main(){
	float inches;
	cout<<"Enter the measurement in inches: ";
	cin>>inches;

	conversion(inches);
 }
	void conversion(float inches)
{
	double feet;
	feet=inches/12;
	cout<<"Equivalent in feet: "<<feet<<endl;
}	