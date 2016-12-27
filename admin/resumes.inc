<?
$query="SELECT * FROM resumes ORDER BY `num` DESC"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
if ($num_rows>0)
{
while ($row = mysql_fetch_object($mysql_qv))
{
$bornyear=substr($row->born, 0, 4);
$resumdateyear=substr($row->resumdate, 0, 4);
$resumdatemonth=substr($row->resumdate, 4, 2);
$resumdateday=substr($row->resumdate, 6);
$resumdate=$resumdateday.".".$resumdatemonth.".".$resumdateyear;

echo "<br><table border=1 width='95%' bordercolor='navy' align=center><tr><td class=header width=60%>";
echo "РЕЗЮМЕ №".$row->num;
echo "<td align=right class=subheader> от ".$resumdate."</td>";
echo "</tr><tr>";
echo "<td colspan=2 class=regular><blockquote><b>Сфера деятельности:&nbsp;</b>";
for($i=1; $i<=3; $i++)
	{
        $s="sfera".$i;
	if ($row->$s=='данных нет')
        {
        
        }
        else
        {
        echo $row->$s.";  ";
        }

	}
include ('../recruiting/resumdat.inc');
echo "</blockquote></td></tr>";
echo "<tr><td>";
$winstat='width=750 height=500 toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1';
	$kav="'";
	$i=1;
	$about="resumdel.php?n=".$row->num;
	echo'<a href='.$kav.$about.$kav.' target="1" onclick="window.open('.$kav.$about.$kav.', '.$kav.$i.$kav.', '.$kav.$winstat.$kav.');">удалить запись</a>';
echo "</td></tr><tr><td colspan=2 align=right>";
$winstat='width=750 height=500 toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1';
$kav="'";
$i=1;
$about="resdetal.php?n=".$row->num;
echo'<a href='.$kav.$about.$kav.' target="1" onclick="window.open('.$kav.$about.$kav.', '.$kav.$i.$kav.', '.$kav.$winstat.$kav.');">детальнее...</a></a></td></tr></table><br>';

}
}
else
{
emptybase ();
}
?>