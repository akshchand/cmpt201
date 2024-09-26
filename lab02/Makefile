# define compiler and flags
CC:=gcc
CFLAGS:=-Wall -std=c11

# define targets
TARGET1 = loggy
TARGET2 = triggy
TARGET3 = randy

# define source files
SRC1 = logConversion.c
SRC2 = trig.c
SRC3 = randRange.c

# create the loggy executable
$(TARGET1): $(SRC1)
	$(CC) $(CFLAGS) -o $(TARGET1) $(SRC1) -lm

# create the triggy executable
$(TARGET2): $(SRC2)
	$(CC) $(CFLAGS) -o $(TARGET2) $(SRC2) -lm
	
# create the randy executable
$(TARGET3): $(SRC3)
	$(CC) $(CFLAGS) -o $(TARGET3) $(SRC3) -lm

# Phony clean target. Deletes executables
.PHONY: clean
clean:
	rm -i $(TARGET1) $(TARGET2) $(TARGET3)

# Phony install target. Moves executables into bin folder, assuming it already exists
.PHONY: install
install: $(TARGET1) $(TARGET2) $(TARGET3)
	mv $(TARGET1) $(TARGET2) $(TARGET3) ./bin/

# Pony package target. Archives and compresses important files (.c, .h, and Makefile)
.PHONY: package
package:
	tar -czvf tarAndcompress.tar.gz *.c *.h Makefile

# pattern expansion
%.o:%.c
	$(CC) $(CFLAGS) -c $<