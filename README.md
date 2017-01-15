# Get Next Line

### Overview
What this program does is it reads opened file descriptors passed in as arguments into the character array, that is also passed in as an argument. The first call to this function would read the first line, then the second line would read the second line, then the third line would read the third line, and etc, until all the lines from the given file have been read.  

### Things Learned from doing this project
* Static Variables
* Being able to write and use structs.
	* In this particular case, I wrote out a modified linked list
* Being able to properly free character arrays whos memory was implicitly allocated.
* Being able to properly increment pointers. 

### Possible Areas of Improvement
* Rewrite struct so that it integrates with the linked list struct that I had already written.
	* Possibly get rid of init_fdhandle function.  

### Special Thanks
Thank you to, in no particular order, Hanu Kunduru, Wiley Debbs, Abraham Nieto, William Lee, Carlos Ramirez, Tony Padilla, Jose Aleman, Alexander Chen, Nathaniel Bunn, Jose Gonzalez, Levin Weinstein, Vladislav Yudushkin, Daniel Nelson, Robert Passafaro, Sihyeon Jang, Ashwin Ganesh, Matthew Hurd, and Ezekiel Liu. In one form or another, these individuals gave me advice, peer-reviewed, and went through my code to make sure that it what it was supposed to do, and then some. I'd also like to thank the people at 42 for coming up with this project and giving me the opportunity to prove myself through this assignment. 