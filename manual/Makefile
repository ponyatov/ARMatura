all: pdf

dvi: book.dvi
pdf: book.pdf

clean:
	rm -f *.dvi *.log *.toc *.aux

TEX = book.tex intro.tex PION.tex blink.tex CPU_table.tex \
	keil/keil.tex keil/install.tex keil/*.jpg keil/cfg/keilconfig.tex keil/cfg/*.jpg \
	hardware/*.jpg hardware/*.tex \
	Makefile
	
book.pdf: $(TEX)
	pdflatex $< && pdflatex $< && pdflatex $<

book.dvi: $(TEX)
	latex $< && latex $< && latex $<
