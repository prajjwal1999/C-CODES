
#include<iostream>
#include <string.h>
using namespace std;
int main() {
   int n;
   cin >> n;
   char str[n][20];
   int i, j, k;
   for (i = 0; i < n; i++)
       cin >> str[i];

   for (i = 0; i < n; i++)
   {
       for (j = 0; j < n; j++)
       {
           if (str[i][0] < str[j][0])
           {
               char s[20];
               strcpy (s, str[i]);
               strcpy (str[i], str[j]);
               strcpy (str[j], s);
           }
       }
   }
   for (i = 1; i < n; i++)
   {
       if (str[i][0]==str[i+1][0])
       {
           int len1, len2;
           len1 = strlen(str[i]);
           len2 = strlen(str[i+1]);
           if (len1 < len2)
           {
               char s[20];
               strcpy (s, str[i]);
               strcpy (str[i], str[i+1]);
               strcpy (str[i+1], s);
           }
       }
   }

   for (i = 0; i < n; i++)
       cout << str[i] << endl;

    return 0;
}