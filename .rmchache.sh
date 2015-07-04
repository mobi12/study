#! /bin/zsh
echo "输入数字选择清理模式\n"
echo "1）清理当前目录"
echo "2）清理源码目录"
echo "3）清理系统缓存文件/tmp"
echo "0）输入0退出\n"

read -r x

if [ $x -eq 1 ]; then
	rm -rf *.*~
	rm -rf .*.*~
	echo "清理完成\n"

elif [ $x -eq 2 ]; then
	rm -rf ./cpp/*.*~
	echo "清理完成\n"

elif [ $x -eq 3 ]; then
	echo "输入root密码"
	sudo rm -rf /tmp/*
	sudo apt-get clean
	sudo apt-get autoclean
	echo "清理完成\n"

elif [ $x = 0 ]; then
	echo "退出\n"	
fi
