#include <gsl/gsl_cdf.h>
#include <allheads.h>

int main() {
	double bottom_tail = gsl_cdf_gaussian_P(-1.96,1);
	printf("Area between [-1.96, 1.96]: %f\n", 1-2*botton_tail);
}
