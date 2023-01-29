#include <stdio.h>
#include <string.h>
  int main() {
    char string[] = "C:\\Eigene Dateien\\FOM\\C-Code\\main.c";
    char* Extension = strrchr(string, '.');
    printf("\n\n\nExtension:  %s \n",Extension +1);
    char* Dateiname = strrchr(string, '\\');
    printf("Dateiname:  %s \n",Dateiname +1);
    *Dateiname = '\0';
    printf("Verzeichniss: %s \n \n \n",string);
  return 0;
  }  
