#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class LogError {
  private:
    const char * filename;
  public:
    void setFileName(const char * _filename) {
      filename = (const char *)_filename;
    }
    void logNewError(const char * errorTypeTag = "error", 
                      const char * errorDescription = "Something went wrong...") {
      printf("\n[%s]: %s", errorTypeTag, errorDescription);
      printf("\nError coming from file [%s]", filename);
    }
  ~LogError();
};