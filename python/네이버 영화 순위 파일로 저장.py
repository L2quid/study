import os
import datetime
from bs4 import BeautifulSoup
import urllib.request

url = 'https://movie.naver.com/movie/sdb/rank/rmovie.nhn'
with urllib.request.urlopen(url) as fs :
    soup = BeautifulSoup(fs.read().decode(fs.headers.get_content_charset()), 'html.parser')
    items = soup.find_all('div', {'class' : 'tit3'})
    
local = datetime.datetime.now()
date= str(local.year)+'_'+str(local.month)+'_'+str(local.day)
desktopPath = os.path.expanduser('~')
filePath = desktopPath + '\desktop\영화순위'+str(date)+'.txt'
with open( filePath, 'w+') as file:
    for i in range(20) :
        file.write(str(i + 1) + '위\t ' + items[i].get_text(strip = True)+'\n')
