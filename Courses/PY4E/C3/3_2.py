# 3.3 Write a program to prompt for a score 
# between 0.0 and 1.0. If the score is out of range,
# print an error. If the score is between 0.0 and 1.0,
#  print a grade using the following table:
# Score Grade
# >= 0.9 A
# >= 0.8 B
# >= 0.7 C
# >= 0.6 D
# < 0.6 F
# If the user enters a value out of range, print a suitable error message and exit. For the test, enter a score of 0.85. 

user_input_int = input("Enter number between 0 and 1: ")
x = float(user_input_int)
if x <= -1.0:
    print("Grade out of range")
if x >= 1.0:
    print("Grade out of range")

if x >= 0.9:
    print("A")
elif x >= 0.8:
    print("B")
elif x >= 0.7:
    print("C")
elif x >= 0.6:
    print("D")
elif x < 0.6:
    print("F")