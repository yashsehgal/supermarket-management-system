#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/// This class contains methods and features for our program
class Application {
  public:

  /// method to start application module - main module
  void startApp() {
    lineToDecorate(30, "=");
  }
  
  /// method to print decorative lines
  void lineToDecorate(int length=45, char * symbol="=") {
    for (int count = 1; count <= length; count++) {
      printf("%s", symbol);
    }
  }
};