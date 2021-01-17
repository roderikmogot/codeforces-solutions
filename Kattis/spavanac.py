hour_str, minute_str = input().split()

hour = int(hour_str)
minute = int(minute_str)

temp_minute = 0

if hour > 0 and minute >= 45:
    minute_res = minute - 45
    print(hour, minute_res)
elif hour > 0 and minute < 45:
    minute_res = (minute - 45)
    minute_fix = 60 + minute_res
    hour = hour - 1
    print(hour, minute_fix)
elif hour == 0 and minute >= 45:
    minute_res = minute - 45
    hour = 23
    print(hour, minute_res)
elif hour == 0 and minute < 45:
    minute_res = (minute - 45)
    minute_fix = 60 + minute_res
    hour = 23
    print(hour, minute_fix)
