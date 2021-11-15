/*
CPSC 330 Project 3
Made by: Dylan, TJ, Garrick

A program that prompts the user for a number of child processes to create, and then returns the child processes and their pid.
*/

#define _REENTRANT
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <pthread.h>
#include <bits/stdc++.h>

using namespace std;

main()
  {
  int n;
  
  cout << "Enter a number of child processes to create:";
  cin >> n;
  // Gets the number of child processes from the user.

  for (int i=1; i <= n; i++)
    {
    int pid = fork();
    
    if (pid == 0)
      {
      break;
      }
    char a = (char)('A'+ i - 1 );
    cout << "This is child process " << a <<", pid=" << pid << endl;
    // Outputs the child processes and their pid.
    }
  int whatever;
  cin >> whatever ;
  // User must enter something to finish the program.
  return 0;
  
  }