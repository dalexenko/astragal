<td valign="top" class="header" colspan=2>
</td>
</tr>
<tr>
<td valign="top" colspan="2" class="menuline"> 
<?
$nowdate=date(Y).date(m).date(d);
$minus=date(j);
$hotdate=$nowdate-$minus;
$query="SELECT * FROM resumes where enable=1 and resumdate>".$hotdate." ORDER BY `num` DESC";
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
include ('resumdat.inc');
echo "</blockquote>";
echo "<div align=right><a href='index.php?id=sworker'>заказать персонал</a></td>";
echo "</tr></table><br>";
}
}
else
{
emptybase ();
}
?>
</td>