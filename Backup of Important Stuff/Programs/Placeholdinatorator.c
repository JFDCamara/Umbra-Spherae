#include "stdio.h"
#include "windows.h"
#include "time.h"

int main() {
    FILE *ct, *cs, *cr, *cq, *cn;
    int i=0, j=0, k=0, l=0, m=0, ast=0, spa=0, a=0, b=0, randn=0;
    char n;
    int char_num=21;
    time_t t;
    
    int buffer_len = 1024;
	char* buffer = malloc(buffer_len * sizeof(char));
    
    char** onames = malloc(buffer_len * sizeof(char*));
    char** namex = malloc(buffer_len * sizeof(char*));
    char** names = malloc(buffer_len * sizeof(char*));
    
    /*names[0]="Akar-Bale";
    names[1]="Bora-Dale";
    names[2]="Akar-Bale";
    names[3]="Bora-Dale";
    names[4]="Akar-Bale";
    names[5]="Bora-Dale";
    names[6]="Akar-Bale";
    names[7]="Bora-Dale";
    names[8]="Akar-Bale";
    names[9]="Bora-Dale";
    names[10]="Akar-Bale";
    names[11]="Bora-Dale";
    names[12]="Akar-Bale";
    names[13]="Bora-Dale";
    names[14]="Akar-Bale";
    names[15]="Bora-Dale";
    names[16]="Akar-Bale";
    names[17]="Bora-Dale";
    names[18]="Akar-Bale";
    names[19]="Bora-Dale";
    names[20]="Fini-Bale";*/
    
    
    int initial_char_number = 1000203960;
    int initial_date = 720;
    int final_date = 1320;
    int dynasty_number = 1000028316;
    
    char dynasty[] = "Akar Bale";
    char religion[] = "\"malagasy_religion\"";
    char culture[] = "\"andamanese\"";
    
    //printf("%s", dynasty);


	//printf("A");

    //ct=fopen("Nomes.txt","r");
    cs=fopen("culture_file.txt","w");
    ct=fopen("title_file.txt","w");
    cn=fopen("Nomes.txt","r");
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
    
    //printf("A");
    
    
    /*while (( n = fgetc(cn) )!= EOF) {
    	
    	if (name_num<=j) {
    		*onames = malloc(j * sizeof(int));
		}
    	
    	fgets(onames[a], name_num, cn);
    	a++;
    	j++;
    		printf("%i",j);
    	
	}*/

	
	buffer = fgets(buffer, buffer_len, cn);
	//printf("%s", buffer);

	//printf("%i\n", cn == NULL);
	//printf("%i\n", cn);
	//printf("%s\n",onames[a]);
	
	for (a=0;a<=buffer_len;a++) {
		onames[a] = malloc(buffer_len * sizeof(char));
	}
	
	
	a=0;
	while ( fgets(onames[a], buffer_len, cn) != NULL) {
    	
    	//printf("%s\n",onames[a]);
    	//printf("%i\n",j);
    	a++;
    	j++;
    	
	}
	
	j=j-1;
	
	for (a=0;a<=buffer_len;a++) {
		namex[a] = malloc(buffer_len * sizeof(char));
	}
	
	//*names = malloc(j * sizeof(int));
    
    srand(time(NULL));
    
    for (a=0;a<char_num;a++) {
    	
    	randn=rand() % (j+1);
    	//printf("%d\n",randn);
    	namex[a]=onames[randn];
    	//printf("%s",namex[a]);
	}
    
    for (a=0;a<=buffer_len;a++) {
		names[a] = malloc(buffer_len * sizeof(char));
	}
    
    for (a=0;a<=buffer_len;a++) {
    	//strncpy(names[a],namex[a],strlen(namex[a])-1);
    	//printf("%s\n",namex[a]);
    	//printf("%s\n",names[a]);
    	names[a]=strtok(namex[a], "\n");
	}
    
    
    i=0;
    
    fprintf(cs,"#%s Dynasty (Placeholders)\n\n", dynasty);
    
    for (a=initial_date;a<=final_date;a=a+30) {
        
        fprintf(cs,"%i = {\n", initial_char_number+b);
        fprintf(cs,"\tname=\"%s\"\n", names[i]);
        fprintf(cs,"\tdynasty=%i #%s\n", dynasty_number, dynasty);
        fprintf(cs,"\treligion=%s\n", religion);
        fprintf(cs,"\tculture=%s\n", culture);
        
        if (a!=initial_date) {
        fprintf(cs,"\tfather=%i\n", initial_char_number+b-1);                     
        }
        
        
        fprintf(cs,"\t%i.1.1={\n", a);
        fprintf(cs,"\t\tbirth=\"%i.1.1\"\n", a);
        fprintf(cs,"\t}\n");
        fprintf(cs,"\t%i.1.1={\n", a+60);
        fprintf(cs,"\t\tbirth=\"%i.1.1\"\n", a+60);
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
    free(names);
    free(onames);
    fclose(ct);
    fclose(cs);
    fclose(cn);
    //fclose(cr);
    //fclose(cq);
    system("PAUSE");
}
