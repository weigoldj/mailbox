
#include <iostream>
#include <dirent.h>

#include "mailbox.h"

Mailbox::Mailbox(void) {
  cout << "Mailbox constructor" << endl;
}

Mailbox::~Mailbox() {
  cout << "Mailbox destructor" << endl;
}

void Mailbox::monitor_dir(void) {
  cout << "starting monitor" << endl;
  string dir_name = "./tmp";
 
  DIR *dir;  
  struct dirent *s_dir;
  dir = opendir(dir_name.c_str());
  //  # TODO check that dir is not null
  
  while((s_dir = readdir(dir))) { 
    cout << s_dir->d_name << endl; 
  };
}
