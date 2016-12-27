<?
include('../includes/config.inc');
include('../includes/smalhead.inc');
?>
<table>
<tr>
<td class=header>
Запись на семинары
</td>
</tr>
<tr>
<td class=subheader>
<form action="mailer.php" method="post">
<p>Фамилия ,  имя,  отчество:   
<input name="fio" type="text" size="50">
<p>Контактная информация (тел):
<input name="continfo" type="text" size="30">
<p>Выберите семинар:
<select name="cource">
<?
$query="SELECT * FROM training where name_id='семинары'";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
while ($row = mysql_fetch_array($mysql_qv))
{
echo "<option>".$row[1]."</option>";
}
?>
</select>
<p>Желаемое время проведения курсов:
<input name="data" type="text" size="30">
	<br>
	<input name="tema" type="hidden" value="курсы">
	<input name="" type="reset" value="сброс">
	<input name="" type="submit" value="отправить">	
</form>
</td>
</tr>
</table>
</body>
</html>