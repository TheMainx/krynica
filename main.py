import os
filename = 'input.txt'
if os.path.isfile(filename) == False:
    print("Sorry buddy, this file does not exist :(")
else:
    with open(filename, 'r') as file:
        print("This files Exists:) It is your lucky day!")
        print("Here is the file: ")
        data = file.read()
        print(data)
