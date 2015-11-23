#include "allheads.h"
int main() {
	printf("The integral of a Normal (0,1) distribution "
		"between -1.96 is %g\n", erf(1.96*sqrt(1/2.)));
}
