﻿<td valign="top" class="header" colspan=2>
</td>
</tr>
<tr>
<td valign="top" colspan="2" class="menuline"> 
<?
$query="SELECT * FROM kursisti where enable=1 ORDER BY `num` DESC"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
if ($num_rows>0)
{
while ($row = mysql_fetch_array($mysql_qv))
{
$bornyear=substr($row[2], 0, 4);
$kursistdateyear=substr($row[1], 0, 4);
$kursistdatemonth=substr($row[1], 4, 2);
$kursistdateday=substr($row[1], 6);
$kursistdate=$kursistdateday.".".$kursistdatemonth.".".$kursistdateyear;
echo "<table width='100%' border='0' bordercolor='navy' class='regular'><tr align='left' valign='middle'>"; 
echo "<td width='130' align=center><IMG SRC='http://".$host."/training/photos/photo".$row[0].".jpg' ALT='photo".$row[0].".jpg'></td><td valign=top>";
echo "<p>КУРСИСТ №".$row[0];
echo " от ".$kursistdate."<br><br>";
echo "<b>Дата рождения:</b> ".$bornyear."<br>";
echo "<b>Образование: </b>".$row[3]."<br>";
echo "<b>Курс: </b>".$row[7]."<br>";
echo "<b>Опыт работы (перечень знаний и умений):</b><br>";
echo $row[11]."<br>";
echo "<b>Требуемая зарплата: </b>".$row[9]."<br>";
echo "</td></tr></table><hr>";
}
}
else
{
emptybase ();
}
?>
</td>