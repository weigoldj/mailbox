
#include <iostream>  
#include "mailbox.h"

using namespace std;

int main(int argc, char *argv[]) {

  std::cout << "starting application. \n\n";

  Mailbox mb;
  mb.monitor_dir();
  return 0;
}


