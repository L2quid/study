#include <stdio.h>

typedef  struct
{
	int numerator;
	int denominator;
} FRACTION;

int main(void)
{
	FRACTION  fr1;
	FRACTION  fr2;
	FRACTION  res;

	printf("Key first fraction in the form of  x/y: ");
	scanf_s("%d /%d", &fr1.numerator, &fr1.denominator);
	printf("Key second fraction in the form of x/y: ");
	scanf_s("%d /%d", &fr2.numerator, &fr2.denominator);
	if (fr1.denominator == fr2.denominator) {
		res.numerator = fr1.numerator   + fr2.numerator;
		res.denominator = fr1.denominator ;

		printf("\nThe result of %d/%d + %d/%d is %d/%d",
			fr1.numerator, fr1.denominator,
			fr2.numerator, fr2.denominator,
			res.numerator, res.denominator);
	}
	else {
		res.numerator = fr1.numerator   * fr2.denominator + fr2.numerator* fr1.denominator;
		res.denominator = fr1.denominator * fr2.denominator;

		printf("\nThe result of %d/%d + %d/%d is %d/%d",
			fr1.numerator, fr1.denominator,
			fr2.numerator, fr2.denominator,
			res.numerator, res.denominator);
	}
	return 0;
}