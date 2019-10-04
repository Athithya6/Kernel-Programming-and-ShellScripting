while [ 1 ]
do clear
echo "Enter your choice"
read choice
case $choice in
1) ls -l;;
2) sh main.sh;;
3) sh main2.sh;;
4) sh main4.sh;;
*) exit;;
esac
done


