#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

string ArrayToString(const size_t& n,
                     const double* const& v);

bool ImportVectors(const string& inputFilePath,
                   size_t& n,
				   double& S,
                   double*& v1,
                   double*& v2);
				   
double return_V(const double S, const double* v1, const double* v2, const size_t n);

double rate_of_return(const double S, const double V);