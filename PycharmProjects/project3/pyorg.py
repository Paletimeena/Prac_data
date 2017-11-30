#!/usr/bin/python

from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import WebDriverWait
import time

driver = webdriver.Firefox()
driver.get("https://djangobook.com/")
#elem = driver.find_element_by_xpath(".//*[@id='menu-item-591']/a").click()

#time.sleep(10)
elem = driver.find_element_by_link_text("Free Book").click()
time.sleep(10)
driver.close()
