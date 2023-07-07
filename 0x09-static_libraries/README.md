Tasks on Static Libraries

Concepts to be learned in this repository:

- what a static library is
- how it works
- how to create one ar -cr
- how to use it

Description of what each file shows:

- main.h - included function prototypes of functions in library
- create_static_lib.sh - shell script to compile pre linking and create static library from all the ```.c``` files
- liball.a - created this static library containing all functions listed

First, I created a ```.c``` file and named it ```complete_functions.c``` then wrote all the prototypes that has been formerly created in previous tasks.
Another way would have been to copy the mentioned ```.c``` files from previous tasks. Long process.
After creating the file, I used the ```gcc -c *.c``` command, to convert the ```.c``` file to ```.o``` file. The command can also be used if I had copied all ```.c``` files from previous tasks. The asterisk(*) would select all ```.c``` files and convert to ```.o```.
Then, I used the ```ar rcs libmy.a``` command to create the static library named ```libmy.a```.
And then used the ```ar rcs libmy.a *.o``` command to move all ```.o``` files into the library.
Then the ```ar -t libmy.a``` command to check if the ```.o``` files have been moved succesfully. (A list should show on the output containing all ```.o``` files.)
Finally, the ```nm libmy.a``` to list the symbols stored in the static library we just created.

Courtesy - Kazzywiz [https://twitter.com/kazzy_wiz]
You're welcome.😁✌
