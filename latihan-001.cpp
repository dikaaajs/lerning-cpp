#include <cstdio>
#include <cmath> //untuk fungsi matematika

int main() {
  int jantan, betina, hasil;
  
  
  printf("masukan jumlah bebek jantan : ");
  scanf("%d", &jantan);
  
  printf("masukan jumlah bebek betina : ");
  scanf("%d", &betina);

  hasil = jantan + betina;
  printf("jumlah bebek yang anda miliki adalah : %d", hasil);
}
