#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
   cout << "Input text: " << endl;
   string input{};
   getline(cin, input);

   string output(2 * input.length() - 1, ' ');
   size_t middle = input.length() - 1;

   cout << "Output pyramid: " << endl;

   for (size_t i = 0; i < input.length(); i++)
   {
      string substr = input.substr(0, i);
      output[middle] = input[i];
      output.replace(middle - substr.length(), substr.length(), substr);
      reverse(substr.begin(), substr.end());
      output.replace(middle + 1, substr.length(), substr);
      cout << output << endl;
   }
}