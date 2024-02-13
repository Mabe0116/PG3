#include "beef.h"
#include "chicken.h"
#include "pork.h"

int main() {
	Meet* chicken = new Chicken();

	Meet* beef = new Beef();

	Meet* pork = new Pork();

	chicken->eat();
	beef->eat();
	pork->eat();

	delete chicken;
	delete beef;
	delete pork;

	return 0;
}
