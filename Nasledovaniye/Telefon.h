#pragma once
#include<iostream>
//#include"Knopochniy.h"
class Telefon
{
protected:
	char* name;
	char* model;
public:
	Telefon()
	{
		this->name = (char*)"Telefon";
		this->model = (char*)"Model";
	}
	Telefon(char* name,char* model)
	{
		this->name = name;
		this->model = model;
	}
	void print()
	{
		std::cout << "Telefon:\n";
		std::cout << "Name: " << this->name << "\tModel: " << this->model << "\n";
	}
};

