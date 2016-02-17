#include "stdio.h"
#include "windows.h"

int main() {
    FILE *ct, *cs, *cr, *cq;
    int i=0, j=0, k=0, l=0, adj=0;
    char c, d, e;

    ct=fopen("titles.txt","r");
    cs=fopen("US_titles.csv","w");
    cr=fopen("trash.txt", "w");
    cq=fopen("trash2.txt", "w");
    
    while (( c = fgetc(ct) )!= EOF) {
          if (c!='\n') {
             if (i==1) {
                fprintf(cq,"%c",c);
                if (j==0) {
                   switch (c) {
                       case 'a':
                            fprintf(cr,"A");
                            j=1;
                            k=1;
                            break;
                       case 'b':
                            fprintf(cr,"B");
                            j=1;
                            k=1;
                            break;
                       case 'c':
                            fprintf(cr,"C");
                            j=1;
                            k=1;
                            break;
                       case 'd':
                            fprintf(cr,"D");
                            j=1;
                            k=1;
                            break;
                       case 'e':
                            fprintf(cr,"E");
                            j=1;
                            k=1;
                            break;
                       case 'f':
                            fprintf(cr,"F");
                            j=1;
                            k=1;
                            break;
                       case 'g':
                            fprintf(cr,"G");
                            j=1;
                            k=1;
                            break;
                       case 'h':
                            fprintf(cr,"H");
                            j=1;
                            k=1;
                            break;
                       case 'i':
                            fprintf(cr,"I");
                            j=1;
                            k=1;
                            break;
                       case 'j':
                            fprintf(cr,"J");
                            j=1;
                            k=1;
                            break;
                       case 'k':
                            fprintf(cr,"K");
                            j=1;
                            k=1;
                            break;
                       case 'l':
                            fprintf(cr,"L");
                            j=1;
                            k=1;
                            break;
                       case 'm':
                            fprintf(cr,"M");
                            j=1;
                            k=1;
                            break;
                       case 'n':
                            fprintf(cr,"N");
                            j=1;
                            k=1;
                            break;
                       case 'o':
                            fprintf(cr,"O");
                            j=1;
                            k=1;
                            break;
                       case 'p':
                            fprintf(cr,"P");
                            j=1;
                            k=1;
                            break;
                       case 'q':
                            fprintf(cr,"Q");
                            j=1;
                            k=1;
                            break;
                       case 'r':
                            fprintf(cr,"R");
                            j=1;
                            k=1;
                            break;
                       case 's':
                            fprintf(cr,"S");
                            j=1;
                            k=1;
                            break;
                       case 't':
                            fprintf(cr,"T");
                            j=1;
                            k=1;
                            break;
                       case 'u':
                            fprintf(cr,"U");
                            j=1;
                            k=1;
                            break;
                       case 'v':
                            fprintf(cr,"V");
                            j=1;
                            k=1;
                            break;
                       case 'w':
                            fprintf(cr,"W");
                            j=1;
                            k=1;
                            break;
                       case 'x':
                            fprintf(cr,"X");
                            j=1;
                            k=1;
                            break;
                       case 'y':
                            fprintf(cr,"Y");
                            j=1;
                            k=1;
                            break;
                       case 'z':
                            fprintf(cr,"Z");
                            j=1;
                            k=1;
                            break;
                   }
                }
                else {
                     if (c=='_') {
                        fprintf(cr," ");
                        j=0;
                     }
                     else {
                          fprintf(cr,"%c", c);
                     }
                }
             }
             else {
                  if (c=='\n') {
                     j=0;
                  }
                  if (c=='e' || c=='k' || c=='d' || c=='c') {
                     fprintf(cq,"%c",c);
                     adj=1;
                  }
                  if (c=='b') {
                     fprintf(cq,"%c",c);
                  }
                  if (c=='_') {
                     fprintf(cq,"%c",c);
                     i=1;
                  }
             }
          }
          else {
               if (j==0) {
               }
               else {
                    fclose(cr);
                    cr = fopen("trash.txt", "r");
                    fclose(cq);
                    cq = fopen("trash2.txt", "r");
                    
                    if (adj == 1) {
                       while ((d=fgetc(cq))!=EOF) {
                          fprintf(cs,"%c",d);
                       }
                       fprintf(cs,";");
                       while ((d=fgetc(cr))!=EOF) {
                          fprintf(cs,"%c",d);
                       }
                       fprintf(cs,";;;;;;;;;;;;;x\n");
                       
                       fclose(cr);
                       cr = fopen("trash.txt", "r");
                       fclose(cq);
                       cq = fopen("trash2.txt", "r");
                       
                       while ((d=fgetc(cq))!=EOF) {
                          fprintf(cs,"%c",d);
                       }
                       fprintf(cs,"_adj");
                       fprintf(cs,";");
                       while ((d=fgetc(cr))!=EOF) {
                          fprintf(cs,"%c",d);
                       }
                       fprintf(cs,";;;;;;;;;;;;;x\n");
                    }
                    else {
                         while ((d=fgetc(cq))!=EOF) {
                          fprintf(cs,"%c",d);
                       }
                       fprintf(cs,";");
                       while ((d=fgetc(cr))!=EOF) {
                          fprintf(cs,"%c",d);
                       }
                       fprintf(cs,";;;;;;;;;;;;;x\n");
                    }
                    
                    fclose(cr);
                    cr = fopen("trash.txt", "w");
                    fclose(cq);
                    cq = fopen("trash2.txt", "w");
                    j=0;
                    i=0;
                    k=0;
                    adj=0;
               }
          }
    }

    /*j=37;
    for (i=800; i<1330; i=i+10) {
        fprintf(ct, "technology = { id = %i  average_year = %i           }\n", j, i);
        j++;
    }*/
    fclose(ct);
    fclose(cs);
    fclose(cr);
    system("PAUSE");
}
