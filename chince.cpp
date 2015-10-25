//oh ya!
#include <iostream> 
#include <string>
#include <sstream>
#define cin_string(__s) std::string __s; std::cin >> __s;
#define stringstream_create(__s) std::stringstream __s; __s 
#define pprintstream(__s) pprint(__s.str().c_str());
void pprint(const char * s) {
 	std::cout << s << std::endl;
}
int main() 
{
 	pprint("Please enter your name");
	cin_string(name);
        stringstream_create(s) << "Hello, " << name << "!";
	pprintstream(s); 
 	return 0;
}
