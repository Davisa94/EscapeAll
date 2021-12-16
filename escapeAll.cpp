#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

using namespace std;

string get_string()
{
   string input_string = "";
   cout << "Please enter the input string to escape:";
   cin >> input_string;
   return input_string;
}

string escape_chars_std(string input, string escape_me, char escape_char)
{
   for (int i = 0; i < escape_me.length(); i++)
   {
      string curr_char{escape_me[i]};
      string replace_str = escape_char + curr_char;
      if (curr_char == R"(\)")
      {
         curr_char = R"(\\)";
      }

      input = regex_replace(input, regex(curr_char), replace_str);
   }
   return input;
   
}

int main(int argc, char const *argv[])
{
   // if the chars to be escaped include the escape char then it must be placed first
   string escape_me = R"(\<>)";
   char escape_sequence = '\\';
   string input_string = R"(<\Hello> world\)";
   // cout << escape_chars(input_string, escape_me, escape_char);
   string output = escape_chars_std(input_string, escape_me, escape_sequence);
   cout << output;

   return 0;
}
