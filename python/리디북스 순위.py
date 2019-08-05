import os
import datetime
from bs4 import BeautifulSoup
import urllib.request

url = 'https://ridibooks.com/bestsellers/general'
with urllib.request.urlopen(url) as fs :
    soup = BeautifulSoup(fs.read().decode(fs.headers.get_content_charset()), 'html.parser')
    items = soup.find_all('a', {'class' : 'title_link'})
    price=soup.find_all('span',{'class':'price'})
    name=soup.find_all('p',{'class':'book_metadata author'})
local = datetime.datetime.now()
date= str(local.year)+'_'+str(local.month)+'_'+str(local.day)
desktopPath = os.path.expanduser('~')
filePath = desktopPath + '\desktop\리디북스 순위\리디북스'+str(date)+'.txt'
with open( filePath, 'w+') as file:
    for i in range(20) :
        file.write(str(i + 1) + '위\t ' + items[i+1].get_text(strip = True)+'-'+name[i+1].get_text(strip = True)+'\t'+price[i+1].get_text(strip = True)+'\n')
