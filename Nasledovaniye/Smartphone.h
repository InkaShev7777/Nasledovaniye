#pragma once
#include<iostream>
#include"Telefon.h"
#include"Knopochniy.h"
class Smartphone : public Telefon
{
protected:
	double diagonal;
public:
	Smartphone(char* name, char* model ,double diadonal) : Telefon(name, model)
	{
		this->diagonal = diadonal;
	}
	Smartphone(double d)
	{
		this->diagonal = d;
	}
	void print()
	{
		Telefon::print();
		std::cout << "SmartPhone:\n";
		std::cout << "Diagonal: " << this->diagonal << "\n";
	}
};

