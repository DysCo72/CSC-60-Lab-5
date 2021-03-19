CC = gcc

recVolArea: lab5.o open_in_file.o open_out_file.o find_box_values.o print_headers.o lab5.h
		$(CC) lab5.o open_in_file.o open_out_file.o find_box_values.o print_headers.o -o recVolArea

lab5.o: lab5.c lab5.h
		$(CC) -c lab5.c

open_in_file.o: open_in_file.c lab5.h
		$(CC) -c open_in_file.c

open_out_file.o: open_out_file.c lab5.h
		$(CC) -c open_out_file.c

find_box_values.o: find_box_values.c lab5.h
		$(CC) -c find_box_values.c

print_headers.o: print_headers.c lab5.h
		$(CC) -c print_headers.c
