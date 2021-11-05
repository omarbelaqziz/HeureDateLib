#pragma once
namespace DateHeure
{
	class Heure
	{
	protected:
		short int H, M, S;
	public:
		Heure(short int h = 0, short int m = 0, short int s = 0);
		void print() const;
		bool operator>(const Heure&) const;

	};
};

