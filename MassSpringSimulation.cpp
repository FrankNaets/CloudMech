#include <iostream>
#include <time.h>
#include <stdlib.h>
// include armadillo

// Shitty function to pause program
void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

// function for loading and parsing input file


// function for assembling mass and stiffness


// function for evaluating balance (static or dynamic)


// function for time integration


// function for output to php


/* main function:
int main(int argc, char* argv[])
{
  
  // Parse inputs
  str* inputFile = argv[1];
  //std::cout << "Number of masses: "<< numberOfMasses << std::endl;
  
  // Get mass and stiffness:
  
  // Perform simulation
  
  // Output results
  
  return 0;
  
}*/



// main function:
int main(int argc, char* argv[])
{
  
  // Parse inputs
  int numberOfMasses = atoi(argv[1]);
  std::cout << "Number of masses: "<< numberOfMasses << std::endl;
  
  // Output time-vector:
  std::cout << "Time: 1.0 2.0 3.0 4.0"<< std::endl; //<< std::endl;
  
  // pause the program to check what the php does...
  std::cout << "Begin timer..."<< std::endl;
  sleep(10000000);
  std::cout << "... stop timer. "<< std::endl;
  
  // Output resopnse of masses:
  for(int i=1; i<=numberOfMasses; i++){
    std::cout << "Mass " << i << ": 0.2 0.04 0.008 0.0016"<< std::endl;
  }
  return 0;
  
}
