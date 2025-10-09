## will contain a description for most common TeX auxilliaries! (obv not done yet)

## warning
es ist gerade eine .upa dazugekommen, als ich einen PDF-Kommentar mit Markup hinzufügte!!!

#### readme
This folder contains a 'capture' of all files that are currently associated (or were associated) with my thesis, written in TeX and this <b style="font-family:courier">readme.md</b> contains explanations as to
1. What file was created
2. What program (or package, equivalent here) created them
3. What their contents entail (and if/why they are necessary)

Mainly we're dealing with:
| <div style="width:16vw">file-extension | <div style="width:16vw">associated program | <div style="width:56vw">description</div> |
|---|---|---|
| <b style="font-family:courier">.aux</b> | <b style="font-family:courier">TeX</b> | <li>An/The auxiliiary file is used by multiple programs/packages that require multiple runs of the TeX-Compiler-Engine.<li>Notably information for Hyperref and BibTeX (for linking purposes, otherwise backrefs would'nt be possible, as the Compiler can't add a link to a textfield in a pdf, if he does'nt now what page the references will be printed on (an information he only receives after having compiled the document at least once, as he now knows where exactly the reference has been printed. He's even able to make the link link to the exact pixel position of the text-box!!!))<li>Information for the Table of Contents of which the exact size is only known, after having read the entire document at least once. If any unnumbered sections were added with \addtocontents{}{} This information (plus the existence of this aux) can provide a quicker compilation, if the ToC remains the same size (as it can be printed immediatly without having to wait for the first run through the document)<li>starts with \relax as it could include command/macro options, which could change any macro, therefore all macros have to stop expanding, and the one changed has to roll back as far as it needs to oblige to these required changes. |
| <b style="font-family:courier">.bbl</b> | <b style="font-family:courier">BibTeX/natbib</b> | <li>The bibliography created when using natbib |
| <b style="font-family:courier">.bcf</b> | <b style="font-family:courier">BibTeX/biblatex</b> | <li>XML file for the bibtex backend Biber when using biblatex<li>in a sense (at least partwise) a JSON<li>key:value pairs for all possible keys, e.g., startdate for the gregorian calendar (15.10.1582), usetranslator:int (if a "translated by: ..." shall be printed), maxitems (= Anzahl individueller Zitationen, gibt verschiedene keys, die das repräsentieren, in der Datei nach "<bcf:key>gregorianstart</bcf:key>") |
| <b style="font-family:courier">.run.xml</b> | <b style="font-family:courier">BibLaTeX</b> | <li>XML-File handling bcf and bbl when using BibLaTeX |
| <b style="font-family:courier">.blg</b> | <b style="font-family:courier">BibTeX</b> | <li>performance log for BibTeX |
| <b style="font-family:courier">.log</b> | <b style="font-family:courier">TeX</b> |<li>general log for debugging purposes |
| <b style="font-family:courier">.out</b> | <b style="font-family:courier">pdftex</b> | <li>information for PDF-Bookmarks |
| <b style="font-family:courier">.toc</b> | <b style="font-family:courier">TeX</b> | <li>all information the table of contents holds |

#### further
We already now of certain other files that get used in the compilation process of TeX! (The ones edited by ourselves and classes/packages we used). The below table now represents:
1. What file was used
2. What program (or package, equivalent here) uses them
3. The purpose it serves

| <div style="width:16vw">file-extension | <div style="width:16vw">associated program | <div style="width:56vw">description</div> |
|---|---|---|
| <b style="font-family:courier">.tex</b> | <b style="font-family:courier">TeX</b> | <li>Document (description). |
| <b style="font-family:courier">.bib</b> | <b style="font-family:courier"></b> | <li>BibTeX entries for citations |
| <b style="font-family:courier">.cls</b> | <b style="font-family:courier"></b> | <li>Classes provide logical information regarding you're document and might be of interest, if your document has a predetermined logical structure<li>e.g., Introduction>>>Problem>>>Technologies/Methods>>>Results>>>Discussion, Setting>>>Complication>>>Question>>>Answer, Prerequisites>>>Installation>>>Troubleshooting>>>Technological Details |
| <b style="font-family:courier">.sty</b> | <b style="font-family:courier"></b> | <li>Packages work with any type of document!<li>These are more commonly used, as every document should be unique (otherwise: look up plagiarism)| and therefore do not inherently follow a dead-set logical structure as the ones listed prior.
| <b style="font-family:courier">.map</b> | <b style="font-family:courier"></b> | <li>fontmapping. font files are nothing more then binary files, that underlie a very specific - in a sense - syntax. One can't just randomly jamble words and letters together and expect to produce a logical statement. Similarly you should'nt randomly place the glyphs/letters/... that represent your font/script/(desired look of words written in any certain language), while expecting these be properly picked up by any program on you're PC, which is supposed to work with these Markups for each glyph/letter/... and print them according to one's expectation (e.g. in a texteditor after certain button presses, in a TeX-Document, ...) |
| <b style="font-family:courier">.otf/.ttf</b> | <b style="font-family:courier"></b> | <li>fonts |
| <b style="font-family:courier">.png,.pdf,.jpeg</b> | <b style="font-family:courier">TeX</b> | <li>Images/Binaries<li>interestingly uninteresting |

###### note: will have to track the above used files in a fresh setup, in order to determine what is actually needed. 