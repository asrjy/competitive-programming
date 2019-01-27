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


