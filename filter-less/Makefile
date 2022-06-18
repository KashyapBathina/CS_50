// ./filter -g INFILE.bmp OUTFILE.bmp
// ./filter -s INFILE.bmp OUTFILE.bmp
// ./filter -r INFILE.bmp OUTFILE.bmp
// ./filter -b INFILE.bmp OUTFILE.bmp

filter:
	clang -ggdb3 -O0 -Qunused-arguments -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow -lm -o filter filter.c helpers.c
