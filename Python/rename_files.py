import os
import re

path = "/home/Competitive_Programming/CPP/July/Week_1"

for file in os.listdir(path):

    file_without_ext = os.path.splitext(file)[0]
    extension = os.path.splitext(file)[1]
    
    name = re.split(r"[()]", file_without_ext)
    new_file_name = name[1] + "(" + name[0] + ")" + extension
    os.rename(os.path.join(path,file),os.path.join(path,new_file_name))
    print(new_file_name)