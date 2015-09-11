// GitTestSolution.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
  std::cout << "Hello git";
  std::cout << "\n New code for git";
  std::cout << "Test remove commit";

  // only for iss53
  for (int i = 0; i < 10; i++)
  {
    std::cout << "Iss53 i = " << i;
    std::cout << std::endl;
  }
  return 0;
}

