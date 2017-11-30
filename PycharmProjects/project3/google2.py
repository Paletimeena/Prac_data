

import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys

driver = webdriver.Firefox()

print("Started")

driver.get("http://www.google.com")

#elem = driver.find_element_by_name("q")
elem = driver.find_element_by_id("lst-ib")
elem.send_keys("selenium")
#elem = driver.find_element_by_name("btnK").click()
elem = driver.find_element_by_xpath(".//*[@id='tsf']/div[2]/div[3]/center/input[1]").click()
#elem.send_keys(pwd)
#elem.send_keys(Keys.RETURN)
#elem = driver.find_element_by_id("Submit_button").click()
#elem = driver.find_element_by_id("Submit_button").click()

print ("completed")
time.sleep(5)
driver.close()
