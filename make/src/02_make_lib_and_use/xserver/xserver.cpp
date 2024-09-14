#include <iostream>
#include "xthread.h"
#include "xcom.h"

class XTask: public XThread
{
  public:
    void Main() override
    {
      std::cout << "XTask Running" << std::endl;
    }

};

int main(int argc, char* argv[])
{
  XCom com;

  XTask task;
  task.start();
  task.wait();

  return 0;
}
