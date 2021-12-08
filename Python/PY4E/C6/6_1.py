# 6.5 Write code using find() and string slicing 
# (see section 6.10) to extract the number at the 
# end of the line below. Convert the extracted value
#  to a floating point number and print it out.

text = "X-DSPAM-Confidence:    0.8475"  # Initial line provided

pos = text.find(":")  # Find the location of the number in a string form
# print(pos)
letter = text[pos+1:] # Removes the ":"
# print(letter)
flt=float(letter) # Converts the String into a float point
print(flt)