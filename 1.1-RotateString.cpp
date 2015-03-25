/*
 * =====================================================================================
 *
 *       Filename:  1.1-RotateString.cpp
 *
 *    Description:  旋转字符串
 *
 *        Version:  1.0
 *        Created:  2015年03月25日 20时56分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

using namespace std;

void LeftShiftOne(string& s)
{
    char t = s[0];
    for (int i = 1; i < s.size(); ++i) {
        s[i-1] = s[i];
    }

    s[s.size()-1] = t;
}

void LeftRotateString(string& s, int m)
{
    while(m--)
        LeftShiftOne(s);
}

void ReverseString(string& s, int from , int to)
{
    while (from < to) {
        char t = s[from];
        s[from++] = s[to];
        s[to--] = t;
    }
}
void LeftRotateString1(string &s, int m)
{
    m %= s.size();
    ReverseString(s, 0, m-1);
    ReverseString(s, m, s.size()-1);
    ReverseString(s, 0, s.size()-1);
}

int main()
{
    string s = "abcdefg";
    cout << s << endl;
    LeftRotateString(s,3);
    cout << s << endl;
    LeftRotateString1(s,3);
    cout << s << endl;

    return 0;
}
