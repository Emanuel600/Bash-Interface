# This code is a proof of concept for a way to tie various executables and
#their outputs together with a command script (whith this one in bash)
#!/bin/bash
# Call: ./interface.sh $amount
echo "$1" | ./generator.exe > file.dat

# Next, we'll send all data in the file to be sorted

echo "$1" file.dat | ./quicksort.exe > sorted_file

# Finally, a program will separate the sorted data into quartiles for analysis

# WIP

#content=$(cat sorted_file)
#echo $amount $content | ./analyser.exe > analysed_file

echo # For a little separation between input and output

# Show result of analysis
cat sorted_file #analysed_file

# The only reason for there being multiple files is that it makes it easier
#to view all outputs and see if something went wrong along the way. They can
#all be changed to "file" without compromising the code.

echo # Since the file doesn't end with a new line
