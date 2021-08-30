""" Write a function convertToRecord(filename)
Accept a comma separated csv file, for example : `filename = "scores_dataset.csv"
Return a list of dictionaries, each dictionary represents a row (a student record) on the csv
file.
Note:
The dictionary form of the record should contain the numerical values as integer datatype.
The strings on the first line (separated by comma) of the csv file forms the keys of the
dictionary
Below is the dataset, which is a comma separated file. The header rows has the column names
and subsequent rows are student records.
scores_dataset.csv
SeqNo,Name,Gender,DateOfBirth,CityTown,Mathematics,Physics,Chemistry,Total
0,Bhuvanesh,M,7 Nov,Erode,68,64,78,210
1,Harish,M,3 Jun,Salem,62,45,91,198
2,Shashank,M,4 Jan,Chennai,57,54,77,188
3,Rida,F,5 May,Chennai,42,53,78,173
4,Ritika,F,17 Nov,Madurai,87,64,89,240
5,Akshaya,F,8 Feb,Chennai,71,92,84,247
6,Sameer,M,23 Mar,Ambur,81,82,87,250
7,Aditya,M,15 Mar,Vellore,84,92,76,252
8,Surya,M,28 Feb,Bengaluru,74,64,51,189
9,Clarence,M,6 Dec,Bengaluru,63,88,73,224
10,Kavya,F,12 Jan,Chennai,64,72,68,204
11,Rahul,M,30 Apr,Bengaluru,97,92,92,281
12,Srinidhi,F,14 Jan,Chennai,52,64,71,187
13,Gopi,M,6 May,Madurai,65,73,89,227
14,Sophia,F,23 July,Trichy,89,62,93,244
15,Goutami,F,22 Sep,Theni,76,58,90,224
16,Tauseef,M,30 Dec,Trichy,87,86,43,216
17,Arshad,M,14 Dec,Chennai,62,81,67,210
18,Abirami,F,9 Oct,Erode,72,92,97,261
19,Vetrivel,M,30 Aug,Trichy,56,78,62,196
20,Kalyan,M,17 Sep,Vellore,93,68,91,252
21,Monika,F,15 Mar,Bengaluru,78,69,74,221
22,Priya,F,17 Jul,Nagercoil,62,62,57,181
23,Deepika,F,13 May,Bengaluru,97,91,88,276
24,Siddharth,M,26 Dec,Madurai,44,72,58,174
25,Geeta,F,16 May,Chennai,87,75,92,254
26,JK,M,22 Jul,Chennai,74,71,82,227
27,Jagan,M,4 Mar,Madurai,81,76,52,209
28,Nisha,F,10 Sep,Madurai,74,83,83,240
29,Naveen,M,13 Oct,Vellore,72,66,81,219
 """
def convertToRecord(filename):
    f = open(filename,'r')
    f_ = f.readlines()
    scores = []
    heads = f_[0].strip().split(',')
    for i in f_[1:]:
        d={}
        for j in range(len(heads)):
            row = i.strip().split(',')
            if row[j].isdigit():
                d[heads[j]] = int(row[j])
            else:
                d[heads[j]] = row[j]
        scores.append(d)
    return scores

scores = convertToRecord('scores_dataset.csv')
print(scores)



