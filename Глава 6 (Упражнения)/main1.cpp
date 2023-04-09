#include <iostream>

class Token {
public:
	char kind;
	double value;
};
class Token_stream {
public:
	Token get();
	void putback(Token Tt);
private:
	bool full{ false };
	Token buffer;
};

void Token_stream::putback(Token t) {
	if (full)	std::cerr << "putback(): buffer full \n";
	buffer = t;
	full = true;
}
Token Token_stream::get() {
	if (full) {
		full = false;
		return buffer;
	}
	char ch;
	std::cin >> ch;

	switch (ch)
	{
	case ';':
	case 'q':
	case '(': case ')': case '+':
	case '-': case '*': case '/':
		return Token{ch};
	case '.':
	case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9': {
		std::cin.putback(ch);
		double val;
		std::cin >> val;
		return Token{ '8', val };
	}
	default:
		std::cerr << "No leksema \n";
	}

}

Token_stream ts;
double expression();

double primary() {
	Token t = ts.get();
	switch (t.kind) {
	case '(': {
		double d = expression();
		t = ts.get();
		if (t.kind != ')') {
			std::cerr << "Error ) \n";
		}
		return d;
	}
	case '8':
		return t.value;
	default:
		std::cerr << "Pervihmoe wyrashenie \n";
	}
}
double term() {
	Token t1{ '+' };

	double left = primary();
	Token t = ts.get();
	while (true) {
		switch (t.kind) {
		case '*':
			left *= primary();
			t = ts.get();
			break;

		case '/': {
			double d = primary();
			if (d == 0) {
				std::cerr << "Delenie na 0 \n";
			}
			left /= d;
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);
			return left;
		}

	}
}
double expression() {
	double left = term();
	Token t = ts.get();
	while (true) {
		switch (t.kind) {
		case '+':
			left += term();
			t = ts.get();
			break;

		case '-':
			left -= term();
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;
		}

	}
}

int main() {
	try {
		while (std::cin) {
			std::cout << expression() << "\n";
		}
	}
	catch (...) {
		std::cerr<<"Iskl\n";
		return 2;
	}
}

