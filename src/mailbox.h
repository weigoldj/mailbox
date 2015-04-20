#ifndef MAILBOX_H
#define MAILBOX_H

using namespace std;

class Mailbox {
  
  public:
  
    Mailbox(); 
    ~Mailbox();

    void monitor_dir(void);
  
  private:
    void wait(int);
};
#endif
