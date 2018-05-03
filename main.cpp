#include <iostream>
#include <fstream>
#include <string>

#include <omp.h>

int main(int argc, char ** argv)
{
  using namespace std;

  std::cout << "Testing standart input" << std::endl;
  cout << "Number of threads: " << omp_get_num_procs() << endl;

  uint p = stoi(argv[1]); 
  uint bs = stoi(argv[2]); 

  cout << "p = " << p << endl;
  cout << "bs = " << bs << endl;

  return 0;
}
