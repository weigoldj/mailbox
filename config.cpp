#include "config.h"

Config::Config(void) { 
  val["one"] = "1";
}

Config::~Config(void) { }

void Config::read_config(void) {
  cout << " TO STRING() " << endl; 
}

//#endif
//#include "config.h"
//
//class Config {
//
//  public:
//    Config();
//    ~Config();
//
//    void read_config();
//
//  private:
//  
//    map <string, string> val;
//
//}
