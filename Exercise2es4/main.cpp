
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

#include "Utils.hpp"

int main()
{
    string inputFile= "data.txt";
    
	size_t n;
	double S;
	double *ptr1 = nullptr;
	double *ptr2 = nullptr;
	
	ImportVectors(inputFile, n, S, ptr1, ptr2);
	
	double V = return_V(S, ptr1, ptr2, n);
	double rate = rate_of_return(S, V);
	ofstream printout("result.txt");
	printout << "S = "<< fixed << setprecision(2) << S << ", n = "<< n << endl;
	printout << "w = "<< ArrayToString(n, ptr1)<< endl;
	printout << "r = "<< ArrayToString(n, ptr2)<< endl;
	printout << "Rate of return of the portfolio: "<< fixed << setprecision(4) << rate << endl;
	printout << "V: "<< fixed << setprecision(2) << V << endl;
	
	return 0;
}

