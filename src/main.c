#include <stdio.h>
#include "deposit.h"

int main()
{
	int day, summa, select;
	
	printf("Enter the term of the deposit:  ");
	scanf("%d", &day);

	printf("Enter the deposit amount: ");
	scanf("%d", &summa);

	while (check(day, summa) == -1) {
		printf("Data is entered incorrectly\n[1]re-enter\n[2]exit\n");
		scanf("%d", &select);

		if (select == 1) {
			printf("Enter the term of the deposit: ");
			scanf("%d", &day);

			printf("Enter the deposit amount: ");
			scanf("%d", &summa);
		}
		else return 0;
	}
	printf("The deposit amount at the time of expiry: %.3f\n", calc(day, summa));	
	
	return 0;
}
