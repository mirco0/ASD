compile:
	gcc -c src/*.c -Iheaders 
	gcc *.o -Iheaders
clean:
	rm *.o