#include <iostream>
#include "binary.h"

using namespace std;

int main(int argc, char *argv[]) {
  cout << "===========================================================" << endl;
  cout << "Binary Array Practice" << endl;
  cout << "===========================================================" << endl << endl;

  boolean arr1(8);
  arr1.bitOn(7);
  cout << arr1[7];

  return EXIT_SUCCESS;
}
