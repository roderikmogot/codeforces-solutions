import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys

# IMPORTANT: Download chromedriver

path = "./chromedriver"
driver = webdriver.Chrome(path)

driver.get("https://open.kattis.com/login/email?")

search = driver.find_element_by_id("user_input")
search.send_keys("roderikmogot")

time.sleep(1)
search = driver.find_element_by_id("password_input")
search.send_keys("Vina101015")

time.sleep(1)
search.send_keys(Keys.RETURN)

time.sleep(1)
driver.get("https://open.kattis.com/users/roderikmogot")

dl_url = 'https://open.kattis.com/submissions'
search = driver.find_elements_by_class_name("submission_id")[1:]
status_middle = driver.find_elements_by_class_name("status.middle")

subms_id = []
accepted = []
for j in range(len(search)):
    if "Accepted" in status_middle[j].text:
        subms_id.append(search[j].text)
        accepted.append(status_middle[j].text)

for i in range(len(subms_id)):
    with open("accepted_id.txt", 'a') as save_data:
        save_data.write(subms_id[i] + "-" + accepted[i] + "\n")

with open("accepted_id.txt", 'r') as read_data:
    subms_id = []
    for line in read_data:
        fields = line.split("-")
        subms_id.append(fields[0])

    for data in subms_id:
        driver.get(dl_url + "/" + data)
        time.sleep(1)
        driver.find_elements_by_class_name("btn.btn-default.btn-sm")[1].click()
        time.sleep(1)
        driver.get("https://open.kattis.com/users/roderikmogot")
        time.sleep(1)

driver.quit()

