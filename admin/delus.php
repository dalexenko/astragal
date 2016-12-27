<?
include('../includes/config.inc');
include('../includes/func.inc');

$mail=$HTTP_POST_VARS["mail"];

$query="DELETE FROM emails WHERE ADDRESS='".$mail."'";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$r=mysql_affected_rows ($conn);

if ($r==0)
{
echo "<center>В вашей рассылке нет таких подписчиков.</center>"; 
}
else
{
echo "<center><b>e-mail был успешно удален</b></center>";
}
echo "<center><button  onclick='window.close()'>закрыть окно</button></center></td><td>";
?>