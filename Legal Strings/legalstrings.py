'''
Encoding schemes are often used in situations requiring encryption or information storage/transmission
economy. Here, we develop a simple encoding scheme that encodes particular types of words with five
or fewer (lower case) letters as integers.
Consider the English alphabet {a,b,c,...,z}. Using this alphabet, a set of valid words are to be
formed that are in a strict lexicographic order. In this set of valid words, the successive letters of a
word are in a strictly ascending order; that is, later letters in a valid word are always after previous
letters with respect to their positions in the alphabet list {a,b,c,...,z}. For example,
abc aep gwz
are all valid three-letter words, whereas
aab are cat
are not.
For each valid word associate an integer which gives the position of the word in the alphabetized
list of words. That is:
a -> 1
b -> 2
.
.
z -> 26
ab -> 27
ac -> 28
.
.
az -> 51
bc -> 52
.
.
vwxyz -> 83681
Your program is to read a series of input lines. Each input line will have a single word on it, that
will be from one to five letters long. For each word read, if the word is invalid give the number ‘0’. If
the word read is valid, give the word’s position index in the above alphabetical list.
Input
The input consists of a series of single words, one per line. The words are at least one letter long and
no more that five letters. Only the lower case alphabetic {a,b,...,z} characters will be used as input.
The first letter of a word will appear as the first character on an input line.
The input will be terminated by end-of-file.
Output
The output is a single integer, greater than or equal to zero (0) and less than or equal 83681. The first
digit of an output value should be the first character on a line. There is one line of output for each
input line.
Sample Input
z
a
cat
vwxyz
Sample Output
26
1
0
83681
'''
import time
from itertools import *
inputstrings = []  #stores the inputs in a list
wordsdict = {}  #dictionary containing all possible words along with their positions(ranks)
finalvalues = {}    #dictionary that stores the input words and their ranks
possiblewords = []  #list of all possible words

#this list contains all of the alphabets from a to z. chr method converts ascii values to their corresponding letter and ord method converts alphabets to their 
#corresponding ascii values. we use range to iterate over the alphabets
alphabets = [chr(i) for i in range(ord('a'), ord('z') + 1)]     

#since the problem statement requires us to input values until EOF is reached we use an infinite loop to input values and append them to the input strings list
#and break the loop when no input is given
while True:
    word = input()
    if word:
        inputstrings.append(word)
    else:
        break
start_time = time.time()
#sice the problem statement requires us to work on words of max length 5, we use range(1,6)
#the combinations method imported from itertools creates a tuple with no repition of length i in alphabetical order
#all of the possible words are stored in possible words list
for i in range(1, 6):
    for row in combinations(alphabets, i):
        possiblewords.append(''.join(row))
#now we create a dictionary using enumerate to give us the position and store them in wordsdict
for position,word in enumerate(possiblewords):
    wordsdict[word] = position + 1
#now we check for each string in the inputstrings list if it is present in wordsdict(if it is a valid string) we add it to the finalvalues dictionary.
#if it is not a valid string i.e., if it is nor a member of wordsdict, we store it's value as 0 according to the problem statement
for i in inputstrings:
    if i in wordsdict:
        finalvalues[i] = wordsdict[i]
    else:
        finalvalues[i] = 0
#we print the values from the dict
for i in finalvalues:
    print(finalvalues[i])
print("--- %s seconds ---" % (time.time() - start_time))


