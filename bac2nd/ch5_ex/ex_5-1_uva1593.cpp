#include<cstdio>
#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> width;
vector< vector<string> > code;

void printWord(string& word, int idx) {
  cout << word;
  int x = width[idx] + 1 - word.length();
  for (int i = 0; i < x; i++) cout << ' ';
}

void printLine(vector<string>& words) {
  int size = words.size();
  for (int i = 0; i < size - 1; ++i) {
    printWord(words[i], i);
  }
  cout << words[size-1] << '\n';
}

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva1593.in", "r", stdin);
  #endif
  string line, word;
  while (getline(cin, line)) {
    stringstream ss(line);
    vector<string> words;
    while (ss >> word) {
      int idx = words.size(), len = word.length();
      if (width.size() <= idx) width.push_back(len);
      else width[idx] = max(width[idx], len);
      words.push_back(word);
    }
    code.push_back(words);
  }
  for (int i = 0; i < code.size(); ++i)
    printLine(code[i]);
  return 0;
}
