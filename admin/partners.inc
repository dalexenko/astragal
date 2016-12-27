<?
echo "<table class=regular width=99%>";
echo "<td valign='top'><b>список партнеров:</b><br></td><td>";
$query="SELECT year FROM partners group by year";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
if (!$num_rows)
{
echo "<center>список пуст.</center>"; 
}
else
{
while ($row = mysql_fetch_array($mysql_qv))
{
echo "<b>с ".$row[0]." года</b><br>";
$query_in="SELECT name FROM partners where year=".$row[0];
$mysql_in = mysql_query ($query_in, $conn) or die("Invalid query"); 
while ($row_in = mysql_fetch_array($mysql_in))
{
echo $row_in[0]."<br>";
}
}
}
?>
<tr>
<td valign='top' colspan=2>
<hr>
</td>
</tr>
<tr>
<td valign='top'>
<b>Добавить партнера:</b><br>
</td><td>
<form action="adpartnr.php" method="post" target='_blank'>
<textarea name="name" cols="70" rows="5"></textarea><br>
с какого года: <input type="text" name="year" value="2003"><br>
<input type="submit" value="добавить">
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
<b>Удаление партнера:</b><br>
</td>
<td>
<form action="delpartn.php" method="post"  target='_blank'>
<select name="name">
<option selected>------</option>";
<?
$query="SELECT * FROM partners";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
while ($row = mysql_fetch_array($mysql_qv))
{
echo "<option value='".$row[0]."'>".$row[0]."</option>";
}
?>
</select>
<br>
<input type="submit" value=Удалить>
</form>
</td>
</tr>
</table>