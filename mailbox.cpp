#include "mailbox.h"


Mailbox::Mailbox(void) {
  cout << "Mailbox constructor" << endl;
}

Mailbox::~Mailbox() {
  cout << "Mailbox destructor" << endl;
}

void Mailbox::monitor_dir(void) {
  cout << "starting monitor" << endl;
}
