#3.1 Write a program to prompt the user for hours and rate per hour using input to compute gross pay. Pay the hourly rate for the hours up to 40 and 1.5 times the hourly rate for all hours worked above 40 hours. Use 45 hours and a rate of 10.50 per hour to test the program (the pay should be 498.75). You should use input to read a string and float() to convert the string to a number. Do not worry about error checking the user input - assume the user types numbers properly. 

sh = input("Enter Hours: ") 
sr = input("Enter rate: ") 
fh = float(sh) #Hours 
fr = float(sr) #rate 
# print(fh,fr) 
 
if fh > 40: 
    reg = fh*fr 
    over = (fh - 40) * (fr *0.5) 
    xp = reg + over 
    print(xp) 
else: 
    print("Regular") 
    normal = fh * fr 
    print("Pay: ", normal)