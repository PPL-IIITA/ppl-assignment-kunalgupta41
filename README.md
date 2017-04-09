# ppl-assignment-kunalgupta41
Submitted by-Kunal Gupta,IIT2015007,Section-A,Btech IT sem IV
ppl-assignment-kunalgupta41 created by GitHub Classroom

The repository contains nine folders ppl_q1 to ppl_q8 and a documentation folder which contains documentation for ppl_q3-ppl_q8.Documentations of ppl_q1 and ppl_q2 are in their respective folders. Each of the folders except "Documentation: contains the Source Codes, Class Diagram and the output files. The codes are written in cpp.

# GETTING STARTED

Project was made and tested in Ubuntu 16.10.
C++11 Complier or above required.
The Project was built using: Sublime Text 3.
The Documentation was made using Doxygen and Latex.
The class Diagrams were made using StarUML and Visual Paradigm.

# PREREQUISITES

g++ Compiler.
BUILDING AND RUNNING

# VALUES

Number of boys,girls and gifts taken are 80,60 and 100 respectively.
Nothing is inputted from the console.
The value of K (if required) is taken through rand() function.


# QUESTION 1

Open the Folder ppl_q1
Build the code using the following command (random input utility is included in the library itself):

g++ q1.cpp input.cpp The_Generous_Boy.cpp The_Choosy_Girl.cpp

And then give the command:

./a.out

This will print the relationships in the console and a output_1.txt file will be generated.

# QUESTION 2

Open the Folder ppl_q2
Build the code using the following command (random input utility is included in the library itself):

g++ q2.cpp input_gifts.cpp The_Utility_Gifts.cpp The_Choosy_Girl.cpp The_Generous_Boy.cpp couple.cpp

And then give the command:

./a.out

then give the value of k in terminal.
This will print the gift exchanges , k happiest couples, k most compatible couples in the console and output will be printed in output_2.txt file


# QUESTION 3

1. Open the Folder ppl_q3
2. Open terminal and change the address to this folder directory.
3. enter this command to build the code:
          g++ q3.cpp input_gifts.cpp The_Utility_Gifts.cpp The_Choosy_Girl.cpp The_Generous_Boy.cpp couple.cpp
4. then hit the command ./a.out
5. This will print the gifting between all the couples and the 'k' most happiest and compatible couples along with their happiness and compatibility values on console and the same result will also be stored in ouput_3.txt file.Value of k was generated randomly.


# QUESTION 4

Open the Folder ppl_q4

Open terminal and change the address to ppl_q4 folder directory.

Build the code using the following command:

g++ q2.cpp input_gifts.cpp The_Utility_Gifts.cpp The_Choosy_Girl.cpp The_Generous_Boy.cpp couple.cpp

Then enter the command ./a.out.This will print the randomly generated value of "k" and the k least happy couples on console
 
 Again Build the code using the following command:
 
 g++ q4_input.cpp The_Choosy_Girl.cpp The_Generous_Boy.cpp q4.cpp

now again enter the command ./a.out. This will print the new pairs who brokeup and the same will also be printed in q4_output.txt
          

# QUESTION 5

Open the Folder ppl_q5

Open terminal and change the address to ppl_q5 folder directory.

Build the code using the following command:

g++ input_q5.cpp The_Choosy_Girl.cpp The_Generous_Boy.cpp q5.cpp The_Utility_Gifts.cpp couple.cpp

then enter the command ./a.out

This will print all the couples formed followed by the randomly generated value of k and the k most happiest couples along with their happiness in console.

all the couples formed are then stored in output_5.txt and "k" most happy couples along with their happiness value are stored in k_most_happy_q5.txt file present in same folder.


# QUESTION 6

Open the Folder ppl_q6

Open terminal and change the address to ppl_q7 folder directory.

Build the code using the following command:

g++ input_q6.cpp The_Choosy_Girl.cpp The_Generous_Boy.cpp q6.cpp The_Utility_Gifts.cpp couple.cpp

then enter the command ./a.out

this will print originally formed couples,random value of t,couples with happiness less than t and newly formed couples on console.

couples with happiness less than t broke up and after reallotment of new parteners they are stored in "new_couples.txt" file



# QUESTION 7

Open the Folder ppl_q7

Open terminal and change the address to ppl_q7 folder directory.

Build the code using the following command:

g++ input_q7.cpp The_Choosy_Girl.cpp The_Generous_Boy.cpp q7.cpp couple.cpp

then enter the command ./a.out

this will  print the randomly generated choice(array,binary search or hashing) and the relationship status of some preinputted boys and the same will be stored in output_q7.txt file.


# QUESTION 8

Open the Folder ppl_q8

Open terminal and change the address to ppl_q8 folder directory.

Build the code using the following command:

g++ q8.cpp input_q8.cpp The_Utility_Gifts.cpp The_Choosy_Girl.cpp The_Generous_Boy.cpp couple.cpp

then enter the command ./a.out

This will print the randomly generated choice and gifting among all couples on console.

gifting among all couples is also stored in output_8.txt

### PLEASE NOTE THAT I AM STORING THE RESULT OF GIFTING IN OUTPUT_8.TXT IN BOTH CASES(case:1 IF WE USE ALGO OF Q2 and case 2 : if we use the algo that each type of gift is to be alloted first).SO If you see that not all types of gifts are alloted first in output_8.txt that just means that random choice 1 was generated and hence algo of q2 ran.And if you see that gifts of all types are alloted first then that means random value 2 was generated and latter algo ran.
