wenn ich von main einen branch (bspw. hope) erzeuge, diesen verändere und dann mit main merge: alles gut
wenn ich auf meinem Rechner nur in hope oder main Änderungen vornehme: alles gut
wenn ich auf meinem Rechner in hope Änderungen vornehme und für main pull requests erstelle: alles gut
wenn ich auf meinem Rechner in hope Änderungen vornehme, auf main wechsle, manuell commits force: oh weh gar nichts gut
- wie löse ich das?
erste Lösung: wir suchen uns eine Version in GitHub, die "gut genug ist" und verfolgen benötigte changes manuell (im Sinne: verändern nötige Dateien)
bessere Lösung:
- wir benutzen (pro Person) einen Branch
- wir gehen davon aus, dass ein Branch nur seine eigenen Änderungen später rückwirkend nachvollziehen will
- wir garantieren, dass dieser Branch diese Änderungen rückwirkend nachvollziehen und wiederherstellen kann
wie machen wir das?
- dafür brauche ich (ein) morgen (unsicher ob es präzise der 10.10.2025 wird)