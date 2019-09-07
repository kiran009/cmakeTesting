#include <iostream>
#include "common.hpp"
using namespace std;
int main(int argc, char **argv) {
	cout << "CMake:> Add Sub Mul Div\t" << add(20,30) << "\t" << sub(30,20)<<"\t" << mul(20,30) <<"\t" << divide(30,20) << endl;
	extrafunction();
	return(0);
}
