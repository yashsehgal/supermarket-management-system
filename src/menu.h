#include <stdlib.h>
#include <conio.h>

class MenuOptions {
  public:
    void getMainMenu() {
      printf("\nMAIN MENU");
      printf("\n1. Add a new record");
      printf("\n2. See Old Record");
      printf("\n3. Watch Items in your stores");
    }
    void getNewRecordMenu() {
      printf("\nADD NEW RECORD");
      printf("\n1. Add new Sale Record");
      printf("\n2. Add new Product");
      printf("\n3. Add new Employee");
    }
    void getOldRecordMenu() {
      printf("\nOLD RECORDS");
      printf("\n1. See previous sales");
      printf("\n2. See employee status");
      printf("\n3. See Product Entries");
    }
    void getProductItemsList() {
      clrscr();
    }
};