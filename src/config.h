
#include <map>
#include <fstream>
#include <iostream>

using namespace std;

class Config {

  public:
    Config();
    ~Config();

    void read_config(void);
    void print(void);

  private:
  
    map <string, string> c_values;

};


