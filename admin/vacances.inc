<?
$query="SELECT * FROM vacances where enable=1 ORDER BY `num` DESC";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
if ($num_rows>0)
{
while ($row = mysql_fetch_object($mysql_qv))
{
$vacandateyear=substr($row->vacandate, 0, 4);
$vacandatemonth=substr($row->vacandate, 4, 2);
$vacandateday=substr($row->vacandate, 6);
$vacandate=$vacandateday.".".$vacandatemonth.".".$vacandateyear;

echo "<br><table border=1 width='95%' bordercolor='navy' align=center><tr><td class=header width=60%>";
echo "ВАКАНСИЯ №".$row->num;
echo "<td align=right class=subheader>от ".$vacandate."</td>";
echo "</tr><tr>";
echo "<td colspan=2 class=regular><blockquote><b>Сферы деятельности:</b>";
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
include ('../recruiting/vacandat.inc');
echo "</blockquote></td></tr>";
echo "<tr><td>";
$winstat='width=750 height=500 toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1';
	$kav="'";
	$i=1;
	$about="vacandel.php?n=".$row->num;
	echo'<a href='.$kav.$about.$kav.' target="1" onclick="window.open('.$kav.$about.$kav.', '.$kav.$i.$kav.', '.$kav.$winstat.$kav.');">удалить запись</a>';
echo "||";
	$about="vacedit.php?n=".$row->num;
	echo'<a href='.$kav.$about.$kav.' target="1" onclick="window.open('.$kav.$about.$kav.', '.$kav.$i.$kav.', '.$kav.$winstat.$kav.');">редактировать запись</a>';
echo "</td></tr><tr><td colspan=2 align=right>";
$winstat='width=750 height=500 toolbar=0,location=0,directories=0,status=0,menubar=0,scrollbars=1,resizable=1';
$kav="'";
$i=1;
$about="vacdetal.php?n=".$row->num;
echo'<a href='.$kav.$about.$kav.' target="1" onclick="window.open('.$kav.$about.$kav.', '.$kav.$i.$kav.', '.$kav.$winstat.$kav.');">детальнее...</a></a></td></tr></table><br>';
}
}
else
{
emptybase ();
}
?>