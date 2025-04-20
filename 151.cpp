//
// Created by 万里明 on 25-4-20.
//
#include <iostream>
#include <string>
using namespace std;

string reverseWords(string s);

int main()
{

}

string reverseWords(string s) {
    int left = 0;
    int right = s.length() - 1;
    int tmp;
    // 去除两端的空格
    while (s[left] == ' ' || s[right] == ' ') {
        if (s[left] == ' ') {
            left++;
        }
        if (s[right] == ' ') {
            right--;
        }
    }
    int tmp_left = left;
    // 去除字符中间重复的空格
    while (tmp_left < right) {
        if (s[tmp_left] == ' ' && s[tmp_left - 1] == ' ') {
            for (int i = tmp_left; i < right; i++) {
                s[i] = s[i + 1];
            }
            right--;
            continue;
        }
        tmp_left++;
    }

    tmp_left = left;
    int tmp_right = right;
    // 反转整个字符串
    while (tmp_left < tmp_right) {
        tmp = s[tmp_right];
        s[tmp_right] = s[tmp_left];
        s[tmp_left] = tmp;

        tmp_left++;
        tmp_right--;
    }
    tmp_left = left;
    // 反转字符串中的每个单词
    for (int i = left; i <= right; i++) {
        if (s[i] == ' ' || i == right) {
            if (i != right) {
                tmp_right = i - 1;
                while (tmp_left < tmp_right) {
                    tmp = s[tmp_right];
                    s[tmp_right] = s[tmp_left];
                    s[tmp_left] = tmp;

                    tmp_left++;
                    tmp_right--;
                }
                tmp_left = i + 1;
            } else {
                tmp_right = i;
                while (tmp_left < tmp_right) {
                    tmp = s[tmp_right];
                    s[tmp_right] = s[tmp_left];
                    s[tmp_left] = tmp;

                    tmp_left++;
                    tmp_right--;
                }
            }
        }
    }
    return s.substr(left, right - left + 1);
}

