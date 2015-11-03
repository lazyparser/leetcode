# Read from the file file.txt and output the tenth line to stdout.
n=`wc -l file.txt | awk '{print $1}'`
(( n >= 10 )) && cat file.txt | head -n 10 | tail -1

