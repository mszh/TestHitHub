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
  std::cout << "Hello git";
  std::cout << "\n New code for git";
  std::cout << "Test remove commit";

  std::thread t(ThreadTest);
  t.join();

  // hotfix2
  int b = 5;

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

