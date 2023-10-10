#include <stdio.h>

template <typename Type>

Type Min(Type a, Type b) {
	if (a < b) {
		return b;
	}
	return a;
}

template <>
char Min <char>(char a, char b)
{
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
	return 0;
}


int main() {

	const int kWindowWigth = 1280;

	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%lf\n", Min<double>(11.4f, 51.4f));
	Min<char>('v', 'x');
	return 0;
}


