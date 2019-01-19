#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {

  struct person {
    string name;
    string vorname;
    int alter;
  };

  int x=-5;
  cout << x;
  double pi=3.14;
  cout << pi;
  bool logical_value=true;
  cout << logical_value;
  char symbol='Z';
  cout << symbol;
  int nums[] = {1, 4, 2, 3, 5, 7};
  cout << nums[0];
  cout << nums[1];
  cout << nums[2];
  cout << nums[3];
  cout << nums[4];
  //char symb[] ={'1','4','204','3','5','7'}; KLAPPT NICHT>>TO RECHCHE
  //cout << symb[2];
  //vector<string> woerter={"Hallo","World"};
  //cout << woerter[1];
  // cout << nums.size();
  //cout << woerter.size();
  //string hw="Hello World";
  //cout << hw;
  map<string, int> name_zu_wert;
  name_zu_wert["one"]=1;
  name_zu_wert["two"]=2;
  cout << "two is" << name_zu_wert["two"];

  vector<person> team;
  team.push_back({"Schmidt","Kathrin",19});
  team.push_back({"Dmitrij","Moreinis",35});
  cout << team[0];


  return 0;
}