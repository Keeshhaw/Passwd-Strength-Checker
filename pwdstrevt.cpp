#include <iostream>
#include <vector>
using namespace std;


vector<string> specialchar = {
"!", "\"", "#", "$", "%", "&", "'", "(", ")", "*", "+", ",","-", ".", "/", ":", ";", "<", "=", ">", "?", "@", "[", "\\",
"]", "^", "_", "`", "{", "|", "}", "~"
};

vector<string> numbers = {
"0","1","2","3","4","5","6","7","8","9"
};

vector<string> ucase = {
"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"
};

vector<string> lcase = {
"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"
};

int exists(const string& s, const vector<string>& arr) {
int count = 0;
for (const string& x : arr) {
      if (x == s) count++;
}
return count;
}

int number1(const string& pw) {
for (char c : pw) {
      string s(1, c);
      if (exists(s, numbers)) return 1;
}
return 0;
}

int uppercase1(const string& pw) {
for (char c : pw) {
      string s(1, c);
      if (exists(s, ucase)) return 1;
}
return 0;
}

int lowercase1(const string& pw) {
for (char c : pw) {
      string s(1, c);
      if (exists(s, lcase)) return 1;
}
return 0;
}

int specialchar1(const string& pw) {
for (char c : pw) {
      string s(1, c);
      if (exists(s, specialchar)) return 1;
}
return 0;
}




int main() {
      string password;
      int score = 0;
      cout<<"Enter the password: ";
      cin >> password;

      if (number1(password) >= 1) {
            score += 10;
      }
      if (uppercase1(password) >= 1) {
            score += 5;
      }
      if (lowercase1(password) >= 1) {
            score += 5;
      } 
      if (specialchar1(password) >= 1) {
            score += 10;
      }


      if (score <= 10) {
            cout << "Your password is weak.";
      } else if (score > 10 && score < 25) {
            cout << "Your password is moderate.";
      } else if (score > 25) {
            cout << "Your password is strong.";
      }



}
