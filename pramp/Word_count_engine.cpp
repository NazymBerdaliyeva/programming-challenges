#include <iostream>
#include <string>
#include <vector>
#include<map>
#include<unordered_map>

using namespace std;

vector<vector<string>> wordCountEngine( const string& document ) 
{
  vector<vector<string>> result;
  map<string, int> mp;
  string word = "";
  int count = 0;
  for(int i = 0; i < document.length(); i++)
  {
    char c = document[i];
    if(c == ' ' || ispunct(c))
    {
      if(c == '\'')
          continue;
      if(word != "")
      {
        if(mp.find(word) != mp.end())
        {
          int tempCount = stoi(result[mp[word]][1]);
          tempCount++;
          result[mp[word]][1] = to_string(tempCount);
        }
        else{
          result.push_back({word, to_string(1)});
          mp[word] = count++;
        }
        word = "";
      }
      continue;
    }
    
    word += tolower(c);
  }
  
  if(word != "")
  {
    if(mp.find(word) != mp.end())
        {
          int tempCount = stoi(result[mp[word]][1]);
          tempCount++;
          result[mp[word]][1] = to_string(tempCount);
        }
        else {
          result.push_back({word, to_string(1)});
          mp[word] = count++;
        }
  }
     for(int i = 0; i < result.size();i++)
     {
       for(int j = 0; j < result.size()-1; j++)
       {
          int count1 = stoi(result[j][1]);
          int count2 = stoi(result[j+1][1]);
       
          if(count1<count2)
            swap(result[j], result[j+1]);
       }
      
     }

  
  return result;
}

int main() {
  return 0;
}