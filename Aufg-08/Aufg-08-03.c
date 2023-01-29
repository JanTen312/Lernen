#include <stdio.h>
#include <string.h>
  int main () {
    int a;
    char* vorname[5];
    char* nachname[5];
    
    vorname[0] = "Alois";
    nachname[0]= "Müller";
    
    vorname[1] = "Max";
    nachname[1]= "Mustermensch";
    
    vorname[2] = "Kevin";
    nachname[2]= "Allein";
    
    vorname[3] = "Marie";
    nachname[3]= "Enkäfer";
    
    vorname[4] = "Michael";
    nachname[4]= "Sockenmacher";
    
    printf("Geben Sie die personen Nummer ein: \n");
    scanf("%d",&a);
    printf("Der Vorname ihrer Person ist: %s", vorname[a]);
    printf("Der Nachname ihrer Person ist:%s ", nachname[a]);
    
  return 0;
}
