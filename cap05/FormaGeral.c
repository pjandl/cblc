// Função B
int B() {
	// corpo da função B
	:
}

// Função A
int A() {
	// corpo da função A
	:
	x = B(); // uso da função B
	:
}

// Função principal
int main () {
	// corpo da função principal
	:
	y = A(); // uso da função A
	:
}


