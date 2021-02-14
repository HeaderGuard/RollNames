RollNames : *.o
	gcc --std=c99 -o RollNames -O2 *.o
	rm *.o
*.o : *.c
	gcc --std=c99 -c -O2 *.c
clean : 
	rm *.o RollNames
	clear
debug :
	gcc --std=c99 -g -o debug *.c
install :
	sudo cp ./RollNames /usr/local/bin

