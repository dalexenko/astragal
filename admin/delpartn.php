<?
include('../includes/config.inc');
include('../includes/func.inc');
$query="delete from partners where name='".$name."'"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
admin_delete_massage($mysql_qv);
echo "<center><input type='button' value='закрыть окно' onclick='window.close()'></center>";
?>