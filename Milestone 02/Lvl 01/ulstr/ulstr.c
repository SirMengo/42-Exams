#include <unistd.h>

int main(int argc, char *argv[]){
	if(argc == 2){
		int i = 0;
		char c;

		while(argv[1][i] != '\0'){
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z'){
				c = argv[1][i];
				c = c + 32;
				write(1, &c, 1);
			}
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z'){
				c = argv[1][i];
				c = c - 32;
				write(1, &c, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
}