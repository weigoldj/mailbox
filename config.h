// #ifndef CONFIG_H
// #define CONFIG_H

#include <map>
#include <fstream>
#include <iostream>

using namespace std;

class Config {

  public:
    Config();
    ~Config();

    void read_config(void);

  private:
  
    map <string, string> val;

};


//Config::Config(void) { 
//  val["one"] = "1";
//}
//
//Config::~Config(void) { }
//
//Config::read_config {
//  cout << " TO STRING() " << endl; 
//}
//
//#endif
