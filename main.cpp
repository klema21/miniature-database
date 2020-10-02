#include "tokenizer.h"
#include "database.h"

void close_input_buffer(InputBuffer* input_buffer){
	delete input_buffer->buffer;
	delete input_buffer;
}

int main(){
	InputBuffer* input_buffer = new_input_buffer();
	Database db;
	while(true){
		print_prompt();
		read_input(input_buffer);

		if(strcmp(input_buffer->buffer, ".exit") == 0) {
			close_input_buffer(input_buffer);
			exit(EXIT_SUCCESS);
		}else if(strcmp(input_buffer->buffer, "Add") == 0){
			Date date_to_insert{1, 2, 3};
			db.AddEvent(date_to_insert, "Hello World!");
		}else if(strcmp(input_buffer->buffer, "Print") == 0){
			db.Print();
		}else if(strcmp(input_buffer->buffer, "Find") == 0){

		}else if(strcmp(input_buffer->buffer, "Del") == 0){
			Date date_to_delete{1, 2, 3};
			db.DeleteEvent(date_to_delete, "Say hello to your mom");
		}else if(strcmp(input_buffer->buffer, "Last") == 0){

		}else {
			std::cout << "Unrecognized command " << input_buffer->buffer << std::endl;
		}
	}
	return 0;
}
