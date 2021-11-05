#pragma once
#include "Heure.h"
namespace DateHeure
{
    class DateH :
        public Heure
    {
    private:
        short int jour, mois, annee;
    public:
        DateH(short int h, short int m, short int s, short int j, short int mo, short int a);
        void print() const;
        bool operator>(const DateH&) const;
        bool isLeap(int a);
    };
};