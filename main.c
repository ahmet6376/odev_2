#include <stdio.h>
#include <stdlib.h>

int h,m; //h---> hour m---> minute

	

int main() {
	while(1){
	printf("\nPlease enter the time");
    scanf ("%d",&h);
	printf("\n Please enter the minute");
    scanf ("%d",&m);
	
	if( 1<=h && h<=23 && 0<=m && m<=59){
	  if( h<12){
	  	if( 0<m && m<=30){
	  	minute();
	    printf(" past");}
	  else if( m>30){ 
	  m=60-m;	
	  h++;
	  minute();
	  printf(" minutes to ");}
	  else {
	  printf("\n o'clock ");
	  hour();
	  }	
	hour();	
	  }
	  else if( 12<=h ){
	h=h-12;	
	if( 0<m && m<=30){
	  	minute();
	    printf(" past");}
	  else if( m>30){ 
	  m=60-m;	
	  h++;
	  minute();
	  printf(" minutes to ");}
	  else {
	  printf("\n o'clock ");
	  hour();
	  }	
	hour();
	   }}
	   	
 else{
 	printf("\n invalid expression ");
	 break;
 } }
   
   return 0;
	}
	
	int mdonusum(){
     	
	  if( 0<m && m<=30){
	  	minute();
	    printf(" past");}
	  else if( m>30){ 
	  m=60-m;	
	  h++;
	  minute();
	  printf(" minutes to ");}
	  else {
	  hour();
	  printf("\n o'clock ");
	  }		
	      }
	
void hour(){
		switch (h) {
       case 1  : printf("one");    break;
       case 2  : printf("two");    break;
       case 3  : printf("theree"); break;
       case 4  : printf("four");   break;       
       case 5  : printf("five");   break;
	   case 6  : printf("six");    break;       
	   case 7  : printf("seven");  break;      
	   case 8  : printf("eight");  break;
	   case 9  : printf("nine");   break;
	   case 10 : printf("ten");    break;     
	   case 11 : printf("eleven"); break;
	   case 12 : printf("twelve"); break;
	   }}	
	
void minute(){
		switch (m) {
       case 1  : printf("one");          break;
       case 2  : printf("two");          break;
       case 3  : printf("theree");       break;
       case 4  : printf("four");         break;       
       case 5  : printf("five");         break;
	   case 6  : printf("six");          break;       
	   case 7  : printf("seven");        break;      
	   case 8  : printf("eight");        break;
	   case 9  : printf("nine");         break;
	   case 10 : printf("ten");          break;     
	   case 11 : printf("eleven");       break;
	   case 12 : printf("twelve");       break;
	   case 13 : printf("thirteen");     break;
       case 14 : printf("fourteen");     break;
       case 15 : printf("fiveteen");     break;
       case 16 : printf("sixteen");      break;       
       case 17 : printf("seventeen");    break;
	   case 18 : printf("eighteen");     break;       
	   case 19 : printf("nineteen");     break;      
	   case 20 : printf("twenty");       break;
	   case 21 : printf("twenty one");   break;
	   case 22 : printf("twenty two");   break;     
	   case 23 : printf("twenty theree");break;
	   case 24 : printf("twenty four");  break;
	   case 25 : printf("twenty five");  break;
	   case 26 : printf("twenty six");   break;      
	   case 27 : printf("twenty seven"); break;
	   case 28 : printf("twenty eight"); break;
	   case 29 : printf("twenty nine");  break;     
	   case 30 : printf("thirty");       break;}}
	   
	



