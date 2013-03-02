all: book.pdf

clean:
	rm -f *.dvi *.log *.toc *.aux *.lol
	rm -f CMSIS/STM32/*.s CMSIS/STM32/*.c

TEX = book.tex intro.tex \
	IDE\Keil\keil.tex IDE\Keil\0.jpg \
	IDE\Keil\prjconfig\keilconfig.tex \
	IDE\Eclipse\eclipse.tex IDE\Eclipse\0.jpg \
	hardware/*.jpg hardware/*.tex hardware\CPU_table.tex hardware\PION\pion.tex \
	stlink/*.tex stlink/*.jpg \
	blink/*.tex \
	QA/*.tex \
	apps/*.tex apps/*.jpg \
	CMSIS/STM32/*.tex CMSIS/STM32/keilstartup.s \
	Makefile
	
CMSIS/STM32/keilstartup.s: ../lib/STM32F4/keil_startup_stm32f4xx.s
	cp $< $@	
	
book.pdf: $(TEX)
	pdflatex -draftmode book.tex
#	bibtex file # or biber
#	makeindex book.idx # if needed
#	makeindex -s book.gls ...# for glossary if needed
#	pdflatex -draftmode book.tex
	pdflatex book.tex
