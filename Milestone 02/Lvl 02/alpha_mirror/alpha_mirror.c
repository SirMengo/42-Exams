#include <unistd.h>

int main(int argc, char *argv[]){
	if(argc == 2){
		int i = 0;
		char c;

		while(argv[1][i] != '\0'){
			c = argv[1][i];
			if(c >= 'A' && c <= 'Z'){
				c = 'Z' - c + 'A';
			}
			else if(c >= 'a' && c <= 'z'){
				c = 'z' - c + 'a';
			}
			write(1, &c, 1);
			i++;
		}
	}
}