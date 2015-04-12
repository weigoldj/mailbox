
#include <iostream>  
#include "config.h"
#include "mailbox.h"

using namespace std;

int main(int argc, char *argv[]) {

  std::cout << "starting application. \n\n";

  // readin configuration settings
  Config config;
  config.print();
  // init the mailbox.
  Mailbox mb;
  
  // start the monitoring
  mb.monitor_dir();

  return 0;
}


