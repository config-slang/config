#include<stdio.h>
void display();
int result();
char arr[]={'0','1','2','3','4','5','6','7','8','9'};
int main(){
	int num,player=1,check,count=0,temp=0;
	display();
	top:
	printf("Enter for player %d : ",player);
	scanf("%d",&num);
	
		if(arr[num]=='X' || arr[num]=='O'){
			printf("Field has been already fulfilled try again\n");
			goto top;
		}
	
	if(player==1){
		arr[num]='X';
		display();
	}
	else{
		arr[num]='O';
		display();
	}
	
	check = result();
	count++;
	
	
	
	if(check==1){
		printf("Player %d won",player);
	}else if(count==9){
		printf("Draw");
	}else{	
	if(player%2==0){
		player=1;
	}else{
		player=2;
	}
		goto top;
	}
	
}


void display(){
	printf("-------------------\n");
	printf("|     |     |     |\n");
	printf("|  %c  |  %c  |  %c  |\n",arr[1],arr[2],arr[3]);
	printf("|_____|_____|_____|\n");
	printf("|     |     |     |\n");
	printf("|  %c  |  %c  |  %c  |\n",arr[4],arr[5],arr[6]);
	printf("|_____|_____|_____|\n");
	printf("|     |     |     |\n");
	printf("|  %c  |  %c  |  %c  |\n",arr[7],arr[8],arr[9]);
	printf("|_____|_____|_____|\n");
}

int result(){
	if(arr[1]==arr[2] && arr[2]==arr[3]){
		return 1;
	}if(arr[1]==arr[4] && arr[4]==arr[7]){
		return 1;
	}if(arr[1]==arr[5] && arr[5]==arr[9]){
		return 1;
	}if(arr[2]==arr[5] && arr[5]==arr[8]){
		return 1;
	}if(arr[3]==arr[6] && arr[6]==arr[9]){
		return 1;
	}if(arr[3]==arr[5] && arr[5]==arr[7]){
		return 1;
	}if(arr[4]==arr[5] && arr[5]==arr[6]){
		return 1;
	}if(arr[7]==arr[8] && arr[8]==arr[9]){
		return 1;
	}
	return 0;
}
