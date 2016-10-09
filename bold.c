/*this files holds the functions to check the input-string for special characters*/
//includes
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "bold.h"

void checkForChars(char* string, FILE* document, File* style){
	int i, i2;
    char class[1000];
    char helpline[10000];
    if(string[0]=='b'&&string[1]==':'){
        for(i=0; string[i+2]!='\0'){
            string[i]string[i+2];
        }
        fprintf(document, "<b>%s</b>", string);
    }
    if(string[0]=='u'&&string[1]==':'){
        for(i=0; string[i+2]!='\0'){
            string[i]string[i+2];
        }
        fprintf(document, "<u>%s</u>", string);
    }
    if(string[0]=='i'&&string[1]==':'){
         for(i=0; string[i+2]!='\0'){
            string[i]string[i+2];
        }
        fprintf(document, "<i>%s</i>", string);
    }
    if(string[0])=='h'&&string[1]=='1'&&string[2]==':'){
        for(i=0; string[i+3]!='\0'){
            string[i]string[i+3];
        }
        fprintf(document, "<h1>%s</h1>", string);
    }
    if(string[0])=='h'&&string[1]=='2'&&string[2]==':'){
        for(i=0; string[i+3]!='\0'){
            string[i]string[i+3];
        }
        fprintf(document, "<h2>%s</h2>", string);
    }
    if(string[0]=='_'){
        for(i=1; string[i]!='_'; i++)//getting the length of the class
            ;
        strncpy(helpline, string, i-1);//copy the _+classname+_
        for(i2=0;string[i2+i]!='\0';i2++){//remove the classname+_
            string[i2]=string[i2+i];
        }
        for(i=0;helpline[i+1]=='\0';i++){//
            helpline[i]=helpline[i+1];
        }
		helpline[i]='\0';
        fprintf(document, "<div class=\"%s\">%s", helpline, string);
    }
	if(string[strlen(string)-2]=='^'){
		if(string[0]=='b'&&string[1]==':'||string[0]=='u'&&string[1]==':'||string[0]=='i'&&string[1]==':'||string[0]=='_'){
			fprintf(document, "</div>");
		}else{
			string[srtlen(string)-2]='\0';
			fprintf(document,"%s</div>", string);
		}
	}
}
