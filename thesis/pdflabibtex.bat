:: Hey "echo", do not print the following text
@echo off
:: clears the screen
cls
:: pdfLaTeX run to fetch all citations
echo "Hello, starting pdfLaTeX run 1"
pdflatex index
cls 

:: bibTeX run to update auxilliaries
echo "Hello, starting bibTeX run"
bibtex index
cls

:: pdflatex run to update citations
echo "Hello, starting pdfLaTeX run 2"
pdflatex index
cls

:: pdflatex run to update page overflows
echo "Hello, starting pdfLaTeX run 3"
pdflatex index
cls

echo "done"
:: open cli
cmd