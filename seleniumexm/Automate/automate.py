#!/usr/bin/python
import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.support.ui import Select

def call_link(link):
	#try:
		driver = webdriver.Firefox(executable_path = r'./geckodriver')
		driver.get(link)
		elem=driver.find_element_by_link_text("Testing")
		hov = ActionChains(driver).move_to_element(elem)
		hov.perform()
		driver.find_element_by_link_text("QTP").click()
		driver.find_element_by_link_text("Home").click()
		#assert "No results found." not in driver.page_source
		time.sleep(2)
	#except NoSuchElementException:
		#print "element not found"
	#driver.close()
