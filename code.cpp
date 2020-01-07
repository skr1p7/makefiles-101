#include <iostream>
#include <fstream>

using namespace std;

int main () {
  ofstream myfile;
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;
  int e = 50;
  myfile.open ("output.txt");
  myfile << a << ", " << b << ", " << c << ", " << d << ", " << e;
  myfile.close();
  return 0;
}