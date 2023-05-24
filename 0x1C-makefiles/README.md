## **Introduction to C - Makefiles

 This project entails introductory concepts to Makefiles.


 ### *Learning Objectives*:
 - What are make, Makefiles
 - When, why and how to use Makefiles
 - What are rules and how to set and use them
 - What are explicit and implicit rules
 - What are the most common / useful rules
 - What are variables and how to set and use them

### The description of the rules and variables used in the files to complete the project is as follows:

A. Rules
| Rule | Description |
| ------------- | ------------- |
|all | Builds the executable |
|clean | Deletes all Emacs and Vim temporary files along with the executable |
|oclean | Deletes the object files |
|fclean | Deletes all Emacs and Vim temporary files, the executable, and the object files |
|re | Forces recompilation of all source files |

B. Variables
| Variable  | Description |
| ------------- | ------------- |
| CC | The compiler to be used |
| SRC | The .c files |
| OBJ | The .o files |
| NAME | The name of the executable |
| RM | The program to delete files |
| CFLAGS | Compiler flags: -Wall -Werror -Wextra -pedantic |
