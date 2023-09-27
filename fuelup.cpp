#include<iostream>
using namespace std;
	void fueel(float distance);
main(){
	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;

	fueel(distance);

}

	void fueel(float distance)
{	float fuel;
	fuel=10*distance;
	cout<<"Fuel needed: "<<fuel<<endl;
}