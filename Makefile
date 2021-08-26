.PHONY : all debug clean

all:
	cd phone_book && make

debug:
	cd phone_book && make debug
	
clean:
	cd phone_book && make clean
