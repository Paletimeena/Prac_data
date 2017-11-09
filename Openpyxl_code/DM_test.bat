echo ...........Start Automation on...........................
date
rm DM_logs/Pass/*.log
rm DM_logs/Fail/*.log
row=2
col=2
echo ...................Level 1.............................
python pyxl_open.py
python run.py Testcase_1 init 1 1> DM_logs/Pass/DM_Test_1.log 2> DM_logs/Fail/DM_Test_1.log  
row=`expr $row + 1`
python result.py DM_logs/Fail/DM_Test_1.log Testcase_1 $row $col Pass 

python run.py Testcase_2 init 1 discover 1 1> DM_logs/Pass/DM_Test_2.log 2> DM_logs/Fail/DM_Test_2.log  
row=`expr $row + 1`
python result.py DM_logs/Fail/DM_Test_2.log Testcase_2 $row $col Pass 

python run.py Testcase_3 init 1 discover 1 get 1 1> DM_logs/Pass/DM_Test_3.log 2> DM_logs/Fail/DM_Test_3.log  
row=`expr $row + 1`
python result.py DM_logs/Fail/DM_Test_3.log Testcase_3 $row $col Pass 

python run.py Testcase_4 init 1 discover 1 get 1 put 1 1> DM_logs/Pass/DM_Test_4.log 2> DM_logs/Fail/DM_Test_4.log  
row=`expr $row + 1`
python result.py DM_logs/Fail/DM_Test_4.log Testcase_4 $row $col Pass 

python run.py Testcase_5 init 1 discover 1 observe 1 1> DM_logs/Pass/DM_Test_5.log 2> DM_logs/Fail/DM_Test_5.log  
row=`expr $row + 1`
python result.py DM_logs/Fail/DM_Test_5.log Testcase_5 $row $col Pass 

python run.py Testcase_6 init 1 discover 1 delete 1 1> DM_logs/Pass/DM_Test_6.log 2> DM_logs/Fail/DM_Test_6.log  
row=`expr $row + 1`
python result.py DM_logs/Fail/DM_Test_6.log Testcase_6 $row $col Pass 

echo ...................End Automation on.....................
date
