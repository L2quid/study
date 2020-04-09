from selenium import webdriver
import time

path ="C:/chromedriver.exe"
driver = webdriver.Chrome(path)
driver.get('https://ecampus.ut.ac.kr/main/MainView.dunet')
login=driver.find_element_by_name("id")
login.send_keys("my_ID")
login=driver.find_element_by_name("pass")
login.send_keys("my_PW")
driver.find_element_by_class_name("btn_login").click()
time.sleep(7)
for j in range (1,8):
    driver.get('https://ecampus.ut.ac.kr/lms/myLecture/doListView.dunet?mnid=201008840728')
    driver.find_element_by_xpath("/html/body/div[7]/div[3]/div/div[3]/div[2]/ul/li["+str(j)+"]/div[1]/a").click();
    count=len(driver.find_elements_by_xpath('//*[@id="lenAct"]/div'))
    for i in range(1,count+1):
        check=driver.find_element_by_xpath('//*[@id="lenAct"]/div['+str(i)+']/div[3]')
        if(check.text!="[학습시작전]"):
            driver.find_elements_by_xpath('//*[@id="lenAct"]/div['+str(i)+']/div[3]/a')[0].click();
            time.sleep(3600) #1시간 
    time.sleep(2)
