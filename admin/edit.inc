<?
$query="SELECT * FROM training";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
if (!$num_rows)
{
echo "<center>список пуст.</center>"; 
}
else
{
echo "<table class=regular width=99%>";
echo "<td valign='top'><b>список семинаров и тренингов:</b><br></td><td>";
while ($row = mysql_fetch_object($mysql_qv))
{
echo "$row->name<br>";
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
<b>Редактирование файла:</b><br>
</td>
<td>
<form action="edit.php" method="post"  target='_blank'>
<select name="file">
<?
$query="SELECT * FROM training";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
while ($row = mysql_fetch_object($mysql_qv))
{
echo "<option value='".$row->check.".inc'>".$row->name."</option>";
}
?>
</select>
<br>
<input type="submit" value=Редактировать>
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
<b>Редактирование названия:</b><br>
</td>
<td>
<form action="chtrname.php" method="post"  target='_blank'>
<select name="oldname">
<?
$query="SELECT * FROM training";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
while ($row = mysql_fetch_object($mysql_qv))
{
echo "<option value='".$row->name."'>".$row->name."</option>";
}
?>
</select>
<br>
<textarea name="newname" cols="50" rows="3"> новое имя</textarea><br>
<input type="submit" value="сменить название">
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
<b>Удаление тренинга (семинара):</b><br>
</td>
<td>
<form action="deltr.php" method="post"  target='_blank'>
<select name="file">
<?
$query="SELECT * FROM training";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
while ($row = mysql_fetch_object($mysql_qv))
{
echo "<option value='".$row->check."'>".$row->name."</option>";
}
?>
</select>
<br>
<input type="submit" value=Удаление>
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
<b>Добавить тренинг (семинар):</b><br>
</td>
<td>
<form action="addtr.php" method="post"  target='_blank'>
<select name="name_id">
<option value='тренинги'>тренинг</option>
<option value='семинары'>семинар</option>
</select><br>
введите название семинара (тренинга):<input type=text name=name><br>
введите имя файла: <input type=text name=file><br>  
<input type="submit" value=Добавить>
</form>
</td>
</tr>
</table>