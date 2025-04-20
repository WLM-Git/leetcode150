// //
// // Created by 万里明 on 25-4-20.
// //
// #include <iostream>
// #include <string>
// using namespace std;
//
// void rotateString(string &s, int num);
//
// int main()
// {
//     int k;
//     string s;
//     cin >> k;
//     cin >> s;
//     rotateString(s,k);
// }
//
// void rotateString(string &s, int num)
// {
//     string tmp = s;
//     for (int i = 0;i < s.length();i++)
//     {
//         tmp[(i+num)%s.length()] = s[i];
//     }
//     for (int i = 0;i < s.length();i++)
//     {
//         s[i] = tmp[i];
//     }
//     cout << s;
// }
