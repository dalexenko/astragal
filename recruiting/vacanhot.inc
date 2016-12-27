<td valign="top" class="header" colspan=2>
</td>
</tr>
<tr>
<td valign="top" colspan="2" class="menuline">
<?
$nowdate=date(Y).date(m).date(d);
$minus=date(j);
$hotdate=$nowdate-$minus;
$query="SELECT * FROM vacances where enable=1 and vacandate>".$hotdate." ORDER BY `num` DESC";
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
echo "<td colspan=2 class=regular><blockquote><b>Сферы деятельности: </b>";
	for($i=1; $i<=3; $i++)
	{
        $s="sfera".$i;
	if ($row->$s=='данных нет'){} else
		{
		echo $row->$s."; "; 
		}
	}
include ('vacandat.inc');
echo "</blockquote>";
echo "<div align=right><a href='index.php?id=anketa'>заполнить заявку для соискателя</a></td>";
echo "</td></tr></table><br>";
}
}
else
{
emptybase ();
}
?>
</td>