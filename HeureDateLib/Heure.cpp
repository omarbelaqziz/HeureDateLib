#include "pch.h"
#include "Heure.h"
#include <iostream>
using namespace std;
DateHeure::Heure::Heure(short int h, short int m, short int s)
{
	this->H = (0 <= h && h < 24) ? h : 0;
	this->M = (0 <= m && m < 60) ? m : 0;
	this->S = (0 <= s && s < 60) ? s : 0;
}

void DateHeure::Heure::print() const
{
	cout << this->H << ":" << this->M << ":" << this->S << endl;
}

bool DateHeure::Heure::operator>(const Heure& H) const
{

	if (this->H > H.H)
		return true;
	else if (this->H < H.H)
		return false;
	else
	{
		if (this->M > H.M)
			return true;
		else if (this->M < H.M)
			return false;
		else
		{
			if (this->S > H.S)
				return true;
			else
				return false;
		}
	}
}