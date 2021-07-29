""" A school organizes a MCQ based Exam for students as following:
Exam have 4 sections Physics , Math , Chemistry and Computer .
Each section has 25 question.
There are 4 options ( A , B , C and D ) for each question, in which one of them are correct.
Each question has 4 marks for correct and -1 mark for wrong but no marks deduction for
non attempt's question.
After exam, organizer provide a text file responsesheet.txt with response of one student
in given below format. Unattempt answer is represented by NA """

f = open("responsesheet.txt",'r')
result = {}
subj = {}
stname = f.readline().rstrip('\n')
while (stname != 'END'):
    for j in range(0,4):
        sub = f.readline().rstrip('\n')
        marks = 0
        for i in range(1,26):
            r = (f.readline()).split('-')
            r[2] = r[2].rstrip('\n')
            if r[2] != 'NA':
                if (r[1] == r[2]):
                    marks += 4
                else:
                    marks -= 1
        subj[sub] = str(marks)
        d = subj.copy()
    result[stname] = d
    stname = f.readline().rstrip('\n')
f.close()
#output part
for i in result.keys():
    print(i)
    for j in result[i]:
        print(j,'=',str(result[i][j]) + '/100')
    print()
