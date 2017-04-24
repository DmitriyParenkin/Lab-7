#include "ctest.h"
#include "deposit.h"
#include "deposit.c"

// Whem summa = 99999
const int summa = 99999;

CTEST(calc, day29__summa99999)
{
	int day = 29;
	double result = calc(day, summa);
	double expected = summa * 0.9;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day30_summa99999)
{
	int day = 30;
	double result = calc(day, summa);
	double expected = summa * 0.9;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day31_summa99999)
{
	int day = 31;	
	double result = calc(day, summa);
	double expected = summa * 1.02;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day120_summa99999)
{
	int day = 120;
	double result = calc(day, summa);
	double expected = summa * 1.02;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day121_summa99999)
{
	int day = 121;	
	double result = calc(day, summa);

	double expected = summa * 1.06;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day240_summa99999)
{
	int day = 240;
	double result = calc(day, summa);

	double expected = summa * 1.06;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day241_summa99999)
{
	int day = 241;
	double result = calc(day, summa);

	double expected = summa * 1.12;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day365_summa99999)
{
	int day = 240;
	double result = calc(day, summa);

	double expected = summa * 1.06;
	ASSERT_DBL_NEAR(expected, result);
}

// Whem summa = 100000
const int summa1 = 100000;

CTEST(calc, day29_summa100000)
{
	int day = 29;
	double result = calc(day, summa1);
	double expected = summa1 * 0.9;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day30_summa100000)
{
	int day = 30;
	double result = calc(day, summa1);
	double expected = summa1 * 0.9;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day31_summa100000)
{
	int day = 31;	
	double result = calc(day, summa1);
	double expected = summa1 * 1.02;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day120_summa100000)
{
	int day = 120;
	double result = calc(day, summa1);
	double expected = summa1 * 1.02;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day121_summa100000)
{
	int day = 121;	
	double result = calc(day, summa1);

	double expected = summa1 * 1.06;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day240_summa100000)
{
	int day = 240;
	double result = calc(day, summa1);

	double expected = summa1 * 1.06;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day241_summa100000)
{
	int day = 241;
	double result = calc(day, summa1);

	double expected = summa1 * 1.12;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day365_summa100000)
{
	int day = 240;
	double result = calc(day, summa1);

	double expected = summa1 * 1.06;
	ASSERT_DBL_NEAR(expected, result);
}

// Whem summa = 100001
const int summa2 = 100001;

CTEST(calc, day29_summa100001)
{
	int day = 29;
	double result = calc(day, summa2);
	double expected = summa2 * 0.9;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day30_summa100001)
{
	int day = 30;
	double result = calc(day, summa2);
	double expected = summa2 * 0.9;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day31_summa100001)
{
	int day = 31;	
	double result = calc(day, summa2);
	double expected = summa2 * 1.03;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day120_summa100001)
{
	int day = 120;
	double result = calc(day, summa2);
	double expected = summa2 * 1.03;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day121_summa100001)
{
	int day = 121;	
	double result = calc(day, summa2);

	double expected = summa2 * 1.08;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day240_summa100001)
{
	int day = 240;
	double result = calc(day, summa2);

	double expected = summa2 * 1.08;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day241_summa100001)
{
	int day = 241;
	double result = calc(day, summa2);

	double expected = summa2 * 1.15;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(calc, day365_summa100001)
{
	int day = 365;
	double result = calc(day, summa2);

	double expected = summa2 * 1.15;
	ASSERT_DBL_NEAR(expected, result);
}
