#!/bin/bash

echo "This programme will calculate :"
echo -e "How many days after your birth\n"
echo "This programme will tell you how many days before your birthday at this\
	year\n"

read -p "Please input your birthday (example:19901111):" yourbirthday
date_d=$(echo $yourbirthday | grep '[0-9]\{8\}')
if [ "$date_d" == "" ]; then
	echo -e "You input the wrong data format\n"
	exit 1
else
	date_birthday=$(date --date="$date_d" +%Y-%m-%d)
	echo "Your birthday is :$date_birthday"
	read -p "Is this right(Y/N)" yn
	if [ "$yn" == "Y" ] || [ "$yn" == "y" ]; then
		echo "go on"
	elif [ "$yn" == "N" ] || [ "$yn" == "n" ]; then
			echo -e "system wrong\n"
	else
		echo -e "You intput wrong choice\n"
	fi
fi
declare -i date_dem=$(date --date="$date_d" +%s)
declare -i date_now=$(date --date="now" +%s)
date_dem_s=$(($date_now - $date_dem))
declare -i date_dem_m=$(($date_dem_s/60))
declare -i date_dem_h=$(($date_dem_m/60))
declare -i date_dem_d=$(($date_dem_h/24))
echo "Today after your birthday has been ${date_dem_s} seconds"
echo "Today after your birthday has been ${date_dem_m} minutes"
echo "Today after your birthday has been ${date_dem_h} hours"
echo "Today after your birthday has been ${date_dem_d} days"
this_year_bir_day=$(date --date="$date_d" +%m%d)
this_year=$(date --date="now" +%Y)
this_year_bir="${this_year}${this_year_bir_day}"
declare -i this_year_bir_d=$(date --date="$this_year_bir" +%s)
if [ "$this_year_bir_d" -lt "$date_now" ];then
	echo "This year, your birthday has passed \
$((($date_now-$this_year_bir_d)/60/60/24)) days"
else
	echo "This year, your birthday after \
$((($this_year_bir_d-$date_now)/60/60/24)) days"
fi






