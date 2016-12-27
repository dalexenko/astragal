<?
include('../includes/config.inc');
include('../includes/smalhead.inc');
?>
<table>
<tr>
<td class=header>
Запись на тренинги
</td>
</tr>
<tr>
<td class=subheader>
<form action="mailer.php" method="post">
<p>Фамилия ,  имя,  отчество:   
<input name="fio" type="text" size="50">
<p>Контактная информация:
<input name="continfo" type="text" size="30">
<p>Выберите тренинг:
<select name="cource">
<?
$query="SELECT * FROM training where name_id='тренинги'";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
while ($row = mysql_fetch_array($mysql_qv))
{
echo "<option>".$row[1]."</option>";
}
?>
</select>
<p>Желаемое время проведения тренинга:
<input name="data" type="text" size="30">
	<br>
	<input name="tema" type="hidden" value="тренинг">
	<input name="" type="reset" value="сброс">
	<input name="" type="submit" value="отправить">	
</form>
</td>
</tr>
</table>
</body>
</html>