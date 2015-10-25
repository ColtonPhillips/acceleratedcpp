#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string j;
	ofstream Cplusplusjournel;
	Cplusplusjournel.open("journal.txt");
	cin >> j;
	Cplusplusjournel << j << endl;

}
