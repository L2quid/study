
import os
import sys
import json
import urllib.request
client_id = "ubGrRSG3YIxiHqX7cRBw" # 개발자센터에서 발급받은 Client ID 값
client_secret = "FMg16QIStA" # 개발자센터에서 발급받은 Client Secret 값
encText = input("번역할 말을 입력하세요. :")
data = "source=ko&target=en&text=" + encText
url = "https://openapi.naver.com/v1/papago/n2mt"
request = urllib.request.Request(url)
request.add_header("X-Naver-Client-Id",client_id)
request.add_header("X-Naver-Client-Secret",client_secret)
response = urllib.request.urlopen(request, data=data.encode("utf-8"))
rescode = response.getcode()

if(rescode==200):
    response_body = response.read()
    response_body=response_body.decode('utf-8')
    a=json.loads(response_body)
    print(a["message"]['result']['translatedText'])
    input("종료")
else:
    print("Error Code:" + rescode)