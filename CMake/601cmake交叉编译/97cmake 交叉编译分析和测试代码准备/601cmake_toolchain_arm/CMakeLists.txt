## 601cmake_toolchain_arm/CMakeLists.txt
cmake_minimum_required(VERSION 3.22)
project(test_arm)

# 1 准备arm的测试程序，用到线程库和系统库
file(WRITE test_arm.cpp [=[
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <thread>
using namespace std;
int main()
{
    cout<<"test for arm linux"<<endl;
    auto pid = fork();
    cout<<"pid = "<<pid<<endl;
    thread th([]{cout<<"in thread!\n";});
    th.join();
    return 0;
}
]=])
add_executable(test_arm test_arm.cpp)

target_link_libraries(test_arm pthread)
