#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	int i,n,count=0,flag=0,temp1;
	//searching elements
	char search[30],extracted[30],temp[30];
	//entering the base data
	printf("enter the number of elements in database\n");
	scanf("%d",&n);
	char database[n][30], customdata[n+1][30];
	for(i=0;i<n;i++){
		printf("enter element %d :",i);
		scanf("%s",&database[i]);
	}
			 for(int i=0; i<n; i++){
       for(int j=0; j<n-1-i; j++){
    	
      if(strcmp(database[j], database[j+1]) > 0){
        //swap array[j] and array[j+1]
       
        strcpy(temp,database[j]);
        strcpy(database[j], database[j+1]);
        strcpy(database[j+1], temp);
      }
    }
  }
	//actual suggestion
	while(1<2){
		printf("start typing...\n");
		scanf("%s",&search);
		flag=0;
		for(i=0;i<n;i++){
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
		
		//checking in custom data
		if(count>0){
			for(i=0;i<count;i++){
				//extracting substring
				if(strlen(search)<=strlen(customdata[i])){
				
				
					strcpy(extracted,"");
					strncpy(extracted,customdata[i],strlen(search));
					extracted[strlen(search)]='\0';
				
					
					//comparing strings
					if(strcmp(extracted,search)==0){
						printf("---------%s---------\n",customdata[i]);
					}
					else{
						flag++;
					}
				}
				else{
					flag++;
				}
			}
		}
		//adding elements into custom data
		if(count==0){
			if(flag==n){
				strcpy(customdata[count],search);
				count++;	
			}
		}
		else{
			if(flag==n+count){
				strcpy(customdata[count],search);
				count++;
			}
		}
		
		flag=0;	
		temp1=count;
	 for(int i=0; i<temp1; i++){
       for(int j=0; j<temp1-1-i; j++){
    	
      if(strcmp(customdata[j], customdata[j+1]) > 0){
        //swap array[j] and array[j+1]
       
        strcpy(temp,customdata[j]);
        strcpy(customdata[j], customdata[j+1]);
        strcpy(customdata[j+1], temp);
      }
    }
  }

	}
	
	
	
}
