# This code is a proof of concept for a way to tie various executables and
#their outputs together with a command script (whith this one in bash)
#!/bin/bash
# First we'll need a generator
echo Enter amount of numbers to create
read amount
echo $amount | ./generator.exe > file

# Next, we'll send all data in the file to be sorted
content=$(cat file)
echo $amount $content | ./quicksort.exe > sorted_file

# Finally, a program will separate the sorted data into quartiles for analysis
content=$(cat sorted_file)
echo $amount $content | ./analyser.exe > analysed_file

echo # For a little separation between input and output

# Show result of analysis
cat analysed_file
