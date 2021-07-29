""" The file file_4.txt has a number of sentences on each line. Each sentence is made of certain
number of words. There are no punctuation marks. All words are in lower case. With this
information, answer the following questions:
Find the number of sentences in the file.
Find the number of words in each sentence.
Find the sentence with the maximum number of words in it
Find the frequency of occurrence of words in the file.
Find the set of unique words used in the file. """



f = open('C:\Users\panayazhikom\codingQuestions\Coding-questions\week_8','r')
sentences = []
line = f.readline()
while line:
    words = line.strip().split(' ')
    sentences.append(words)
    line = f.readline()
f.close()
p={}
for sentence in sentences:
    for word in sentence:
        if word not in p:
            p[word] = 0
        p[word] += 1
print(sentences)