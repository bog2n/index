all:
	g++ main.cpp -lm -g -o main
clean:
	if [ -e main ]; then rm main; fi
