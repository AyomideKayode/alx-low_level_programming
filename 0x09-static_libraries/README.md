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


- First, I created a ```.c``` file and named it ```complete_functions.c``` then wrote all the prototypes that has been formerly created in previous tasks. Another way would have been to copy the mentioned ```.c``` files from previous tasks. Long process.
- After creating the file, I used the ```gcc -c *.c``` command, to convert the ```.c``` file to ```.o``` file. The command can also be used if I had copied all ```.c``` files from previous tasks. The asterisk(*) would select all ```.c``` files and convert to ```.o```.
- Then, I used the ```ar rcs libmy.a``` command to create the static library named ```libmy.a```.
- And then used the ```ar rcs libmy.a *.o``` command to move all ```.o``` files into the library. Then the ```ar -t libmy.a``` command to check if the ```.o``` files have been moved succesfully. (A list should show on the output containing all ```.o``` files.)
- Finally, the ```nm libmy.a``` to list the symbols stored in the static library we just created.

- For the second task, after creating the ```.sh```. file and writing the script that creates the ```liball.a``` library; I changed modifications to allow it become executable. After pushing to github, Checker kept giving me one error out of five. Details aren't available for now. So I'll properly check again later to see if I can figure it out.

- Update: Turns out the shortcut wasn't exactly ideal. So I had to do it all over because I was having Checker issues with Task 1. What I ended up doing was; I copied all ```.c``` files that had the funtion prototypes given in Task 0. From there, I pretty much used the same steps as explained above.
- Then for Task 1, I corrected the shell script from ```ar -rc liball.a *.o``` to ```ar rcs liball.a *.o```.
- Make it executable. Run it to create the ```liball.a``` file. Git add, commit and push. Voila 😎👌


Courtesy - Kazzywiz [https://twitter.com/kazzy_wiz]
You're welcome.😁✌
