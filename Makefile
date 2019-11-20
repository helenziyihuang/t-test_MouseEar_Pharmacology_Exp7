CXX = g++

BINARIES = tCal

all: ${BINARIES}

test: ${BINARIES}
		./tCal

tCal: tCalculator.o
	${CXX} $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
