#import <iostream>
#import <string>
#import <vector>

using namespace std;

bool checkNumber(const string& str){
   return !str.empty() &&
   (str.find_first_not_of("[0123456789]") == string::npos);
}

vector<string> split(const string& str, char delim){
   auto i = 0;
   vector<string> list;
   auto pos = str.find(delim);
   cout<<"pos = "<<pos<<endl;
   while (pos != string::npos){
      list.push_back(str.substr(i, pos - i));
      i = ++pos;
      pos = str.find(delim, pos);
   }
   list.push_back(str.substr(i, str.length()));
   return list;
}

bool validateIP(const string& ip)
{
  vector<string> chunks = split(ip, '.');
  
  if(chunks.size() != 4)
    return false;
	for (string str : chunks){
      if (!checkNumber(str) || stoi(str) < 0 || stoi(str) > 255)
         return false;
   }
  return true;
}

int main() 
{
  if(validateIP("192.168.123.456"))
    cout<<"It is a Valid IP Address\n";
  else
    cout<<"Invalid IP Address\n";
    
	return 0;
}

