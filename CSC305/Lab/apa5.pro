% your directed graph
edge(gurun, bedong)./
edge(bedong, semeling)./
edge(gurun, sglalang)./
edge(sglalang, laguna)./
edge(laguna, semeling)./
edge(semeling, uitmkedah)./
edge(singkir, merbok)./
edge(tanjungdawai, singkir)./
edge(merbok, uitmkedah)./

% get a path from start to end
path1(Start, End, Path) :- path(Start, End, ).