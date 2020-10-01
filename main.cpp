#include "tokenizer.h"

void close_input_buffer(InputBuffer* input_buffer){
	delete input_buffer->buffer;
	delete input_buffer;
}

int main(){
	InputBuffer* input_buffer = new_input_buffer();
	while(true){
		print_prompt();
		read_input(input_buffer);

		if(strcmp(input_buffer->buffer, ".exit") == 0) {
			close_input_buffer(input_buffer);
			exit(EXIT_SUCCESS);
		} else {
			std::cout << "Unrecognized command " << input_buffer->buffer << std::endl;
		}
	}
	return 0;
}
