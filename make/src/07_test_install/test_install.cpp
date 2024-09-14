#include <iostream>
#include <thread>

int main(int argc, char* argv[])
{
  int sec = 1;
  if(argc > 1)
    sec = atoi(argv[1]);

  for(int i = 0;;i++)
  {
    std::cout << "test instll " << i << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(sec));
  }

  std::cout << "test install" << std::endl;

  return 0;
}
