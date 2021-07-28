#   PROBLEM -- 4
#moderate difficult
class UserLoginInfo:
    def __init__(self,UserName,Password) -> None:
        self.old_passwords = [Password]
        self.UserName = UserName

    def is_valid(self,pwd):
        if len(pwd) < 8:
            return False
        if pwd[0].istitle() != True:
            return False
        if pwd.isalnum() != True:
            return False
        else:
            return False
    
    def ChangePassword(self,newpass):
        if newpass in self.old_passwords:
            return 'Password already in use'
        else:
            if self.is_valid(newpass) == True:
                self.old_passwords.append(newpass)
                return 'Password updated successfully'
            else:
                return 'Invalid password'
    def RetrievePassword(self):
        return self.old_passwords[-1]
    
    def login(self,user,pas):
        if pas == self.old_passwords[-1] and user == self.UserName:
            return 'Welcome' + str(user)
        else:
            return 'Username or password incorrect'

u1 = UserLoginInfo(input(),input())
a = u1.ChangePassword(input())
b = u1.ChangePassword(input())
c = u1.ChangePassword(input())
d = u1.Login(input(),input())
e = u1.Login(input(),input())
f = u1.RetrievePassword()
print(a)
print(b)
print(c)
print(d)
print(e)
print(f)

