#include <iostream>
#define expect(expr) if(!expr) cerr << "Assertion " << #expr \
" failed at " << __FILE__ << ":" << __LINE__ << endl;

#define stringify(x) #x
#define tostring(x) stringify(x)
#define MAGIC_CONSTANT 314159


int main() {
	std::cout << "Value of MAGIC_CONSTANT=" << tostring(MAGIC_CONSTANT) << stringify(+"colton") << std::endl;
return 0;
}
