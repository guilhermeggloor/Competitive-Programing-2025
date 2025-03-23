# Nome do compilador
CXX = g++

# Flags do compilador
CXXFLAGS = -Wall -std=c++20 -O2

# Regra padrão (compilar um arquivo .cpp para o executável com nome especificado)
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ -lm

# Limpar executáveis gerados
clean:
	rm -f $(basename $(wildcard *.cpp))
