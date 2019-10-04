while [ 1 ]
do clear
echo "Enter one number"
read num1
echo "Enter another number"
read num2
echo "1.Add\n2.Subtract\n3.Multiply\n4.Divide"
echo Enter your choice
read choice
case $choice in 
1) num=`expr $num1 + $num2`
   echo $num;;
   sleep 20
2) num=`expr $num1 - $num2`
   echo $num;;
   sleep 20
3) num=`expr $num1 \* $num2`
   echo $num;;
   sleep 20
4) num=`expr $num1 / $num2`
   echo $num;;
   sleep 20
*) exit;; 
esac
