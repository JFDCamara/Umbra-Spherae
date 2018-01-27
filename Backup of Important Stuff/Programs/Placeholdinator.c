#include "stdio.h"
#include "windows.h"

int main() {
    FILE *ct, *cs, *cr, *cq;
    int i=0, j=0, k=0, l=0, m=0, ast=0, spa=0, a=0, b=0;
    
    const char *names[20];
    names[0]="Haæu";
    names[1]="Diku";
    names[2]="Abulang";
    names[3]="Moliye";
    names[4]="Kunuma";
    names[5]="Yawuta";
    names[6]="Ahai";
    names[7]="Ilungha";
    names[8]="Dili";
    names[9]="Beilu";
    names[10]="Andahai";
    names[11]="Wulie";
    names[12]="Iji";
    names[13]="Alihemen";
    names[14]="Guantu";
    names[15]="Eiyeku";
    names[16]="Yingge";
    names[17]="Ahaibaifu";
    names[18]="Ningjiasu";
    names[19]="Hulijia";
    names[20]="Agu";
    
    int initial_char_number = 1000076386;
    int initial_date = 720;
    int final_date = 1320;
    int dynasty_number = 1000028274;
    
    char dynasty[] = "#Gingciri";
    char religion[] = "\"jurchen_pagan\"";
    char culture[] = "\"mohe\"";
    
    //printf("%s", Dynasty);

    //ct=fopen("Nomes.txt","r");
    cs=fopen("culture_file.txt","w");
    ct=fopen("title_file.txt","w");
    //cr=fopen("trash.txt", "w");
    //cq=fopen("trash2.txt", "w");
    
    /*while (( c = fgetc(ct) )!= EOF) {
          switch (c) {
                 case '\n':
                      //fprintf(cq,"*");
                      f[i][j]='*';
                      j++;
                      break;
                 case ' ':
                      //fprintf(cq,"*");
                      break;
                 default:
                         f[i][j]=c;
                         i++;
                         //printf("%c",c);
                         printf("%c",c);
          //      i++;
                      //fprintf(cq,"%c",c);
                      break;
          }
          //while (( c = fgetc(cq) )!= EOF) {
          //      f[i]=c;
          //      i++;
          //}
          //printf("%s",f);
          k++;
    }
    printf("%i\n",j);
    printf("%i\n",i);
    printf("%i\n",k);
    
    l=j;
    m=i;
    
    
    for (j=0; j<l; j++) {
        for (i=0; i<m; i++) {
            if (f[i][j]=='\0') {
            } else {
                   
            if (f[i][j]=='*') {
               ast=1;
            }
            if (ast==0) {
               fprintf(cq,"%c",f[i][j]);
            }
            
            }
        }
        fprintf(cq,"\n");
        ast=0;
    }*/
    
    
    
    
    i=0;
    
    fprintf(cs,"#%s Dynasty (Placeholders)\n\n", dynasty);
    
    for (a=initial_date;a<=final_date;a=a+30) {
        
        fprintf(cs,"%i = {\n", initial_char_number+b);
        fprintf(cs,"\tname=\"%s\"\n", names[i]);
        fprintf(cs,"\tdynasty=%i %s\n", dynasty_number, dynasty);
        fprintf(cs,"\treligion=%s\n", religion);
        fprintf(cs,"\tculture=%s\n", culture);
        
        if (a!=initial_date) {
        fprintf(cs,"\tfather=%i\n", initial_char_number+b-1);                     
        }
        
        
        fprintf(cs,"\t%i.1.1={\n", a);
        fprintf(cs,"\t\tbirth=\"%i.1.1\"\n", a);
        fprintf(cs,"\t}\n");
        fprintf(cs,"\t%i.1.1={\n", a+60);
        fprintf(cs,"\t\tdeath=\"%i.1.1\"\n", a+60);
        fprintf(cs,"\t}\n");
        fprintf(cs,"}\n");
        fprintf(cs,"\n");
        b++;
        i++;
    }
    
    
    
    
       /*   if (k==1) {
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
    }*/
    b=0;
    i=0;
    fprintf(ct,"#%s Dynasty (Placeholders)\n\n", dynasty);

    for (a=initial_date;a<=final_date;a=a+30) {
        fprintf(ct,"%i.1.1={\n", a+30);
        fprintf(ct,"\tholder=%i #%s\n", initial_char_number+b, names[i]);
        fprintf(ct,"}\n");
        b++;
        i++;
    }
    /*if (m==0) {
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
    }*/
    
    /*j=37;
    for (i=800; i<1330; i=i+10) {
        fprintf(ct, "technology = { id = %i  average_year = %i           }\n", j, i);
        j++;
    }*/
    fclose(ct);
    fclose(cs);
    //fclose(cr);
    //fclose(cq);
    system("PAUSE");
}
