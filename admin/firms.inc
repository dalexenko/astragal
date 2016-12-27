<?
$query="SELECT * FROM firms"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
if ($num_rows>0)
{
while ($row = mysql_fetch_array($mysql_qv))
{
$firmdateyear=substr($row[1], 0, 4);
$firmdatemonth=substr($row[1], 4, 2);
$firmdateday=substr($row[1], 6);
$firmdate=$firmdateday.".".$firmdatemonth.".".$firmdateyear;
echo "<table border=1 width='95%' align=center  bordercolor='navy'><tr><td class=header width=60%>";
echo "<p>ФИРМА №".$row[0];
echo "<td align=right class=subheader>от ".$firmdate."</td>";
echo "</tr><tr>";
echo "<td colspan=2 class=regular><b>Сферы деятельности:</b>";
	for($i=3; $i<=7; $i++)
	{
	if ($row[$i]=='данных нет'){} else
		{
		echo $row[$i]."; "; 
		}
	}
echo "<br>";
echo "<tr><td>";
$winstat='width=750 height=500 toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1';
	$kav="'";
	$i=1;
	$about="firmsdel.php?n=".$row[0];
	echo'<a href='.$kav.$about.$kav.' target="1" onclick="window.open('.$kav.$about.$kav.', '.$kav.$i.$kav.', '.$kav.$winstat.$kav.');">удалить запись</a>';

echo "</td></tr><tr><td colspan=2 align=right>";
$winstat='width=750 height=500 toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1';
$kav="'";
$i=1;
$about="firdetal.php?n=".$row[0];
echo'<a href='.$kav.$about.$kav.' target="1" onclick="window.open('.$kav.$about.$kav.', '.$kav.$i.$kav.', '.$kav.$winstat.$kav.');">детальнее...</a></a></td></tr></table><br>';
}
}
else
{
{
emptybase ();
}
}
?>