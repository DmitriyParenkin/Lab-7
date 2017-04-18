#include <stdio.h>
#include "deposit.h"

int main()
{
	struct Deposit dep;
	dep.srok = -1;
	dep.vklad = 1;
	rashet(&dep);
	return 0;
}