.PHONY = clean all

all : 
	cd BugDetective; make
	cd Sensor; make
	cd Shapes; make
	cd Timer; make
	cd Control; make
	cd BD_Check; make

clean:
	cd BugDetective; rm -f a.exe
	cd Shapes; rm -f a.exe
	cd Sensor; make clean
	cd Timer; make clean
	cd Control; make clean
	cd BD_Check; rm -f a.exe
	