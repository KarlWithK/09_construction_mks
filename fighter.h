#ifndef FIGHTER
#define FIGHTER
struct fighter {
  char *street_name;
  int powerlevel;
  int times_revieved;
};

struct fighter *create_fighter(char *street_name, int level, int deaths);
void print_fighter(struct fighter *street_name);
void change_street_name(struct fighter *street_name, char *new_steet_name);
void increase_deaths(struct fighter *street_name);
struct fighter * clear_fighter(struct fighter *fighter_name);

#endif /* ifndef FIGHTER */
