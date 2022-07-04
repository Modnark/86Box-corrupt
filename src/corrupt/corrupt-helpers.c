#include <stdint.h>
#include <stdio.h>
#include <string.h>
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
    int size_of_memory = get_memory_size();
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
