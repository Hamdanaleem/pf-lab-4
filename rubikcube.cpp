#include<iostream>
using namespace std;
	
	void stickers(int length);

main(){
	int length;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>length;
	
	stickers(length);
	
}
	void stickers(int length)
{
	int stickers_required;
	stickers_required=length*length*6;
	cout<<"Number of stickers needed: "<<stickers_required<<endl;
}