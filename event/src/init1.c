#include<stdio.h>
#include"modulepr.h"
#include"eventmanager.h"
#define set_bit(a,b) (a| (1 << (b-1)))
void module_init(int modules,int x);

void main()
{
	int module_id, i, x, modules;
	
	printf("Enter the  no of events :");
	scanf("%d", &x);
	printf("Enter the  no of modules :");
	scanf("%d", &modules);
	module_init(modules, x);
	
	for (;1;) {
		printf("Enter event, -1 for exit :");
		scanf("%d",&i);
		execute_event(i);
		if(i == -1){
			break;
		}
	}
}

void module_init(int modules,int x)
{
	int bit_map=0;
	int i,size,event_no;
	for(i = 0;i < modules;i++) {
		printf("For Module %d  Enter the no of events interested:", i+1);
		scanf("%d",&size);
		bit_map=0;

		while(size){
			printf("Enter the event interested:");

			scanf("%d",&event_no);

			bit_map = set_bit(bit_map,event_no);

			size-- ; 
		}
		reg_event(i+1,bit_map,get_fp(i+1));
	}

}

