# Gabriel Lopez, Time of day on Python
import time 
current = time.time()
local_time = time.localtime(current)
hour = local_time.tm_hour #military time (0-23)

 