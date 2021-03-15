#include<stdio.h>
#include"modulepr.h"

typedef void (*fp)(void);
struct mod 
{
	int module_id;
	int bit;
	fp c;
}arr[5];


void reg_event(int id, int bit_map,fp ad )
{
	
		arr[id-1].module_id=id;
		arr[id-1].bit=bit_map;
		arr[id-1].c=ad;
		
}

/*int ifsame(int event,int module_id){
	return((arr[module_id-1].bit >> (event - 1)) & 1);
}*/

int check_bit(int event, int b){
		if(b&(1<<(event-1))){
				return 1;
		}
		else{
				return 0;
		}
}

int execute_event(int event){
	int module_id;
	for(module_id=1;module_id<=5;module_id++){
		if(check_bit(event, arr[module_id-1].bit)){
			arr[module_id-1].c();
		}
	}
}
