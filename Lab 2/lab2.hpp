#pragma once
#ifndef LAB2_HPP_
#define LAB2_HPP_
#include<string>
using std::string;



class Super
{
public:
	int getPowerlvl()
	{
		return powerlvl;
	}
	void setPowerlvl(int p)
	{
		powerlvl = p;
	}
private:
	int powerlvl = 10;
};

class Person
{

public: 
	Person();//default constructor
	Person(int age, string name);//parameter constructor
	Person(const Person& d);//copy constructor
	
	void changeName(string n);//changes name of person 
	void changeAge(int a);//changes age of person
	int getAge();// returns age of person
	string getName();//returns name of person


private:
	int _age;
	string _name;

};
#endif // !1
