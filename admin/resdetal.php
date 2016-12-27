<html>
<LINK REL=STYLESHEET TYPE="text/css" href="../main.css">
<body>
<table border=1 class=regular width='95%' align=center>
<tr>
<td class=grey colspan=2 align=right>
<input type="image" src="../it/print.gif" onClick="window.print()">
</td>
</tr>
<?
include('../includes/config.inc');

$query="SELECT * FROM resumes where num=$n";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query");  
while ($row = mysql_fetch_object ($mysql_qv))
{
$resumeyear=substr($row->resumdate, 0, 4);
$resumonth=substr($row->resumdate, 4, 2);
$resumday=substr($row->resumdate, 6);
$resumdate=$resumday.".".$resumonth.".".$resumeyear;
$bornyear=substr($row->born, 0, 4);
echo "
<tr>
<td class=header colspan=2>
<p>РЕЗЮМЕ № $row->num&nbsp;&nbsp;от $resumdate
</td>
</tr>
<tr>
<td valign='top' width='20%'>
<b>СФЕРЫ ДЕЯТЕЛЬНОСТИ:</b>
</td>
<td>
";
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
echo "
</td>
</tr>
<tr><td>
Дата рождения:
</td>
<td>
$bornyear 
</td>
</tr>
<tr>
<td>
Базовое образование:
</td>
<td>
$row->obraz
</td>
</tr>
<tr>
<td>
Требуемая зарплата:
</td>
<td>
$row->workoplnew
</td>
</tr>
<tr>
<td>
ФИО соискателя:
</td>
<td>
$row->fiosoiskat
</td>
</tr>
<tr>
<td>
Телефон контактный:
</td>
<td>
$row->telcontact
</td>
</tr>
<tr>
<td>
факс:
</td>
<td>
$row->faxcontact
</td>
</tr>
<tr>
<td>
E-mail:
</td>
<td>
$row->emailcont
</td>
</tr>
<tr>
<td>
тест:
</td>
<td>";
$width1=$row->test101*10;
$width2=$row->test104*10;
$width3=$row->test105*10;
$width4=$row->test106*10;
$width5=$row->test107*10;
$pr_width1=round(($row->test101/($row->test101+$row->test104+$row->test105+$row->test106+$row->test107))*100);
$pr_width2=round(($row->test104/($row->test101+$row->test104+$row->test105+$row->test106+$row->test107))*100);
$pr_width3=round(($row->test105/($row->test101+$row->test104+$row->test105+$row->test106+$row->test107))*100);
$pr_width4=round(($row->test106/($row->test101+$row->test104+$row->test105+$row->test106+$row->test107))*100);
$pr_width5=round(($row->test107/($row->test101+$row->test104+$row->test105+$row->test106+$row->test107))*100);
echo "<table class=regular border=0><tr>";
echo "<td>карьера -</td><td><img src='../it/graf.gif' height=10 width=$width1>&nbsp;$pr_width1%</td></tr>";
echo "<tr><td>Деньги , льготы -</td><td><img src='../it/graf.gif' height=10 width=$width2>&nbsp;$pr_width2%</td></tr>";
echo "<tr><td>Приобретение опыта -</td><td><img src='../it/graf.gif' height=10 width=$width3>&nbsp;$pr_width3%</td><tr>";
echo "<tr><td>Дружелюбный коллектив -</td><td><img src='../it/graf.gif' height=10 width=$width4>&nbsp;$pr_width4%</td></tr>";
echo "<tr><td>Стабильность -</td><td><img src='../it/graf.gif' height=10 width=$width5>&nbsp;$pr_width5%</td>";
echo "</tr></table>";
echo "</td><tr><td>
Дополнительные сведения:
</td>
<td>
$row->dopoln
</td>
</tr>";
}
?>
</table>
</body>
</html>