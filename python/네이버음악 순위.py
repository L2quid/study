from bs4 import BeautifulSoup
import urllib.request

url = 'https://music.naver.com/'

with urllib.request.urlopen(url) as fs :
    soup = BeautifulSoup(fs.read().decode(fs.headers.get_content_charset()), 'html.parser')
    items = soup.find_all('span', {'class' : 'm_ell'})

for i in range(50) :
    print(str(i + 1) + '위\t: ' + items[i*3].get_text(strip = True)+ '\t' + items[i*3+1].get_text(strip = True))
input()
