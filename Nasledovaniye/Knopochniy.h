#pragma once
#include"Telefon.h"
#include<iostream>
class Knopochniy : public Telefon
{
protected:
	char* mas;
public:
	Knopochniy(char* name, char* model): Telefon(name, model)
	{
		this->mas = (char*)"123456789#0*";
		this->name = name;
		this->model = model;
	}
	void print()
	{
		Telefon::print();
		std::cout << "Knop.telefon\nKnopki:\n";
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 1; j++)
			{
				std::cout << this->mas[i] << this->mas[i+1] << this->mas[i+2];
			}
			i += 2;
			std::cout << "\n";
		}
	}
};

