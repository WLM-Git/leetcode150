// //
// // Created by 万里明 on 25-4-19.
// //
// #include <iostream>
// #include <string>
// using namespace std;
//
// void replaceNum(string s);
//
// int main()
// {
//   string s;
//   cin >> s;
//   replaceNum(s);
// }
//
// void replaceNum(string s)
// {
//     int len = s.length();
//     for (int i = 0; i<s.length(); i++)
//     {
//         if (s[i]>='0' && s[i]<='9')
//         {
//           len += 5;
//         }
//     }
//     string tmp(len,' ');
//     len = 0;
//     for (int i = 0; i<s.length(); i++)
//     {
//         if (s[i]>='0' && s[i]<='9')
//         {
//           tmp[len + i] = 'n';
//           tmp[len + i + 1] = 'u';
//           tmp[len + i + 2] = 'm';
//           tmp[len + i + 3] = 'b';
//           tmp[len + i + 4] = 'e';
//           tmp[len + i + 5] = 'r';
//
//           len += 5;
//         }
//         else
//         {
//           tmp[len + i] = s[i];
//         }
//     }
//     cout << tmp << endl;
// }