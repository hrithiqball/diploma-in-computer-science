edge(tdawai, singkir).
edge(singkir, merbok).
edge(merbok, uitmk).
edge(gurun, bedong).
edge(gurun, sglalang).
edge(bedong, semeling).
edge(sglalang, laguna).
edge(semeling, uitmk).
edge(laguna, semeling).

path(Start, End, Path) :- path(Start, End, [Start], Path) .
