<?
include('../includes/config.inc');
$query="SELECT * FROM firms where num=$n"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query");  
while ($row = mysql_fetch_array($mysql_qv))
{
echo $num=$row[0]."<br>";
echo $firmdate=$row[1]."<br>";  
echo $firmdate=$row[2]."<br>";
echo $firmname=$row[3]."<br>";
echo $inform=$row[4]."<br>";
echo $sfera=$row[5]."<br>";
echo $partner=$row[6]."<br>";
echo $strana=$row[7]."<br>";
echo $firmadres=$row[8]."<br>";
echo $firmtel=$row[9]."<br>";
echo $firmfax=$row[10]."<br>";
echo $firmemail=$row[11]."<br>";
echo $firmurl=$row[12]."<br>";
echo $firmfiocont=$row[13]."<br>";
echo $pwd1=$row[14]."<br>";
echo $day=$row[15]."<br>";
echo $month=$row[16]."<br>";
echo $year=$row[17]."<br>";
echo $check=$row[18]."<br>";
}
?>