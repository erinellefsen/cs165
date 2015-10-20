changecapitals: changecapitals.o iscapital.o
	cc -o changecapitals changecapitals.o iscapital.o
changecapitals.o: iscapital.c iscapital.h
	cc -c iscapital.c
iscapital.o: changecapitals.c iscapital.h
	cc -c changecapitals.c
clean:
	rm *.o
	rm changecapitals
