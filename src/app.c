#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <commands.h>

// Our executors
int create_question(int, char**);
int list_questions(int, char**);
int show_question(int, char**);

// The list of our supported commands
struct command commands[] = {
    { "new",  create_question, "create a new question",
        "Prompts for question data" },
    { "list", list_questions,  "list all questions",
        "Lists all questions, no arguments required" },
    { "show", show_question,   "shows a question",
        "Show a question, requires the id of the question "
        "as a second parameter" },
    { NULL, NULL, NULL, NULL } // End of the list
};


// TODO
int create_question(int argc, char** argv) {
    printf("new\n");
    return 1;
}

// TODO
int list_questions(int argc, char** argv) {
    return 1;
}

// TODO
int show_question(int argc, char** argv) {
    return 1;
}

int main(int argc, char** argv) {
    return command_exec(commands, argc, argv);
}
