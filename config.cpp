#include "config.h"
#include "split.h"

using namespace std;

void LoadConfig() {
    //Why the fuck are libconfig's docs so shit that doing it this way seems easier
    //If you see this, try and implement it, I'm not wasting my time: http://hyperrealm.com/libconfig/libconfig_manual.html

    fstream config;

    config.open("priget.cfg",ios::in);
    if (config.is_open()){
        string foo;
        while(getline(config, foo)){
            if(foo.rfind('#',0) != 0) {
                vector<string> x = split(foo,'=');
                //TODO write a switch on string function here
                if (x[0] == "token" && x.size() == 2 && !x[1].empty()){
                    token = x[1];
                } else {
                    cout << "Config file formatting error" << endl;
                }
            }
        }
    }
}