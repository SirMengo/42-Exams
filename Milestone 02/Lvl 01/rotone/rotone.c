#include <unistd.h>

int main(int argc, char *argv[]){
	int i = 0;
	char c;

	if(argc == 2){
		while(argv[1][i] != '\0'){
			if(argv[1][i] == 'Z' || argv[1][i] == 'z'){
				if(argv[1][i] == 'Z')
					write(1, "A", 1);
				if(argv[1][i] == 'z')
					write(1, "a", 1);
			}
			else if((argv[1][i] >= 'A' && argv[1][i] < 'Z') || (argv[1][i] >= 'a' && argv[1][i] < 'z')){
				c = argv[1][i];
				c = c + 1;
				write(1, &c, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
}