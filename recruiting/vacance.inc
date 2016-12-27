<?
if ($nazv)
{
if ($nazv=='all')
{
$query="SELECT * FROM vacances where enable=1 ORDER BY `num` DESC";
}
else
{
$query="SELECT * FROM vacances where enable=1 and specialist like '%".$nazv."%'or other like '%".$nazv."%' ORDER BY `num` DESC";
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
$vacandateyear=substr($row->vacandate, 0, 4);
$vacandatemonth=substr($row->vacandate, 4, 2);
$vacandateday=substr($row->vacandate, 6);
$vacandate=$vacandateday.".".$vacandatemonth.".".$vacandateyear;
echo "<br><table border=1 width='95%' bordercolor='navy' align=center><tr><td class=header width=60%>";
echo "ВАКАНСИЯ №".$row->num;
echo "<td align=right class=subheader>от ".$vacandate."</td>";
echo "</tr><tr>";
echo "<td colspan=2 class=regular><blockquote><b>Сферы деятельности:&nbsp;</b>";
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
echo "</td>";
}
else
{
echo "
<tr>
<td valign='top' class='regular' colspan=2 align=center>
<p>ВВЕДИТЕ ДОЛЖНОСТЬ (МОЖНО ВВЕСТИ ЧАСТЬ СЛОВА)<font color='red'>*</font>:</p> 
<FORM METHOD=GET ACTION='index.php'>
<INPUT TYPE='text' NAME='nazv' SIZE=50>
<INPUT TYPE='hidden' NAME='id' VALUE='vacance'>
<INPUT TYPE='submit' VALUE='найти' >
</FORM>
<br>
<font color='red'><p>* при вводе учитываются символы пробела, тире и т.п.</p></font> 
<br>
<FORM METHOD=GET ACTION='index.php'>
<INPUT TYPE='hidden' NAME='nazv' VALUE='all'>
<INPUT TYPE='hidden' NAME='id' VALUE='vacance'>
<INPUT TYPE='submit' VALUE='все вакансии' >
</FORM>
</td>
";
}
?>