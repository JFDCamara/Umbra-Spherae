#include "stdio.h"
#include "windows.h"

int main() {
    FILE *ct, *cs;
    int j=0, k=0, l=0;
    char c;
    int empire=0;

    ct=fopen("dejure_list.txt","r");
    cs=fopen("dejure.txt","w");
    
    if (empire == 1) {
    while (( c = fgetc(ct) )!= EOF) {
          if (c!='\n') {
                if (j==0) {
                   switch (c) {
                       case 'b':
                            if (k==0) {
                               k=1;
                            }
                            if (l==0) {
                               l=1;
                            }
                            fprintf(cs,"\t\t\t\t%c", c);
                            j=1;
                            break;
                       case 'c':
                            if (k == 1) {
                               fprintf(cs,"\t\t\t}\n");
                            }
                            fprintf(cs,"\t\t\t%c", c);
                            j=2;
                            break;
                       case 'd':
                            if (k == 1 && l == 1) {
                               fprintf(cs,"\t\t\t}\n");
                               fprintf(cs,"\t\t}\n");
                            }
                            fprintf(cs,"\t\t%c", c);
                            j=3;
                            k=0;
                            break;
                       case 'k':
                            if (l == 1) {
                               fprintf(cs,"\t\t\t}\n");
                               fprintf(cs,"\t\t}\n");
                               fprintf(cs,"\t}\n");
                            }
                            fprintf(cs,"\t%c", c);
                            j=4;
                            l=0;
                            break;
                       case 'e':
                            fprintf(cs,"%c", c);
                            j=5;
                            break;
                   }
                }
                else {
                     fprintf(cs,"%c", c);
                }
          }
          else {
               if (j==0) {
               }
               else {
                    fprintf(cs," = {\n");
                    
                    if (j == 1) {
                       fprintf(cs,"\t\t\t\t}\n");
                    }
                    
                    j=0;
               }
          }
    }
    fprintf(cs,"\t\t\t}\n");
    fprintf(cs,"\t\t}\n");
    fprintf(cs,"\t}\n");
    fprintf(cs,"}\n");
    fclose(ct);
    fclose(cs);
    
    } else {
    
    while (( c = fgetc(ct) )!= EOF) {
          if (c!='\n') {
                if (j==0) {
                   switch (c) {
                       case 'b':
                            if (k==0) {
                               k=1;
                            }
                            if (l==0) {
                               l=1;
                            }
                            fprintf(cs,"\t\t\t%c", c);
                            j=1;
                            break;
                       case 'c':
                            if (k == 1) {
                               fprintf(cs,"\t\t}\n");
                            }
                            fprintf(cs,"\t\t%c", c);
                            j=2;
                            break;
                       case 'd':
                            if (k == 1 && l == 1) {
                               fprintf(cs,"\t\t}\n");
                               fprintf(cs,"\t\t}\n");
                            }
                            fprintf(cs,"\t%c", c);
                            j=3;
                            k=0;
                            break;
                       case 'k':
                            if (l == 1) {
                               fprintf(cs,"\t\t}\n");
                               fprintf(cs,"\t}\n");
                               fprintf(cs,"}\n");
                            }
                            fprintf(cs,"%c", c);
                            j=4;
                            l=0;
                            break;
                   }
                }
                else {
                     fprintf(cs,"%c", c);
                }
          }
          else {
               if (j==0) {
               }
               else {
                    fprintf(cs," = {\n");
                    
                    if (j == 1) {
                       fprintf(cs,"\t\t\t}\n");
                    }
                    
                    j=0;
               }
          }
    }
    fprintf(cs,"\t\t}\n");
    fprintf(cs,"\t}\n");
    fprintf(cs,"}\n");
    fclose(ct);
    fclose(cs);
    }

    
    system("PAUSE");
}
