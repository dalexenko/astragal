<?
include('../includes/config.inc');
include('../includes/func.inc');

$query_s="SELECT * FROM partners where name='".$name."'";
$mysql_qvs = mysql_query ($query_s, $conn); //or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qvs);

if ($num_rows==0)
{                                            
$query="INSERT INTO partners (name, year) VALUES ('".$name."','".$year."')";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
echo "<center><b>Организация успешно сохранена</b></center>";
}
else
{
echo "<center><b>Организация уже есть в списке!</b></center>";
}
echo "<center><input type='button' value='закрыть окно' onclick='window.close()'></center>";
?>
</td>
</tr>
</table> 