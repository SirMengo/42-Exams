#include <unistd.h>

int main(int argc, char *argv[]){
	if(argc == 2){
		int i = 0;

		while(argv[1][i] == '\0' || argv[1][i] == '\n' || argv[1][i] == ' ')
			i++;
		while(argv[1][i] != '\0' && argv[1][i] != '\n' && argv[1][i] != ' '){
			write(1, &argv[1][i], 1);
			i++;
		}
	}
}