
import json 
import Credentials

from selenium import webdriver
from selenium.webdriver.common.keys import Keys

driver = webdriver.Firefox()

print "Started"

(user,pwd) = Credentials.Login_Details()

driver.get("https://investigator-workbench-uk.amazon.com/gp/stores/www.amazon.co.uk/gp/home/")

elem = driver.find_element_by_name("userName")
elem.send_keys(user)
elem = driver.find_element_by_name("password")
elem.send_keys(pwd)
elem.send_keys(Keys.RETURN)
elem = driver.find_element_by_id("Submit_button").click()
elem = driver.find_element_by_id("Submit_button").click()

print "completed"

driver.close()
