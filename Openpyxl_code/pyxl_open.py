from openpyxl import Workbook
import os

if os.path.exists("Sample.xlsx"):
	os.remove("Sample.xlsx")

wb = Workbook()
ws1 = wb.active
ws1.title = "Mysheet"
ws2 = wb.create_sheet(title="Status")
wb.save("Sample.xlsx")
