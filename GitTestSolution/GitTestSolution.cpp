// GitTestSolution.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <thread>


void ThreadTest()
{
  std::cout << "Do nothing";
}

int main()
{
  static int i = 0;
  i++;
  std::cout << "Start main"<< std::endl;
  std::cout << "i= " << i << std::endl;

  std::thread t(ThreadTest);
  t.join();

  std::thread t2(main);
  t2.join();

  int a = 20;
  // rebasing test
  float c = 5.1 * 3;

  // only for iss53
  for (int i = 0; i < 10; i++)
  {
    std::cout << "Iss53 i = " << i;
    std::cout << std::endl;
  }

  return 0;
}

