//
//  Processes.cpp
//  ITSC 3146
//
//  Created by Bahamon, Julio on 1/12/17.
//


/*
 @file Processes.cpp
 @Anh Truong, atruong7@uncc.edu
 @description: <ADD DESCRIPTION>
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */


#ifndef Processes_cpp
#define Processes_cpp

#include "Processes.h"


using namespace std;


// Part 1: Working With Process IDs
pid_t getProcessID(void)
{
   // TODO: Add your code here
   // Returns the process ID
   return getpid();
}


// Part 2: Working With Multiple Processes
string createNewProcess(void)
{
   pid_t id = fork();
   
   // DO NOT CHANGE THIS LINE OF CODE
   process_id = id;
   
   
   if(id == -1)
   {
      return "Error creating process";
   }
   else if (id == 0)
   {
      // TODO: Add your code here
      // Announces being a child process but returns bored of parent
      cout << "I am a child process." << endl;
      return "I am bored of my parent, switching programs now.";
   }
   else
   {
      // TODO: Add your code here
      // Announces being a parent then wait for the child process to terminate and return
      cout << "I just became a parent!" << endl;
      wait(NULL);
      return "My child process just terminated!";
   }
}


// Part 3: Working With External Commands"
void replaceProcess(char * args[])
{
   // Spawn a process to execute the user's command.
   pid_t id = fork();
   
   
   // TODO: Add your code here
   // If the child has failed
   if (id == -1) {
      return;
   }
   // If the child is successfully changing memory
   if (id == 0) {
      // Parameter args array
      execvp (args[0], args);
      return;
   } 
   // Parent waiting for child process to terminate then exit
   else {
      wait(NULL);
      return;
   }
   
   
}

#endif /* TestProg_cpp */
