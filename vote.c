#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>

main(){
	
	int num,l,v0,v2,v3,c=0,d=0,e=0;
	int v1;
	char res;
	
	system("color 0a");
	
	printf("Total voter number:");
	scanf("%d",&num);
	system("cls");
	
  for(l=0;l<num;l++){
  	printf("Vote sujoy for press 1-\nVote piyas for press 2-\nVote nota for press 3-\n");
  	scanf("%d",&v1);
  	fflush(stdin);
 
	  
	  	switch(v1){
  		
  		case 1:
  		v0=1;
		c=c+v0;
		v1=0;	
		break;
		
		case 2:
  		    v2=1;
			d=d+v2;
			v1=0;
			break;
		case 3:
				v3=1;
			e=e+v3;	
			v1=0;
			break;
			
			default:
			
			 	printf("Your Vote cancel!\n");
		        printf("Next time better luck\n");
		        sleep(2);
		        break;
		        
	  }
  		
	  system("cls");
  	
  }
  
  l=0;
  while(l!=num){
  	 if(c<=d){
  	if(c<d){
  		if(d<=e){
  			if(d<e){
  			printf("Won Nota\n");
  	        printf("Total vote_%d",e);
            break;
			  }
			  else if(d==e){
			  		printf("Both same!\n");
	  	            printf("Please vote next time");
	  	            break;
			  }
		  }
  	printf("Won Piyas\n");
  	printf("Total vote_%d",d);
    break;
	  }
	  else if(c==d){
	  	if(d<e){
  			printf("Won Nota\n");
  	        printf("Total vote_%d",e);
            break;
			  }
	  	 else {
		   
		   printf("Both same!\n");
	  	printf("Please vote next time");
	  	break;
	  }
	  }

  }
  
  else{
  	if(c<=e){
  		if(c<e){
  			printf("Won Nota\n");
  	        printf("Total vote_%d",e);
            break;
		  }
		  else if(c==e){
		  	printf("Both same!\n");
	  	    printf("Please vote next time");
	  	    break;
		  }
  	
	  }
	  printf("Won sujoy\n");
  	printf("Total vote_%d",c);
  	break;
  }
  }
 
   printf("\nResult For press r_");
   scanf("%c",&res);
   
   if(res=='r'){
   	
   	printf("Total vote for sujoy-%d\n",c);
   	printf("Total vote for piyas-%d\n",d);
   	printf("Total vote for nota-%d\n",e);
   }
  
  getch();
}
