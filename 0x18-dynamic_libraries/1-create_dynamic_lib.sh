#!/bin/bash
C_FILES=$(ls *.c)
for file in $C_FILES; do
	gcc -Wall -Wextra -Werror -pedantic -c -fPIC "$file"
done
gcc -shared -o liball.so *.o
rm -f *.o

echo "Dynamic library liball.so created successfully!"
