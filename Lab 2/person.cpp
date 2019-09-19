#include "lab2.hpp"



Person::Person(int age, string name):_age(age),_name(name)
{
	
}
Person::Person(const Person& d) : _age(d._age), _name(d._name)
{

}
Person::Person():_age(1),_name("J")
{

}
void Person:: changeAge(int a)
{
	_age = a;
}
void Person:: changeName(string n)
{
	_name = n;
}
int Person::getAge()
{
	return _age;
}
string Person::getName()
{
	return _name;
}