#include "ctest.h"
#include "deposit.h"

CTEST(check_test, wrong_sum_day)
{
    // Given
    const int day = 366;
    const int summa = 90;

    // When
    const int result = check(day, summa);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_test, wrong_day)
{
    // Given
    const int day = -1;
    const int summa = 1000;

    // When
    const int result = check(day, summa);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_test, wrong_sum)
{
    // Given
    const int day = 265;
    const int summa = 100;

    // When
    const int result = check(day, summa);

    // Then
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_test, wrong_no)
{
    // Given
    const int day = 250;
    const int summa = 10000;

    // When
    const int result = check(day, summa);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
