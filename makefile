all:
	g++ main.cpp -lm -o main
clean:
	if [ -e main ]; then rm main; fi
