/*                        Experiment no: 2  
                                                 
                                                 NAME: 
                                                 ROLL NO: 
                                                 BATCH:- III  

                           AIM: Implementing Shell Scripiting program using c.


Shell scripting is an important part of process automation in Linux. Scripting helps you write a sequence of commands in a file and then execute them..his saves you time because you dont have to write certain commands again and again. You can perform daily tasks efficiently and even schedule them for automatic execution.

*/

#!/bin/bash
i="y"

while [ $i = "y" ]
do
echo "1.OS Version, release number, Kernel Version "
echo "2.Display top 10 Process in decending order"
echo "3.Display Processes with highest memory usage"
echo "4.Display Current logged user and Login Name"
echo "5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory"
echo "Enter your choice"
read ch
case $ch in
1)echo "OS Name is:"
        uname;
  echo "Release Number is:"
        uname -a;
  echo "kernel Version"
        uname -r;;
2)echo "Top 10 Processes in decending order:"
        ps axl | head -n 10;;
3)echo "Display Processes with highest memory usage"
        ps -eo pid,ppid,cmd,%mem,%cpu --sort=-%mem | head;;
4)echo "Logged in users are :-\n"
        who -u;
  echo "Number of Logged in users are:-\n"
        who -u | wc -l;;
5)echo "Current Shell :-\n"
        which bash;
  echo "Current home directory-\n"
        whoami;
  echo "Current operating system type is-\n"
        uname;
  echo "Current Path Setting and current working directory is-\n"
        pwd;;
*)echo "Invalid choice";;
esac
echo "Do u want to continue ?"
read i
if [ $i != "y" ]
then
exit
fi
done

<<Output

aiktc@aiktc:~$ bash switch.sh
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
1
OS Name is:
Linux
Release Number is:
Linux aiktc 5.4.0-104-generic #118-Ubuntu SMP Wed Mar 2 19:02:41 UTC 2022 x86_64 x86_64 x86_64 GNU/Linux
kernel Version
5.4.0-104-generic
Do u want to continue ?
y
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
2
Top 10 Processes in decending order:
F   UID     PID    PPID PRI  NI    VSZ   RSS WCHAN  STAT TTY        TIME COMMAND
4     0       1       0  20   0 167336 11092 -      Ss   ?          0:01 /sbin/init splash
1     0       2       0  20   0      0     0 -      S    ?          0:00 [kthreadd]
1     0       3       2   0 -20      0     0 -      I<   ?          0:00 [rcu_gp]
1     0       4       2   0 -20      0     0 -      I<   ?          0:00 [rcu_par_gp]
1     0       6       2   0 -20      0     0 -      I<   ?          0:00 [kworker/0:0H]
1     0       8       2   0 -20      0     0 -      I<   ?          0:00 [mm_percpu_wq]
1     0       9       2  20   0      0     0 -      S    ?          0:00 [ksoftirqd/0]
1     0      10       2  20   0      0     0 -      I    ?          0:04 [rcu_sched]
1     0      11       2 -100  -      0     0 -      S    ?          0:00 [migration/0]
Do u want to continue ?
y
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
3
Display Processes with highest memory usage
    PID    PPID CMD                         %MEM %CPU
   1592    1350 /usr/lib/firefox/firefox    14.8  9.3
    979       1 /usr/sbin/mysqld            10.0  0.2
   3394    1592 /usr/lib/firefox/firefox-bi  8.0  3.4
   3522    3484 /usr/lib/libreoffice/progra  7.0  0.5
   6589    1592 /usr/lib/firefox/firefox-bi  5.4 37.4
    917     778 /usr/lib/xorg/Xorg -core :0  4.6  4.5
   3179    1386 xed                          4.0  1.5
   6664    1592 /usr/lib/firefox/firefox-bi  3.6  0.6
   6527    1592 /usr/lib/firefox/firefox-bi  3.5  0.6
Do u want to continue ?
y
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
4
Logged in users are :-\n
aiktc    tty7         2023-02-09 14:23 01:21        1057 (:0)
Number of Logged in users are:-\n
1
Do u want to continue ?
y
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
5
Current Shell :-\n
/usr/bin/bash
Current home directory-\n
aiktc
Current operating system type is-\n
Linux
Current Path Setting and current working directory is-\n
/home/aiktc
Do u want to continue ?
y
1.OS Version, release number, Kernel Version 
2.Display top 10 Process in decending order
3.Display Processes with highest memory usage
4.Display Current logged user and Login Name
5.Display Current Shell, home directory, operating system type, current Path Setting, current working directory
Enter your choice
6 
Invalid choice
Do u want to continue ?
n

Output

