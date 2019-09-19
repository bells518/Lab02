#include "lab2.hpp"
#include <iostream>
using std::cout;
using std::endl;


/*
Default constructor		X
Copy constructor		X	
at least one other constructor	X
Destructor	
*/

/*
Create a local variable of an object of your class							
Create a local variable that is a copy of another object of your class
Pass an object by value
Pass an object by reference
Pass an object by reference to const
Return an object by value
Create a vector of 5 objects
*/

int main()
{
	Person h(22,"Henry");
	cout << "This is " << h.getName() <<". "<< endl;
	cout << h.getName() << " is " << h.getAge() << " years old." << endl;
	Person d(h);
	cout << "It seems another person has entered the room." << endl;
	cout << endl;
	cout << "This new person looks just like " << h.getName() << endl;
	cout << endl;
	cout << "He says his name is " << d.getName() << ". " << endl;
	cout << d.getName() << " is " << d.getAge() << " years old. " << endl;
	d.changeAge(23);
	d.changeName("Derrick");
	cout << "This new Henry has changed his name to " << d.getName() << " and he has now turned " << d.getAge() << " years old. "<<endl;

}