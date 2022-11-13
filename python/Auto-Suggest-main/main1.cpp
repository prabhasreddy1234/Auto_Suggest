#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
	int i,n,count=0,flag=0,str_l,limit,temp1;
	//searching elements
	do{
		printf("enter the limit of the elements in dictonary:\n");
	    scanf("%d",&limit);
	    printf("enter the number of elements in database\n");
	    scanf("%d",&n);
	}while(limit>n);
	
	char search[30],extracted[30],temp[30];
	//entering the base data

	char database[n][30];
	for(count=0;count<n-limit;count++){
		printf("enter element %d: ",count);
		scanf("%s",&database[i]);
	}
	//actual suggestion
	while(1<2){
		temp1=count;
	for(int i=0; i<temp1; i++){
       for(int j=0; j<temp1-1-i; j++){
    	
      if(strcmp(database[j], database[j+1]) > 0){
        //swap array[j] and array[j+1]
       
        strcpy(temp,database[j]);
        strcpy(database[j], database[j+1]);
        strcpy(database[j+1], temp);
      }
    }
  }
		printf("start typing...\n");
		scanf("%s",&search);
		
		str_l= strlen(search);
        for(i=0;i<count;i++){
        	
			//extracting sub string
			if(strlen(database[i])>=strlen(search)){
				strcpy(extracted,"");
			
				strncpy(extracted,database[i],strlen(search));
				extracted[strlen(search)]='\0';
			
				//comparing strings 
				if(strcmp(extracted,search)==0){
		    	    printf("----------%s---------\n",database[i]);
			}
			    else{
				    flag++;		
			}
			}
			else{
				flag++;
			}  	
		}
		if(count<n){
			if(flag==count){
			strcpy(database[flag],search);
			count++;	   
		}
			
		}		
		
		flag=0;	
		
	 
		}
			
}

