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
  int z = 90;

  std::thread t(ThreadTest);
  t.join();

  int k = 10;
  
  int b = 0;

  return 0;
}

