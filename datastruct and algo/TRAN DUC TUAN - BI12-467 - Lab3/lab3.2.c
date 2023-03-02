#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

char undo[10], redo[10];
int enload = 1, reload = 1 ,enter = 1, top_undo = -1, top_redo = -1; 

void load_undo (){
    if( top_undo > 3 ){
        enter = 0;
    }
	else{
		top_undo++;
		printf("Enter %dth stack of undo: ", top_undo + 1);
		scanf("%s", &undo[top_undo]);
		printf("the %dth: %s\n", top_undo + 1, &undo[top_undo]);
	}
}

void push_t0_redo(){
	if( top_undo = -1 ){
		enload = 0;
		printf("There nothing to load from undo stack!");
	}
	else{
		top_redo++;
		redo[top_redo] = undo[top_undo];
		undo[top_undo] = '\0';
		top_undo--;
	}
}

void push_t0_undo(){
	if( top_redo = -1 ){
		reload = 0;
		printf("There nothing to load from redo stack!");
	}
	else{
		top_undo++;
		undo[top_undo] = redo[top_redo];
		undo[top_redo] = '\0';
		top_redo--;
	}
}

int main(){ 
	printf("Assume that redo stack is empty at beginning!\nLoad undo stack:\n");
	while( enter == 1){load_undo();}
	while( enload == 1){
		push_t0_redo();
		printf("Enter 1 to countinue or stop with 0:");
		scanf("%d", &enload);
	}

	while( reload == 1){
		push_t0_undo();
		printf("Enter 1 to countinue or stop with 0:");
		scanf("%d", &enload);
	}
	

	return 0;
}