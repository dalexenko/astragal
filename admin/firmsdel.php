<?
include('../includes/config.inc');
include('../includes/func.inc');
$query="delete from firms where num=".$n; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
admin_delete_massage($mysql_qv);
echo "<center><button  onclick='window.close()'>закрыть окно</button></center>";
?>