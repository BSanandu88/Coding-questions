""" Assume that there are two versions of a text document: version_1.txt and version_2.txt .
Write a Python program to find the difference between the two versions of this document.
Specifically, print the number of lines in version_2.txt that are NOT present in version_1.txt .
Assume that no two lines in a given file are the same. While processing the files, you can strip all
the lines of beginning and trailing whitespaces. """

# answer 0
def solution():
    f1=open('version_1.txt','r')
    f2=open('version_2.txt','r') #read mode only
    f1lines,f2lines = [],[]
    for line in f1:
        f1lines.append(line.strip())
    for line in f1:
        f2lines.append(line.strip())
    print(len(set(f2lines) - set(f1lines)))
    f1.close()
    f2.close()

#answer 1

def solution():
    f1 = open('version_1.txt','r')
    f2 = open('version_2.txt','r')
    file1 = set()
    for i in f1.readlines():
        file1.add(i.strip())
    file2 = set()
    for i in f2.readlines():
        file2.add(i.strip())
    print(len(file2) - len(file1.intersection(file2)))
    f1.close()
    f2.close()

def write():
    lines = []
    line = input()
    while line:
        lines.append(line)
        line = input()
    v = lines.index('version_2.txt')
    f1 = lines[1 : v]
    f2 = lines[v + 1:]
    for i in range(len(f1)):
        if i != len(f1) - 1:
            f1[i] += '\n'
    for i in range(len(f2)):
        if i != len(f2) - 1:
            f2[i] += '\n'
    with open('version_1.txt','w') as f:
        f.writelines(f1)
    with open('version_2.txt','w') as f:
        f.writelines(f2)


if __name__ == '__main__':
    write()
    solution()