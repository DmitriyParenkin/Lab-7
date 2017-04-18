#include <stdio.h>
#include "deposit.h"

void rashet (struct Deposit *dep) {
	int srok = dep->srok;
	int vklad = dep->vklad;
	while ((srok < 0) && (srok <=365)) {
		printf("Enter the term of the deposit: ");
		scanf("%d", &srok);
		if (srok < 0)
			printf("\nThe data is not correct");
	}
	
	while (vklad < 10000) {
		printf("Enter the amount of your deposit: ");
		scanf("%d", &vklad);
		if (vklad < 10000)
			printf("\n The data is not correct");
	}

	if (vklad >= 100000) {
		if (srok <= 30)
			vklad = vklad - vklad *0.1;
		if ((srok > 30) && (srok <=120))
			vklad = vklad +vklad * 0.03;
		if ((srok  > 120) && (srok <=240))
			vklad = vklad + vklad * 0.08;
		if ((srok > 240) && (srok <=365))
			vklad = vklad + vklad * 0.15;
	}
	
	if (vklad < 100000) {
		if (srok <=30)
			vklad = vklad - vklad *0.1;
		if ((srok > 30) && (srok <=120))
			vklad = vklad + vklad * 0.02;
		if ((srok > 120) && (srok <=240))
			vklad = vklad + vklad * 0.06;
		if ((srok > 240) && (srok <=365))
			vklad = vklad + vklad * 0.12;
	}
	printf("Deposit amount = %d", vklad);
}