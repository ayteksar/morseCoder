//26 letters + whitespace

#include<Windows.h>
#include<iostream>

int soundNumber(int soundLetter)
{
	
	switch (soundLetter)
	{
	case 32:	//whitespace
		std::cout << "Please Wait, Seconds word will start...\n";
		PlaySound(TEXT("ws.wav"), NULL, SND_SYNC);
		return true;

	case 'a':	//a
	case 'A':	//A
		std::cout << "Play sound for letter A: \n";
		PlaySound(TEXT("a.wav"), NULL, SND_SYNC);
		return true;

	case 'b':	//b
	case 'B':	//B
		std::cout << "Play sound for letter B: \n";
		PlaySound(TEXT("b.wav"), NULL, SND_SYNC);
		return true;
	
	case 'c':	//c
	case 'C':	//C
		std::cout << "Play sound for letter C: \n";
		PlaySound(TEXT("c.wav"), NULL, SND_SYNC);
		return true;

	case 'd':	//d
	case 'D':	//D
		std::cout << "Play sound for letter D: \n";
		PlaySound(TEXT("d.wav"), NULL, SND_SYNC);
		return true;

	case 'e':	//e
	case 'E':	//E
		std::cout << "Play sound for letter E: \n";
		PlaySound(TEXT("e.wav"), NULL, SND_SYNC);
		return true;

	case 'f':	//f
	case 'F':	//F
		std::cout << "Play sound for letter F: \n";
		PlaySound(TEXT("f.wav"), NULL, SND_SYNC);
		return true;

	case 'g':	//g
	case 'G':	//G
		std::cout << "Play sound for letter G: \n";
		PlaySound(TEXT("g.wav"), NULL, SND_SYNC);
		return true;

	case 'h':	//h
	case 'H':	//H
		std::cout << "Play sound for letter H: \n";
		PlaySound(TEXT("h.wav"), NULL, SND_SYNC);
		return true;
	
	case 'i':	//ý
	case 'I':	//I
		std::cout << "Play sound for letter I: \n";
		PlaySound(TEXT("i.wav"), NULL, SND_SYNC);
		return true;

	case 'j':	//j
	case 'J':	//J
		std::cout << "Play sound for letter J: \n";
		PlaySound(TEXT("J.wav"), NULL, SND_SYNC);
		return true;

	case 'k':	//k
	case 'K':	//K
		std::cout << "Play sound for letter K: \n";
		PlaySound(TEXT("k.wav"), NULL, SND_SYNC);
		return true;

	case 'l':	//l
	case 'L':	//L
		std::cout << "Play sound for letter L: \n";
		PlaySound(TEXT("L.wav"), NULL, SND_SYNC);
		return true;

	case 'm':	//m
	case 'M':	//M
		std::cout << "Play sound for letter M: \n";
		PlaySound(TEXT("m.wav"), NULL, SND_SYNC);
		return true;

	case 'n':	//n
	case 'N':	//N
		std::cout << "Play sound for letter N: \n";
		PlaySound(TEXT("n.wav"), NULL, SND_SYNC);
		return true;

	case 'o':	//o
	case 'O':	//O
		std::cout << "Play sound for letter O: \n";
		PlaySound(TEXT("o.wav"), NULL, SND_SYNC);
		return true;

	case 'p':	//p
	case 'P':	//P
		std::cout << "Play sound for letter P: \n";
		PlaySound(TEXT("p.wav"), NULL, SND_SYNC);
		return true;

	case 'r':	//r
	case 'R':	//R
		std::cout << "Play sound for letter R: \n";
		PlaySound(TEXT("r.wav"), NULL, SND_SYNC);
		return true;

	case 's':	//s
	case 'S':	//S
		std::cout << "Play sound for letter S: \n";
		PlaySound(TEXT("s.wav"), NULL, SND_SYNC);
		return true;

	case 't':	//t
	case 'T':	//T
		std::cout << "Play sound for letter T: \n";
		PlaySound(TEXT("t.wav"), NULL, SND_SYNC);
		return true;

	case 'u':	//u
	case 'U':	//U
		std::cout << "Play sound for letter U: \n";
		PlaySound(TEXT("u.wav"), NULL, SND_SYNC);
		return true;

	case 'v':	//v
	case 'V':	//V
		std::cout << "Play sound for letter V: \n";
		PlaySound(TEXT("v.wav"), NULL, SND_SYNC);
		return true;

	case 'y':	//y
	case 'Y':	//Y
		std::cout << "Play sound for letter Y: \n";
		PlaySound(TEXT("y.wav"), NULL, SND_SYNC);
		return true;

	case 'z':	//z
	case 'Z':	//Z
		std::cout << "Play sound for letter Z: \n";
		PlaySound(TEXT("z.wav"), NULL, SND_SYNC);
		return true;

	case 'q':	//q
	case 'Q':	//Q
		std::cout << "Play sound for letter Q: \n";
		PlaySound(TEXT("q.wav"), NULL, SND_SYNC);
		return true;

	case 'w':	//w
	case 'W':	//w
		std::cout << "Play sound for letter W: \n";
		PlaySound(TEXT("w.wav"), NULL, SND_SYNC);
		return true;

	case 'x':	//x
	case 'X':	//X
		std::cout << "Play sound for letter X: \n";
		PlaySound(TEXT("x.wav"), NULL, SND_SYNC);
		return true;

	default:
		std::cout << '\a';
		return true;
	}
}