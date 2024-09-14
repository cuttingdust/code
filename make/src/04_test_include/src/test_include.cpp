#include <iostream>
#include <thread>
#include "xdata.h"
#include "test_gcc.h"

void ThreadMain()
{
  std::cout << "On Thread Main" << std::endl;
}

extern void TestCpp();
extern "C" void TestC();


int main(int argc, char* argv[])
{
  TestCpp();
  TestC(); 

  std::thread th(ThreadMain);
  std::cout << "test make" << std::endl;
  XData data;
  th.join();

  PutsTestGcc();

  return 0;
}
