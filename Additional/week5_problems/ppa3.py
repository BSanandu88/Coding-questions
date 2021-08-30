#for .py or.cpp
def is_code(path):
    if path[-3:]=='.py' or path[-4:]=='.cpp':
        return True
    return False

#look for .jpg or .png extension
def is_image(path):
    if path[-4:] == '.jpg' or path[-4:] == '.png':
        return True
    return False

#check if it is code or image
def is_file(path):
    return is_code(path) or is_image(path)

#A folder is a negation of a file
def is_folder(path):
    return not is_file(path)

def level(path):
    return len(path.strip('/').split('/'))


#suffix code block
path = input()
print(is_folder(path))
print(is_file(path))
print(is_code(path))
print(is_image(path))
print(level(path))