#include "tokenizer.hpp"

InputBuffer* new_input_buffer(){
	InputBuffer* input_buffer = new InputBuffer;
	input_buffer->buffer = NULL;
	input_buffer->buffer_length = 0;
	input_buffer->input_length = 0;

	return input_buffer;
}

void print_prompt() {
	std::cout << " > "; 
}

void read_input(InputBuffer* input_buffer) {
	ssize_t bytes_read =
		getline(&(input_buffer->buffer), &(input_buffer->buffer_length), stdin);
	
	if(bytes_read <= 0){
		std::cout << "Error reading input!\n";
		exit(EXIT_FAILURE);
	}

	input_buffer->input_length = bytes_read - 1;
	input_buffer->buffer[bytes_read - 1] = 0;
}

void close_input_buffer(InputBuffer* input_buffer){
	delete input_buffer->buffer;
	delete input_buffer;
}
