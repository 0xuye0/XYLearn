#include <iostream>
#include <string.h>
using namespace std;
void reverse(char* source, int start, int end) {
    if (source == NULL) {
        return;
    }
    int i = start;
    int j = end;
    char temp;
    while (i < j) {
        temp = source[i];
        source[i] = source[j];
        source[j] = temp;
        i++;
        j--;
    }
}

char* multi_large(char* s, char* t) {
    if (s == NULL || t == NULL) {
        return NULL;
    }
    int m = strlen(s);
    int n = strlen(t);
    char* result = new char[m + n];
    for (int i = 0; i < m + n; ++i) {
        result[i] = '0';
    }
    result[m + n] = '\0';
    reverse(s, 0, m - 1);
    reverse(t, 0, n - 1);
    for (int i = 0; i < m; ++i) {
        int mul_flag = 0;
        int add_flag = 0;
        for (int j = 0; j < n; ++j) {
            int temp = (s[i] - '0') * (t[j] - '0') + mul_flag;
            mul_flag = temp / 10;
            temp = temp % 10;
            int temp2 = temp + (result[i + j] - '0') + add_flag;
            add_flag = temp2 / 10;
            temp2 = temp2 % 10;
            result[i + j] = temp2 + '0';
        }
        result[i + n] += mul_flag + add_flag;
    }
    reverse(result, 0, m + n - 1);
    return result;
}

int main() {
    char s[] = "123438383727209398387292987377329383873873948749309498498798";
    char t[] = "1234";
    cout << s << endl << t << endl;
    cout << "result:" << endl;
    char* result = multi_large(s, t);
    cout << ++result << endl;
    return 0;
}
