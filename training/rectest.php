<?
include('../includes/config.inc');
include('../includes/smalhead.inc');
?>
<table>
<tr>
<td class=header>
Запись на тестирование
</td>
</tr>
<tr>
<td class=subheader>
<form action="mailer.php" method="post">
<p>Фамилия ,  имя,  отчество:   
<input name="fio" type="text" size="50">
<p>Контактная информация:
<input name="continfo" type="text" size="30">
<p>Выберите курс:
<select name="cource">
      <option>полное тестирование</option>
	  <option>краткое тестирование</option>
</select>
<p>Желаемое время проведения тестирования:
<input name="data" type="text" size="30">
	<br>
	<input name="tema" type="hidden" value="тестирование">
	<input name="" type="reset" value="сброс">
	<input name="" type="submit" value="отправить">	
</form>
</td>
</tr>
</table>
</body>
</html>