gdialog --title "Confirm" --yesno "Are you willing to take part?" 9 18
if [ $? != 0 ]; then
	gdialog --infobox "Thank you anyway" 9 20
	sleep 2
	gdialog --clear
	exit 0
else
	gdialog --title "Questionnaire" --inputbox "Please enter your name" 9 30 2>_1.txt
	Q_NAME=$(cat _1.txt)
	echo $Q_NAME
	gdialog --menu "$Q_NAME, what music do you like?" 15 30 4 1 "Classical" 2 "Jazz" 3 "country" 4 "other" 2>_1.txt
	Q_MUSIC=$(cat _1.txt)
	if [ $Q_MUSIC == 1 ]; then
		gdialog --title "Likes Classical" --msgbox "Good Choice" 12 25
	else
		gdialog --title "Not likes Classical" --msgbox "Shame" 12 25
	fi
fi
sleep 2
gdialog --clear
exit 0
