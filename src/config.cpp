#include "config.h"

Config::Config(void) { 
  read_config();
}

Config::~Config(void) { }

void Config::read_config(void) {
  cout << " reading config values " << endl; 
  c_values["one"] = "1";
}

void Config::print(void) {
  string tmp; 
  tmp += "config values \n";
  for(auto i : c_values) {
    tmp += "\t" + i.first + " => " + i.second + "\n";
  }
  
  cout << tmp;
}

