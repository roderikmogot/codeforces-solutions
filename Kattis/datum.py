from datetime import date

f = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']
month, day = list(map(int, input().split()))
date = date(2009, day, month)
print(f[date.weekday()])

