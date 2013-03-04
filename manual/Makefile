all: pdf

dvi: book.dvi
pdf: book.pdf

clean:
	rm -f *.dvi *.log *.toc *.aux *.lol
	rm -f CMSIS/STM32/*.s CMSIS/STM32/*.c

TEX = book.tex intro.tex PION.tex CPU_table.tex \
	keil/keil.tex keil/install.tex keil/*.jpg keil/cfg/keilconfig.tex \
	hardware/*.jpg hardware/*.tex \
	stlink/*.tex stlink/*.jpg \
	blink/*.tex \
	QA/*.tex \
	apps/*.tex apps/*.jpg \
	CMSIS/STM32/*.tex CMSIS/STM32/keilstartup.s \
	versioncontrol/git.tex versioncontrol/*.jpg \
	Makefile
	
CMSIS/STM32/keilstartup.s: ../lib/STM32F4/keil_startup_stm32f4xx.s
	cp $< $@	
	
book.toc: $(TEX)
	pdflatex $(TEX)
	
book.pdf: book.toc
	pdflatex $(TEX)

book.dvi: $(TEX)
	latex $< && latex $< && latex $<
