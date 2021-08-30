""" Accept a string from the user and print the encrypted string according to the following
conditions:-
Each letter should be replaced by the letter which is at the same position from reverse in
alphabets like a is replaced by z , b is replaced by y ..... y is replaced by b , z is replaced
by a
Uppercase letters should be in uppercase and lowercase letters should be in lowercase after
conversion.
Each digit should be replaced by a digit which is at the same position from reverse in
(0,1,2...9) like, 0 is replaced by 9 , 1 is replaced by 8 ..... 8 is replaced by 1 and 9 is
replaced by 0 .
Blank space should be replaced by '_' and other types of character remain the same.
 """
#getting input
message1 = input()
alp = "abcdefghijklmnopqrstuvwxyz"
nm = "0123456789"
message2 = ""
#read the each character from msg1 one by one
for i in message1:
    if i.isalpha() == True:
        if i.isupper() == True:
            index = alp.index(i.lower())
            message2 += (alp[25-index]).upper()
        #if char is in lower case
        else:
            index = alp.index(i)
            message2 += (alp[25-index])
    #if char is digit
    elif i.isdigit() == True:
        index = nm.index()
        message2 += (nm[9-index])
    #if char is a blank space
    elif i == " ":
        message2 += "_"
    #for other characters
    else:
        message2 += i
print(message2)
