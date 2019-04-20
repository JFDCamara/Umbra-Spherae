#include "stdio.h"
#include "windows.h"

int main() {
    FILE *ct, *cs, *cr, *cq;
    int i=0, j=0, k=0, m=0;
    char c, d, e;
    int l=1;

	int province_num[3058];
	
    ct=fopen("positions_old.txt","r");
    cs=fopen("positions.txt","w");
    //cr=fopen("trash.txt", "w");
    //cq=fopen("trash2.txt", "w");
    
    while (( c = fgetc(ct) )!= EOF) {
          switch (c) {
                 case '\t':
                      if (i==0 && l==1) {
                      	i=1;
                        fscanf(ct, "%d", &k);
                        
                        if (k>1580 && k<1995) {
                        	//1581 to 1994
                        	k=k+1314;
                    	}
                        province_num[j]=k;
                        printf("\n%d ", province_num[j]);
                        fprintf(cs,"\t%d", province_num[j]);
                		j++;
                		l=0;
                      }
                      break;
                 case '#':
                 	fprintf(cs,"%c",c);
				 	i=0;
				 	l=1;
				 	break;
                 default:
                    fprintf(cs,"%c",c);
                    break;
          }
	}

    fclose(ct);
    fclose(cs);
    //fclose(cr);
    //fclose(cq);
    system("PAUSE");
}
