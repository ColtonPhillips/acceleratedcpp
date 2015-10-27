// Hellow Blair
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cstdlib>
#define YES true
// How you doin'? - Joey
double grade(double midterm, double final, double homework)
{
	return 0.2 * midterm + 0.3 * final + 0.5 * homework;
}

void print_grade(double grade) 
{
	std::cout << std::setprecision(9001) << grade << std::endl;
}
struct person {

	unsigned int age;
	bool sex;
	float weight;
	char name[3];
	bool birthday;
} colton;


void print_person(person lil_goy)
{
	if (lil_goy.sex) std::cout << "This lil goy is down to fuck!" << std::endl;

	std::cout << "Aeg: " << lil_goy.age << " is nameduh da " << lil_goy.name 
		<< std::endl;
		
	if (lil_goy.birthday) std::cout << "Happy birtday lil goy!" << std::endl;	

}
bool maybe() {
	if (rand() < 9000) return true;
	return false;
}

int main() 
{
	person colton;
	colton.age=7;
	colton.sex=YES;
	colton.weight=-1;
	strncpy(colton.name, "CJ\0",3);
	colton.birthday=YES;

	std::vector<person> my_coltons;
	my_coltons.push_back(colton);
	my_coltons.push_back(colton);
	colton.age=8;
	my_coltons.push_back(colton);
	colton.age=9;
	colton.weight=0;
	my_coltons.push_back(colton);

	person blair;
	blair.age=7;
	blair.sex=YES;
	blair.weight=0;
	blair.birthday=false;
	strncpy(blair.name,"BLAIRa\0",3);
	if (maybe()) blair.sex=false;
	my_coltons.push_back(blair);
	
	while (true) {
		if (maybe()) {
			int i = system("cls");
			print_grade(grade(90,75,60));
			print_person(my_coltons[rand() % my_coltons.size()-1]);
		}
	}
 	return 0;
}

