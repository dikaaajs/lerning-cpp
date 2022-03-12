#include <cstdio>
#include <string> //untuk fungsi string

using namespace std;

char x [1];

int main() {
  printf("burung beo mengatakan ...");
  scanf("%[^\n]", x); 
  // %[^\n] adalah untuk membaca spasi
  string s = x;
  printf("ucapan yang burung beo katakan adalah : %s\n",  s.c_str());
  // .c_str() untuk melakukan print untuk string
}
