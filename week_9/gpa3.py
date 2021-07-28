""" Create a class TimeConverter that receive time in seconds at the time of object creation and
has the following method:
Second_to_Minutes that converts the value of time into minutes and returns the output in
minutes min second sec format. For example: if seconds is 170, the method should return
2 min 50 sec .
Second_to_Hours that converts the value of time into hours and returns the output in
hours hr minutes min and seconds sec format. For example: if seconds is 170, the
method should return 0 hr 2 min 50 sec
Second_to_Days that converts the value of time into days and returns the output in days
days hours hr minutes min and seconds sec format. For example: if seconds is 170, the
method should return 0 days 0 hr 2 min 50 sec """

class TimeConverter:
    def __init__(self,time) -> None:
        self.time = time
    def Second_to_Minutes(self):
        m = self.time // 60
        s = self.time % 60
        return (str(m) + ' min ' + str(s) + ' sec')
    def Second_to_Hours(self):
        m = self.time // 60
        s = self.time % 60
        h = m // 60
        m = m % 60
        return (str(h) + ' hr' + str(m) + ' min' + str(s) + ' sec')
    def Second_to_Days(self):
        m = self.time // 60
        s = self.time % 60
        h = m // 60
        m = m % 60
        d = h // 24
        h = h % 24
        return (str(d) +' days' + str(h) + ' hr' + str(m) + ' min' + str(s) +' sec')

sec = int(input())
a = TimeConverter(sec)
print(a.Second_to_Minutes())
print(a.Second_to_Hours())
print(a.Second_to_Days())