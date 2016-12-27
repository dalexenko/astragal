<td valign="top" class="header" colspan=2>
</td>
</tr>
<tr>
<td valign="top" colspan="2" class="menuline"> 
<?
$query="SELECT * FROM sitenews where enable=1 ORDER BY `news_id` DESC"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);

if ($num_rows>0)
{
while ($row = mysql_fetch_array($mysql_qv))
{
$newsdateyear=substr($row[0], 0, 4);
$newsdatemonth=substr($row[0], 4, 2);
$newsdateday=substr($row[0], 6);
$newsdate=$newsdateday.".".$newsdatemonth.".".$newsdateyear;
echo "<table border=1 width='95%' align=center  bordercolor='navy'><tr>";
echo "<td align=right class=subheader>".$newsdate."</td>";
echo "</tr><tr>";
echo "<td colspan=2 class=regular>".$row[1]."<br>";
echo "</td></tr></table><br>";
}
}
else
{
emptybase ();
}
?>
</td>