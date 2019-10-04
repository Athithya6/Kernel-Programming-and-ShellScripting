Ans="y"
while [ $Ans = "y" ]
do clear
echo "Enter your name" #echo is for displaying and asking the user
read name #read is for accepting input
echo "Enter your ID"
read id_no
echo "Enter your company name"
read comp_name
echo "Enter your marks in the three subjects"
read mark1
read mark2
read mark3
total=`expr $mark1 + $mark2 + $mark3` #computing total of the three marks entered
n=3 #initialising variable n to 3
percentage=`expr $total / $n` #computing percentage as total/3
echo "$name $id_no $comp_name $mark1 $mark2 $mark3">>data.txt #displaying the name,ID,company name and marks and saving to data.txt file 
echo "total=$total">>data.txt #displaying the total
echo "percentage=$percentage">>data.txt #displaying the percentage

if [ $percentage -gt 75 ] #-gt represents greater than(>).if percentage is greater than 75
then
    echo "Distinction"
elif [ $percentage -gt 60 -a $percentage -lt 75 ] #-a represents and(&&);-lt represents lesser than(<).if percentage is greater than 60 and lesser than 75
then
    echo "First class"
else
    echo "Fail"
fi #end of execution
echo "Do you want to continue?"
read Ans
done
sleep 30
