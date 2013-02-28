all: pdf

dvi: book.dvi
pdf: book.pdf

clean:
	rm -f *.dvi *.log *.toc *.aux

TEX = book.tex intro.tex PION.tex CPU_table.tex \
	keil/keil.tex keil/install.tex keil/*.jpg keil/cfg/keilconfig.tex \
	hardware/*.jpg hardware/*.tex \
	stlink/*.tex stlink/*.jpg \
	blink/*.tex \
	QA/*.tex \
	apps/*.tex apps/*.jpg \
	Makefile
	
book.toc: $(TEX)
	pdflatex $(TEX)
	
book.pdf: book.toc
	pdflatex $(TEX)

book.dvi: $(TEX)
	latex $< && latex $< && latex $<
