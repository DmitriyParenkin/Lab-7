#include "deposit.h"
#include <stdio.h>

int check(int day, int summa)
{	
	if ((day > 365) || (day < 0)) {
		return -1;
	}
	if (summa < 10000) {
		return -1;
	}
	return 0;
}

double calc(int day, int summa)
{	
	if (day < 31) 
		return summa * 0.9;
	if (summa <= 100000) {
		if((day > 30) && (day < 121))
			return summa * 1.02;

		if((day > 120) && (day < 241))
			return summa * 1.06;

		if((day > 240) && (day < 366))
			return summa * 1.12;
	}
	if (summa > 100000) {
		if((day > 30) && (day < 121))
			return summa * 1.03;

		if((day > 120) && (day < 241))
			return summa * 1.08;

		if((day > 240) && (day < 366))
			return summa * 1.15;
	}
	return 0;
}
