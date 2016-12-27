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

$query="SELECT * FROM vacances where num=$n";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query");  
while ($row = mysql_fetch_array($mysql_qv))
{
$vacandateyear=substr($row[1], 0, 4);
$vacandatemonth=substr($row[1], 4, 2);
$vacandateday=substr($row[1], 6);
$vacandate=$vacandateday.".".$vacandatemonth.".".$vacandateyear;
echo "
<tr>
<td class=header colspan=2>
ВАКАНСИЯ № $row[0]&nbsp;&nbsp;от $vacandate
</td>
</tr>
<tr>
<td valign='top' width='20%'>
<b>СФЕРЫ ДЕЯТЕЛЬНОСТИ:</b>
</td>
<td>
";
for($i=2; $i<=6; $i++)
	{
	if ($row[$i]=='данных нет'){} else
		{
		echo $row[$i];
                }
	}
echo "
</td>
</tr>
<tr>
<td>Лицо, делающее заказ:</td>
<td>
$row[7]
</td>
</tr>
<tr>
<td>Лицо принимающее решение о найме:</td>
<td>
$row[9]
</td>
</tr>
<tr>
<td>Полное название предприятия:</td>
<td>
$row[10]
</td>
</tr>
<tr>
<td>Дата образования:</td>
<td>
$row[11]
</td>
</tr>
<tr>
<td>Страна происхождения:</td>
<td>
$row[12]
</td>
</tr>
<tr>
<td>Адрес офиса:</td>
<td>
$row[13]
</td>
</tr>
<tr>
<td>Телефон:</td>
<td>
$row[14]
</td>
</tr>
<tr>
<td>Факс:</td>
<td>
$row[15]
</td>
</tr>
<tr>
<td>e-mail:</td>
<td>
$row[16]
</td>
</tr>
<tr>
<td>Тип бизнеса:</td>
<td>
$row[17]
</td>
</tr>
<tr>
<td>Виды продукции:</td>
<td>
$row[18]
</td>
</tr>
<tr>
<td valign=top>Требуемый специалист:</td>
<td>
$row[19]
</td>
</tr>
<tr>
<td valign=top>Цель устанавливаемая подбираемому специалисту:</td>
<td>
<blockquote><div align=justify>$row[21]</blockquote>
</td>
</tr>	
<tr>
<td valign=top>Основные обязанности сотрудника:</td>
<td>
<blockquote><div align=justify>$row[23]</blockquote>
</td>
</tr>
<tr>
<td>Возраст:</td>
<td>
от &nbsp;$row[24]&nbsp;до&nbsp;$row[25]&nbsp;лет
</td>
</tr>
<tr>
<td>Пол:</td>
<td>		
$row[26]
</td>
</tr>
<tr>
<td>Образование:</td>
<td>
$row[27]
</td>
</tr>
<tr>
<td>Опыт работы:</td>
<td>
$row[28]
</td>
</tr>
<tr>
<td>Водительские права, категория: </td>
<td> 
$row[29]
</td>
</tr>
<tr>
<td>Личный автомобиль:</td>
<td>
$row[30]
</td>
</tr>
<tr>
<td>Командировка (%):</td>
<td>
$row[31]
</td>
</tr>
<tr>
<td>Знание иностранных языков:</td>
<td>
$row[32]
</td>
</tr>
<tr>
<td>Знание компьютера (программы):</td>
<td>
$row[33]
</td>
</tr>
<tr>
<td>Другое, важное:</td>
<td>
$row[35]
</td>
</tr>
<tr>
<td>График работы:</td>
<td>
Самое ранее с &nbsp;$row[36]&nbsp; часов. Самое позднее до &nbsp;$row[37] часов
</td>
</tr>
<tr>
<td>Заработная плата:</td>
<td>
На испытательный срок: &nbsp;$row[42]&nbsp; грн. В штате:&nbsp; $row[43]&nbsp; грн.
</td>
</tr>
<tr>
<td>Дополнительные льготы:</td>
<td>
$row[46]
</td>
</tr>
</table>
";
}
?>
</body>
</html>