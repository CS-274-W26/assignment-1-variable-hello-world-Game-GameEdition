#include <stdio.h> // Necessary for printf()
#include <stdlib.h> // we need for random
#include <time.h> // to seed random

int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	// TODO Complete the program
	srand(time(NULL)); // seed based on time
	int myrand;
	myrand = rand() % 11; // modulo 10 excludes 10
	if (myrand>=0 && myrand <=4) {
		printf("eat more beef, kick less cats\n");
	}
	else if (myrand>=5 && myrand<=9) {
		printf("FRODO LIVES \n");
	}
	else if (10==myrand){
		printf("Larn is the best roguelike \n");
	}

	printf("the random number was: %d\n", myrand);

	return 0;
}
