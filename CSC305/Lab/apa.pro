touring_bike(puteri).
mountain_bike(putera).

bmx(putera).
touring_bike(X) :- hasSleepingBag(X), hasWaterBottle(X).
hasWaterBottle(X) :- state_player(X).
state_player(X) :- mountain_bike(X), bmx(X) .