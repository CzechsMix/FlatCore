#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

namespace flatcore
{
  //property utils
  int parseInt(string s)
  {
    int i;
    stringstream ss;
    ss << s;
    ss >> i;
    return i;
  }


  //property definition
  map<string, string> PROPERTIES;

  void split_property(string line, string &key, string &value)
  {
    key = "";
    value = "";
    bool equal = false;
    for(int i = 0; i < line.length(); i++)
    {
      if(line[i] == '=')
      {
        equal = true;
        continue;
      }
      if(!equal)
      {
        key += line[i];
      }
      else
      {
        value += line[i];
      }
    }
  }

  bool init_properties()
  {
    ifstream prop_file;
    prop_file.open("conf/flatcore.properties");
    string line, key, value;
    while(!prop_file.eof())
    {
      getline(prop_file, line);
      if(line.length() == 0 || line[0] == '#')
      {
        continue;
      }

      split_property(line, key, value);
      PROPERTIES[key] = value;
    }
    prop_file.close();
    return true;
  }
}

#endif
