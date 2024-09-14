#pragma once

#include <iostream>
#include <thread>

class XThread
{ 
  public:
    virtual void Main() {}
  public:
    void start();
    void wait();
  private:
    std::thread th_;
    int i = 25;
};
