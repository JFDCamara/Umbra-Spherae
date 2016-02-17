#include "stdio.h"
#include "windows.h"

int main() {
    FILE *ct, *cs, *cr, *cq;
    int i=0, j=0, k=0, l=0, m=0;
    char c, d, e;

    ct=fopen("gods.txt","r");
    cs=fopen("GODS_loc.txt","w");
    cr=fopen("trash.txt", "w");
    cq=fopen("trash2.txt", "w");
    
    while (( c = fgetc(ct) )!= EOF) {
          switch (c) {
                 case 'G':
                      if (i==0) {
                         i=1;
                         m=0;
                      }
                      break;
                 case 'P':
                      if (i==0) {
                         i=1;
                         m=0;
                      }
                      break;
                 case '_':
                      if (i==1 && j==1) {
                         l=0;
                         fprintf(cr," ");
                      }
                      if (i==1 && j==0) {
                         j=1;
                      }
                      break;
                 case ' ':
                      if (i==1) {
                         i=0;
                         j=0;
                         k=1;
                         l=0;
                      }
                      break;
                 case '\t':
                      if (i==1) {
                         i=0;
                         j=0;
                         k=1;
                         l=0;
                      }
                      break;
                 case '\n':
                      if (i==1) {
                         i=0;
                         j=0;
                         k=1;
                         l=0;
                      }
                      break;
          }
          if (i==1) {
             fprintf(cq,"%c",c);
          }
          if (j==1 && l==1 && k==0) {
                   switch (c) {
                       case 'A':
                            fprintf(cr,"a");
                            break;
                       case 'B':
                            fprintf(cr,"b");
                            break;
                       case 'C':
                            fprintf(cr,"c");
                            break;
                       case 'D':
                            fprintf(cr,"d");
                            break;
                       case 'E':
                            fprintf(cr,"e");
                            break;
                       case 'F':
                            fprintf(cr,"f");
                            break;
                       case 'G':
                            fprintf(cr,"g");
                            break;
                       case 'H':
                            fprintf(cr,"h");
                            break;
                       case 'I':
                            fprintf(cr,"i");
                            break;
                       case 'J':
                            fprintf(cr,"j");
                            break;
                       case 'K':
                            fprintf(cr,"k");
                            break;
                       case 'L':
                            fprintf(cr,"l");
                            break;
                       case 'M':
                            fprintf(cr,"m");
                            break;
                       case 'N':
                            fprintf(cr,"n");
                            break;
                       case 'O':
                            fprintf(cr,"o");
                            break;
                       case 'P':
                            fprintf(cr,"p");
                            break;
                       case 'Q':
                            fprintf(cr,"q");
                            break;
                       case 'R':
                            fprintf(cr,"r");
                            break;
                       case 'S':
                            fprintf(cr,"s");
                            break;
                       case 'T':
                            fprintf(cr,"t");
                            break;
                       case 'U':
                            fprintf(cr,"u");
                            break;
                       case 'V':
                            fprintf(cr,"v");
                            break;
                       case 'W':
                            fprintf(cr,"w");
                            break;
                       case 'X':
                            fprintf(cr,"x");
                            break;
                       case 'Y':
                            fprintf(cr,"y");
                            break;
                       case 'Z':
                            fprintf(cr,"z");
                            break;
                       case '\'':
                            fprintf(cr,"'");
                            break;
                       case '-':
                            fprintf(cr,"-");
                            break;
                   }
          }
          if (j==1 && l==0) {
             switch (c) {
                       case '_':
                            break;
                       default:
                               fprintf(cr,"%c",c);
                               l=1;
                               break;
             }
          }
          if (k==1) {
             fclose(cr);
             cr = fopen("trash.txt", "r");
             fclose(cq);
             cq = fopen("trash2.txt", "r");
             
             while ((d=fgetc(cq))!=EOF) {
                   fprintf(cs,"%c",d);
             }
             fprintf(cs,";",c);
             while ((d=fgetc(cr))!=EOF) {
                   fprintf(cs,"%c",d);
             }
             fprintf(cs,";;;;;;;;;;;;;x\n");
             
             fclose(cr);
             cr = fopen("trash.txt", "w");
             fclose(cq);
             cq = fopen("trash2.txt", "w");
             
             k=0;
             m=1;
          }
          //printf("%i",m);
    }

    if (m==0) {
             fclose(cr);
             cr = fopen("trash.txt", "r");
             fclose(cq);
             cq = fopen("trash2.txt", "r");
             
             while ((d=fgetc(cq))!=EOF) {
                   fprintf(cs,"%c",d);
             }
             fprintf(cs,";",c);
             while ((d=fgetc(cr))!=EOF) {
                   fprintf(cs,"%c",d);
             }
             fprintf(cs,";;;;;;;;;;;;;x\n");
             
             fclose(cr);
             cr = fopen("trash.txt", "w");
             fclose(cq);
             cq = fopen("trash2.txt", "w");
    }
    /*j=37;
    for (i=800; i<1330; i=i+10) {
        fprintf(ct, "technology = { id = %i  average_year = %i           }\n", j, i);
        j++;
    }*/
    fclose(ct);
    fclose(cs);
    fclose(cr);
    fclose(cq);
    system("PAUSE");
}
