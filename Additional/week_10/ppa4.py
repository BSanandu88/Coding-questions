""" PROBLEM 4
Create a class StringManipulation that receives a list of words wlist at the time of object
creation. The class must have the following methods:
Words_of_length(length) — returns a list of all the words of length length in wlist
Words_starts_with(char) — returns a list of all the words that start with char in wlist
Words_ends_with(char) — returns a list of all the words that end with char in wlist
Palindromes — returns a list of all the words that are palindromes in wlist
Total_words — returns the number of words in wlist
Longest_word — that returns the longest length word in wlist . if list wlist has more than
one longest word then return the first one.
Smallest_word that returns the smallest length word in wlist . if list wlist has more than
one smallest word then return the first one.
Count(word) that returns the total number of occurrences of word in wlist """

#from _typeshed import SupportsReadline


class StringManipulation:
    #create class constructor
    def __init__(self,wlist) -> None:
        self.wlist = wlist[:]
    #word length method
    def Words_of_length(self,length):
        res=[]
        for i in self.wlist:
            if len(i) == length:
                res.append(i)
        return res
    #class method words_starts_with
    def Words_starts_with(self,char):
        res=[]
        for i in self.wlist:
            if i[0]==char:
                res.append(i)
        return res
    #class method words end with
    def Words_end_with(self,char):
        res = []
        for i in self.wlist:
            if i[-1] == char:
                res.append(i)
        return res
    #class method for palindrome
    def Palindromes(self):
        res=[]
        for i in self.wlist:
            if i==i[::-1]:
                res.append(i)
        return res
    #class method for total words
    def Total_words(self):
        return len(self.wlist)
    #class method for longest word
    def Longest_word(self):
        maxword = self.wlist[0]
        for i in self.wlist:
            if len(i) > len(maxword):
                maxword = i
        return maxword
    #class method for smallest word
    def Smallest_word(self):
        minword = self.wlist[0]
        for i in self.wlist:
            if len(i) < len(minword):
                minword = i
        return minword
    #class method for method count
    def Count(self,word):
        return self.wlist.count(word)


word = input().split(' ')
s = StringManipulation(word)
#calling the methods
print(s.Words_of_length(6))
print(s.Words_starts_with('s'))
print(s.Words_end_with('l'))
print(s.Palindromes())
print(s.Total_words())
print(s.Longest_word())
print(s.Smallest_word())
print(s.Count('it'))

