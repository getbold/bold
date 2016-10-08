/*this files holds the functions to check the input-string for special characters*/
//includes
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "bold.h"

void checkForChars(char* string, FILE* document){
	int i;
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
}