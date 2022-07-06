#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <86box/86box.h>
#include <86box/mem.h>


/*
 * function: get_memory_size
 * description: Gets the total size of memory (in bytes)
 * returns: Total memory size
*/
int get_memory_size() {
    return (unsigned long)mem_size*1024;
}

/*
 * function: write_to_log_file
 * description: Writes text to the server logs
 * parameters: (char* entry_text): Text for entry (int add_new_line): Whether or not to write newline
 * returns: nothing
*/
void write_to_log_file(char* entry_text, int add_new_line) {
    FILE *fp;
    fp = fopen("corrupt.log", "a+");
    char* entry_format = "%s";

    if(add_new_line == 1)
        entry_format = "%s\n";

    fprintf(fp, entry_format, entry_text);
    fclose(fp);
}

/*
 * function: do_corruption_blast
 * description: Corrupts the memory
 * parameters: (int radius): Blast radius (how many bytes are affected)
 * returns: nothing
*/
void do_corruption_blast(int radius) {
    srand(time(NULL));

    write_to_log_file("==========================[ BLAST START ]==========================", 1);

    for(int i = 0; i < radius; i++) {
        int size_of_memory = get_memory_size();
        int blast_address = rand() % size_of_memory;
        int blast_replace_value = rand() % 0xFF;

        char strBuffer[255];
        sprintf(strBuffer, "ADDRESS: %d MEM_SIZE: %d REPLACEMENT_VALUE: %d", blast_address, size_of_memory, blast_replace_value);

        write_to_log_file(strBuffer, 1);

        write_mem_b(blast_address, blast_replace_value);
    }

    write_to_log_file("==========================[ BLAST END ]==========================", 1);
}

/*
 * function: do_corruption_blast_manual
 * description: Corrupts the memory, controlled by client
 * parameters: (char* packet): Packet that contains data for blast
 * returns: nothing
*/
void do_corruption_blast_manual(char* packet) {
	unsigned int blast_repeats = *(int*)&packet[1];
	unsigned int blast_repeated = 0;
    srand(time(NULL));

    write_to_log_file("==========================[ BLAST MANUAL START ]==========================", 1);
	
	if(blast_repeats < 1001){
		for(int i = 5; blast_repeated != blast_repeats; i=i+5) {
			unsigned int size_of_memory = get_memory_size();
			unsigned int blast_address = *(int*)&packet[i];
			unsigned char blast_replace_value = packet[i+4];
			
			char strBuffer[255];
			sprintf(strBuffer, "ADDRESS: %u MEM_SIZE: %d REPLACEMENT_VALUE: %u", blast_address, size_of_memory, blast_replace_value);

			write_to_log_file(strBuffer, 1);

			write_mem_b(blast_address, blast_replace_value);
			++blast_repeated;
		}
	}
    write_to_log_file("==========================[ BLAST MANUAL END ]==========================", 1);
}

/*
 * function: split_to_tokens
 * description: Splits string into token array
 * parameters: (char* token_array): pointer to array to be filled (char* input_string) pointer to string to be split
 * returns: nothing
*/
void split_to_tokens(char* token_array[], char input_string[]) {
    char *saveptr;
    int i = 0;

    token_array[i] = strtok_r(input_string, ",", &saveptr);
    while(token_array[i] != NULL)
        token_array[++i] = strtok_r(NULL, ",", &saveptr);
}
