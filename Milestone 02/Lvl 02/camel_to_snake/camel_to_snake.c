#include <unistd.h>

int isUpper(char c){
	if(c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int main(int argc, char *argv[]){
	if(argc == 2){
		int i = 0;
		char c;

		while(argv[1][i] != '\0'){
			c = argv[1][i];
			if(i == 0 && isUpper(c)){
				c = c + 32;
			}
			if(isUpper(c))
				c = c + 32;
			write(1, &c, 1);
			if(isUpper(argv[1][i + 1])){
				write(1, "_", 1);
			}
			i++;
		}
	}
}