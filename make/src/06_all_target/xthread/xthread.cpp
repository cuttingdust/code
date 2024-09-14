#include "xthread.h"

void XThread::start()
{
  std::cout << "Start Xthread" << std::endl;
  th_ = std::thread(&XThread::Main, this); 
}


void XThread::wait()
{
  if(th_.joinable())
  {
    std::cout << "Wait Xthread" << std::endl;
    th_.join();
  }
}
