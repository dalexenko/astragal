<?
if ($nazv)
{
$query="SELECT * FROM firms where firmname like '%".$nazv."%' or sfera1 like '%".$nazv."%' or sfera2 like '%".$nazv."%' or sfera3 like '%".$nazv."%' or sfera4 like '%".$nazv."%' or sfera5 like '%".$nazv."%' or strana like '%".$nazv."%' ORDER BY `num` DESC";

$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
deptitle($firmstitle);
echo "
<tr>
<td valign='top' rowspan='1' colspan='2'>
";
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
echo "
</td>
</tr>
</table>
";

}
}
else
{
emptybase ();
}
echo "
</td>
</tr>
</table>
";
}
else
{
deptitlemain($srchfirmtitle);
echo "
<tr>
<td valign='top' class='regular' colspan=2 align=center>
<p>ВВЕДИТЕ КЛЮЧЕВОЕ СЛОВО ДЛЯ ПОИСКА<font color='red'>*</font>:</p> 
<FORM METHOD=GET ACTION='index.php'>
<INPUT TYPE='text' NAME='nazv' SIZE=50>
<INPUT TYPE='hidden' NAME='id' VALUE='srchfirm'>
<INPUT TYPE='submit' VALUE='найти' >
</FORM>
<font color='red'><p>* при вводе учитываются символы пробела, тире и т.п.</p></font>  
</td>
</tr>
</table>
";
}
?>