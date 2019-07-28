from bs4 import BeautifulSoup
import urllib.request

url = 'https://movie.naver.com/movie/sdb/rank/rmovie.nhn'

with urllib.request.urlopen(url) as fs :
    soup = BeautifulSoup(fs.read().decode(fs.headers.get_content_charset()), 'html.parser')
    items = soup.find_all('div', {'class' : 'tit3'})

for i in range(20) :
    print(str(i + 1) + '위\t: ' + items[i].get_text(strip = True))
input()
