/*Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.
*/
//define library
#include<iostream>
#include<cstring>
using namespace std;
//define class
class rectangle{
	//protection type
	public:
	//define variables
	float length,breadth;
	//function for area
	float area(){
		return length*breadth;
	}
	//function for area
	float perimeter(){
		return 2*(length+breadth);
	}
};
//define mainfunction
int main(){
	//define variables
	float a,b,c,d;
	//ask the user to giv the values of the 1st rectangle
	cout<<"FOR FIRST RECTANGLE"<<endl;
	cout<<"LENGTH=";
	cin>>a;
	cout<<endl<<"BREADTH=";
	cin>>b;
	//ask the user to give the values of the 2nd rectangle
	cout<<"FOR SECOND RECTANGLE"<<endl;
	cout<<"LENGTH=";
	cin>>c;
	cout<<endl<<"BREADTH=";
	cin>>d;
	//define object
	rectangle rect1,rect2;
	//input the values given by the user int the objects
	rect1.length=a;
	rect1.breadth=b;
	rect2.length=c;
	rect2.breadth=d;
	//comparision of the area of the two rectangles
	if(rect1.area()>rect2.area()){cout<<"The area of first rectangle is greater.";}
	else if(rect1.area()<rect2.area()){cout<<"The area of second rectangle is greater.";}
	else{cout<<"The area of the both rectangles are same.";}
	cout<<endl;
	//comparision of perimeter
	if(rect1.perimeter()>rect2.perimeter()){cout<<"The perimeter of first rectangle is greater.";}
	else if(rect1.perimeter()<rect2.perimeter()){cout<<"The perimeter of second rectangle is greater.";}
	else{cout<<"The perimetr of the both rectangles are same.";}
	return 0;
}
