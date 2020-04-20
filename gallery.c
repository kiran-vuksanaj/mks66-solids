#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  printf("push\n");
  srand(time(NULL));
  int i;
  for(i = 0; i < 15; i++){
	printf("push\n");
	printf("move\n%d %d %d\n",rand()%500,rand()%500,rand()%500);
	printf("rotate\nx %d\n",rand()%90);
	printf("rotate\ny %d\n",rand()%90);
	printf("rotate\nz %d\n",rand()%90);
	printf("box\n0 0 0 50 50 50\n");
	printf("pop\n");
  }
  printf("display\n");
  printf("save\ngallery.png\n");
}
