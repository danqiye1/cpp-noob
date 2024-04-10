#include <iostream>
#include <string>

using namespace std;

int main()
{
   string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
   string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
   string msg{};
   cout << "Enter your secret message: " << endl;
   getline(cin, msg);

   for (size_t i = 0; i < msg.length(); i++)
   {
      msg[i] = key[alphabet.find(msg[i])];
   }

   cout << "Your encrypted message is: " << endl;
   cout << msg << endl;

   for (size_t i = 0; i < msg.length(); i++)
   {
      msg[i] = alphabet[key.find(msg[i])];
   }

   cout << "Your decrypted message is: " << endl;
   cout << msg << endl;
   return 0;
}
