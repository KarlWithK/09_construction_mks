#include "fighter.h"

int main() {
  char name[5] = "Goku";
  char karl[11] = "SeniorMars";
  struct fighter *goku;
  goku = create_fighter(name, 9001, 0);
  print_fighter(goku);
  change_street_name(goku, karl);
  increase_deaths(goku);
  print_fighter(goku);
  clear_fighter(goku);
  return 0;
}
