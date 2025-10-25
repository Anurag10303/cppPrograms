#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool isAnagram(char str1[], char str2[])
{
    int f1[26] = {0};
    for (int i = 0; str1[i] != '\0'; i++)
    {
        char ch = str1[i];
        int idx = ch - 'a';
        f1[idx]++;
    }
    int f2[26] = {0};
    for (int i = 0; str1[i] != '\0'; i++)
    {
        f2[str2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (f1[i] != f2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char str1[] = "aaabbcc";
    char str2[] = "aabbbcc";
    isAnagram(str1, str2) ? cout << "Anagram" : cout << "Not Anagram";
    return 0;
}