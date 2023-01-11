teaches(jamilah, csc128).
teaches(jamilah, csc218).
teaches(rahim, csc305).
teaches(rahim, csc305).
teaches(johari, csc218).
teaches(johari, csc305).
lecture_slot(csc218, monday, eight_ten).
lecture_slot(csc128, tuesday, ten_twelve).
lecture_slot(csc305, wednesday, fourteen_sixteen).
lab_slot(csc218, friday, ten_twelve).
lab_slot(csc128, thursdayday, ten_eleven).
lab_slot(csc305, monday, fifteen).
classDetail(Teacher, Subject, Day, Session) :- teaches(Teacher, Subject), lecture_slot(Subject, Day, Session); lab_slot(Subject, Day, Session) .
classList(Day, Subject) :- lecture_slot(Subject, Day, _); lab_slot(Subject, Day, _ ) .