#ifndef MAILBOX_H
#define MAILBOX_H

#include <iostream>

using namespace std;

class Mailbox {
  
  public:
  
    Mailbox(); 
    ~Mailbox();

    void monitor_dir(void);
};
#endif
