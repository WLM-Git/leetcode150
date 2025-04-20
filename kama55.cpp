// //
// // Created by 万里明 on 25-4-20.
// //
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
//
// void rotateString(string &s, int num);
// void rotateStringPro(string &s, int num);
//
// int main()
// {
//     int k;
//     string s;
//     cin >> k;
//     cin >> s;
//     rotateStringPro(s,k);
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
//
// void rotateStringPro(string &s, int num)
// {
//     reverse(s.begin(), s.end());
//     reverse(s.begin(), s.begin() + num);
//     reverse(s.begin() + num, s.end());
//     cout << s;
// }
//
//
