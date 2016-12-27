<td valign="top" class="header" colspan=2>
</td>
</tr>
<tr>
<td valign="top" colspan="2" class="menuline"> 
<?
if (isset($trning))
{
$query="SELECT * FROM training where check='".$trning."'"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
while ($row = mysql_fetch_array($mysql_qv))
 {
 echo "<center>".$row[1]."</center>"; 
 echo $row[3];
 }
echo "
<div align=right>
<input type='button' class='form' value='Записаться' onclick='begin_train()'>
</div>";
}
else
{
 $query="SELECT * FROM training where name_id='тренинги'"; 
 $mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
 $num_rows = mysql_num_rows($mysql_qv);
 if ($num_rows>0)
  {
  echo "<form action='' method='GET'>";
  echo "<center>выберите тренинг:";
  echo "<select name='id'>";
  while ($row = mysql_fetch_array($mysql_qv))
   {
   echo "<option value=".$row[4].">".$row[1]."</option>";
   }
   echo "</select><input type='submit' value='>>'>";
   echo "</form>";
  }
 else
 {
 emptybase ();
 }
}
?>
</td>