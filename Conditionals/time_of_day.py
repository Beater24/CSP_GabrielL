# Gabriel Lopez, Time of Day on Python

import time

current = time.time()
local_time = time.localtime(current)
hour = local_time.tm_hour #military time (0-23)
minute = local_time.tm_min

print(hour,":",minute)

if hour < 12:
    print("Good Morning!")
elif hour >= 12 and hour <18:
    print("Good Afternoon!")
else:
   print("Good Evening!")
