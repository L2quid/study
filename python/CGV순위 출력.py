from bs4 import BeautifulSoup
import urllib.request

url = 'http://www.cgv.co.kr/movies/'

with urllib.request.urlopen(url) as fs :
    soup = BeautifulSoup(fs.read().decode(fs.headers.get_content_charset()), 'html.parser')
    items = soup.find_all('strong', {'class' : 'title'})

for i in range(7) :
    print(str(i + 1) + '위\t: ' + items[i].get_text(strip = True))
input()
