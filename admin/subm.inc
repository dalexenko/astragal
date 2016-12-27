<?
$query="SELECT * FROM emails";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
if (!$num_rows)
{
echo "<table class=regular width=100%>";
echo "<td valign='top'><b>список подписавшихся на вашу рассылку:</b><br></td><td>";
echo "<center>В вашей рассылке нет подписчиков.</center>"; 
}
else
{
echo "<table class=regular width=100%>";
echo "<td valign='top'><b>список подписавшихся на вашу рассылку:</b><br></td><td>";
while ($row = mysql_fetch_array($mysql_qv))
{
echo "$row[0]<br>";
}
echo "</td></tr>";
} 
?>
<tr>
<td valign='top' colspan=2>
<hr>
</td>
</tr>
<tr>
<td valign='top'>
<b>Разослать письмо:</b><br>
</td><td>
<form action="send.php" method="post" target='_blank'>
Тема рассылки:<input name="sub" type="text"><br>
Содержание:<br>
<textarea name="text" cols="70" rows="9"></textarea><br>
<input type="submit" value="разослать">
</form>
</td>
</tr>
<tr>
<td valign='top' colspan=2>
<hr>
</td>
</tr>
<tr>
<td valign='top'>
<b>Удаление определенного подписчика.</b><br>
</td>
<td>
<form action="delus.php" method="post"  target='_blank'>
<input name="mail" type="text"><br>
<input type="submit" value=Удалить>
</form>
</td>
</tr>
</table>
</td>
</tr>
</table>