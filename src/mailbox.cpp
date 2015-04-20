
#include <iostream>
#include <dirent.h>
#include <unistd.h>
#include "mailbox.h"

Mailbox::Mailbox(void) {
  cout << "Mailbox constructor" << endl;

  cout << "starting monitor" << endl;
  while(true) {
    monitor_dir();
    sleep(2);
  }
}

Mailbox::~Mailbox() {
  cout << "Mailbox destructor" << endl;
}

void Mailbox::monitor_dir(void) {
  string dir_name = "./tmp";
 
  DIR *dir;  
  struct dirent *s_dir;
  dir = opendir(dir_name.c_str());
  //  # TODO check that dir is not null
  
  while(s_dir = readdir(dir)) { 
    cout << s_dir->d_name << endl; 
  };
}


