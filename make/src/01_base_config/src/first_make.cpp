#include <iostream>
#include <thread>
#include "xdata.h"
#include "test_gcc.h"

void ThreadMain()
{
  std::cout << "On Thread Main" << std::endl;
}


int main(int argc, char* argv[])
{
  std::thread th(ThreadMain);
  std::cout << "test make" << std::endl;
  XData data;
  th.join();

  PutsTestGcc();

  return 0;
}
