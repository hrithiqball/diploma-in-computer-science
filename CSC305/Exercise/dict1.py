report = {'ID': 'A103', 'sales': 0, 'salary': 0, 'total': 0}

report['ID'] = input("Enter id:")
report['sales'] = input("Sales:")
report['salary'] = input("Salary:")


def calculate(report):
    report['total'] = report['sales'] * 0.1 + report['salary']


print(report)
# print report['total']
