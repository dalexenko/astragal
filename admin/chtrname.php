<?
include('../includes/config.inc');
include('../includes/func.inc');
$query="update training set name='".$newname."' where name='".$oldname."'"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
massage($mysql_qv);
echo "<center><input type='button' value='закрыть окно' onclick='window.close()'></center>";
?>