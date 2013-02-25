all: tex.dvi

clean:
	rm -f *.dvi *.log *.toc *.aux

TEX = book.tex intro.tex
	
tex.dvi: $(TEX)
	latex $< && latex $<

