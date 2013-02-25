all: book.pdf

clean:
	rm -f *.dvi *.log *.toc *.aux

TEX = book.tex intro.tex
	
book.pdf: $(TEX)
	pdflatex $< && pdflatex $< && pdflatex $<

