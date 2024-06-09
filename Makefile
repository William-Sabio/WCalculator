g=g++
flags=-Ofast -o
src_path=src/main.cpp
bin_path=bin/Wcalculator
all: build
help:
	@echo -e "Makefile Help:\nhelp - Exibe essa mensagem.\nbuild - Inicia a compilação do source.\nclean - Limpa o arquivo da compilação (binário)."
build: src/main.cpp
	@if [ ! -d 'bin' ];then \
		mkdir -p bin; \
	fi
	$(g) $(flags) $(bin_path) $(src_path)
clean:
	@if [ -d 'bin' ]; then \
		rm -rf ./bin; \
	else \
		echo "Não há nada."; \
	fi