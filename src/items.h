#include <stdio.h>
#include <fstream>
#include "LogError.h"
using namespace std;

class Items {
  private:
  const char * filename;
  public:
    Items() {
      filename = (const char *)"items.h";
    }
    void generateItemsList() {
      // fstream file;
      FILE *file = fopen("items.csv", "r");
      if (!file) {
        LogError logError;
        logError.setFileName(filename);
        logError.logNewError("warning", "FileNotOpeningError: The file is unable to open");
      } else {
        /// code to print all the items on the output screen
        char bufferText[1024];

        int row = 0, column = 0;

        while (fgets(bufferText, 1024, file)) {
          column = 0;
          row++;

          if (row == 1) {
            continue;
          }

          char * value = strtok(bufferText, ",");

          while (value) {
            if (column == 0) {
              printf("ITEMS");
            }
            if (column == 1) {
              printf("PRICE");
            }
            if (column == 2) {
              printf("QUANTITY");
            }

            printf("%s", value);
            value = strtok(NULL, ", ");
            column++;
          }
          printf("\n");
        }
        fclose(file);
      }
    }

    void insertNewProduct(const char * productName, const char * productPrice, 
                            const char * quantity) {
      /// opening file
      FILE *file = fopen("items.csv", "r");

      if (!file) {
        LogError logError;
        logError.setFileName(filename);
        logError.logNewError("warning", "FileNotOpeningError: The file is unable to open");
      } else {
        /// code to add new item details
        /// inserting data in the format
        /// ITEMS, PRICE, QUANTITY

        fprintf(file, "ITEMS", "PRICE", "QUANTITY");

        fprintf(file, "%s, %s, %s", (
          productName, productPrice, quantity
        ));
        fclose(file);
      }
    }
};
