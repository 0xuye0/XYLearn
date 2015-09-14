#include <iostream>
using namespace std;
enum state {k_init = 0, k_up, k_left, k_upleft};
void LCS_print (int** b, char* s, char* t, int row, int col) {
    if (s == NULL || t == NULL || row < 0 || col < 0) {
        return;
    }
    int i = row;
    int j = col;
    if (b[i][j] == k_upleft) {
        LCS_print(b, s, t, i - 1, j - 1);
        cout << s[i] << " ";
    } else if (b[i][j] == k_up) {
        LCS_print(b, s, t, i, j - 1);
    } else if (b[i][j] == k_left) {
        LCS_print(b, s, t, i - 1, j);
    }
    return;
}
int LCS(char* s, char* t) {
    if (s == NULL || t == NULL) {
        return 0;
    }
    int lens = strlen(s);
    int lent = strlen(t);

    int** c = new int*[lens];
    int** b = new int*[lens];

    for (int i = 0; i < lens; ++i) {
        c[i] = new int[lent];
        b[i] = new int[lent];
    }
    for (int i = 0; i < lens; ++i) {
        for (int j = 0; j < lent; ++j) {
            c[i][j] = 0;
            b[i][j] = k_init;
        }
    }

    for (int i = 0; i < lens; ++i) {
        for (int j = 0; j < lent; ++j) {
            if ( i == 0 || j == 0) {
                if (s[i] == t[j]) {
                    c[i][j] = 1;
                    b[i][j] = k_upleft;
                } else if (i > 0) {
                    c[i][j] = c[i - 1][j];
                    b[i][j] = k_left;
                } else {
                    c[i][j] = c[i][j - 1];
                    b[i][j] = k_up;
                }
            } else if (s[i] == t[j]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = k_upleft;
            } else if (c[i][j - 1] > c[i - 1][j]) {
                c[i][j] = c[i][j - 1];
                b[i][j] = k_up;
            } else {
                c[i][j] = c[i - 1][j];
                b[i][j] = k_left;
            }
        }
    }

    LCS_print(b, s, t, lens - 1, lent - 1);
    return c[lens - 1][lent - 1];
}
int main() {
   char* pStr1="abcde";
   char* pStr2="aced";
   cout << "pStr1:" << pStr1 << endl;
   cout << "pStr2:" << pStr2 << endl;
   LCS(pStr1,pStr2);
   printf("\n");
   return 0;  
}
