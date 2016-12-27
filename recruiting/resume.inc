<?
if ($nazv)
{
if ($nazv=='all')
{
$query="SELECT * FROM resumes where enable=1 ORDER BY `num` DESC"; 
}
else
{
echo $query="SELECT * FROM resumes where enable=1 and dopoln like '%".$nazv."%' ORDER BY `num` DESC";
}
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
echo "
<tr>
<td valign='top' rowspan='1' colspan='2'>
";
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
echo "<td colspan=2 class=regular><b><blockquote>Сфера деятельности:&nbsp;</b>";
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
	}include ('resumdat.inc');
echo "</blockquote>"; 
echo "<div align=right><a href='index.php?id=sworker'>заказать персонал</a></td>";
echo "</tr></table><br>";
}
}
else
{
emptybase ();
}
echo "</td>";
}
else
{
echo "
<tr>
<td valign='top' class='regular' align=center colspan=2>
<p>ВВЕДИТЕ КЛЮЧЕВОЕ СЛОВО ДЛЯ ПОИСКА<font color='red'>*</font>:</p> 
<FORM METHOD=GET ACTION='index.php'>
<INPUT TYPE='text' NAME='nazv' SIZE=50>
<INPUT TYPE='hidden' NAME='id' VALUE='resume'>
<INPUT TYPE='submit' VALUE='найти' >
</FORM>
<br>
<font color='red'><p>* при вводе учитываются символы пробела, тире и т.п.</p></font>  
<br>
<FORM METHOD=GET ACTION='index.php'>
<INPUT TYPE='hidden' NAME='nazv' VALUE='all'>
<INPUT TYPE='hidden' NAME='id' VALUE='resume'>
<INPUT TYPE='submit' VALUE='все резюме' >
</FORM>
</td>
";
}
?>