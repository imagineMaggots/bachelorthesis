## Automatische Sprachübersetzung von LaTeX-Dokumenten
| <div style="width:90vw">Teilaufgaben (ein wenig umsortiert und umformuliert)</div> |
|---|
| Herausarbeiten der typischen Problemfälle und Testen der bestehenden Ansätze an diesen Problemfällen |
| Übersicht zu bestehenden Ansätzen der Problemlösung |
| Entwicklung eines Konzepts für eine weitestgehend automatische Überset-zung mathematischer Texte in \LaTeX{} in Fremdsprachen. |
| Experimentelle Umsetzung dieses Konzepts |
| Test der Grenzen der integrierten Lösung |
| Ausblick auf mögliche Erweiterungs- und Optimierungspotentiale |

## rules (for this repository) and file conflicts
- file conflicts shouldn't really happen when working alone, but just in case (since i use 2 seperate devices) i maintain several branches for each
- the latter also helps, because i can (must) review any changed file manually in the pull requests. if i catch any error i can then fix it first (after cancelling my pull-request and before creating a new one)
- see also: branching.md

## branches
- main: The public branch containing the files that are okay to be seen
- hendrik-desktop: branch for any remote file changes that happen using my pc
- origin/imagineMaggots-patch-1: branch for any mobile changes, usually updates for 'readme's

## directories
| <div style="width:15vw">Ordner</div> | <div style="width:25vw">Korresp. Teilaufgabe</div> | <div style="width:48vw">Inhalte</div> |
| --- | --- | --- |
| guides | keine | manuals und tutorials |
| quarantine | keine | alles aus dem alten GitHub landet immer zunächst hier |
| thesis | alle | die Bachelorarbeit (TeX) |

## further remarks (might receive own file)
- i am somewhat confident that the pronunciation of TeX and LaTeX is made up. A lot of english-speakers struggle with a german "ch" sound (as in e.g., Kirche, Küche, Licht, Wicht, ...), that is required for the \[x] (the sound the greek Xi makes), as it is not a sound the english language is familiar with. hence i am inclined to believe, that any english speaker working on TeX regularly would't refer to it as Teks or (german) Tech, but rather Tek. 
- kann Copilot übersetzen? Ist ne KI von Microsoft. Wäre denkbar, dass bei der Frage "Übersetze XY so und so" zwischendrin auf "Microsoft Translator" zugegriffen wird
- Kommentare sind durch Umgebung auch in-line moeglich... wird nach einem Kommentar folgende Zeichenkete erfasst? was wenn darin neue Kommentare vorkommen
- in Kommentar-Kapitel ist eig die Frage, warum man diese Übersetzen sollte mit Lamport begruendbar 

## additional ressources (possibly relevant in the future, but unused in the thesis as of now)
- https://github.com/pgf-tikz/pgfplots/blob/master/doc/latex/pgfplots/TeX-programming-notes.tex
- https://mirrors.ibiblio.org/CTAN/macros/latex/contrib/natbib/natbib.pdf
- https://ftp.rrzn.uni-hannover.de/pub/mirror/tex-archive/macros/latex/contrib/hyperref/doc/hyperref-doc.html#x1-70004.1
- https://tex.stackexchange.com/questions/1050/whats-the-difference-between-newcommand-and-newcommand
- https://lamport.azurewebsites.net/tla/book-21-07-04.pdf (Kapitel 17)