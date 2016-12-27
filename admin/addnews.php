<?
include('../includes/config.inc');
include('../includes/func.inc');
if ($today=='ДА')
{
$newsdate=date(Y).date(m).date(d);
}
else
{
$newsdate=$newsyear.$newsmnth.$newsday;
}
$flds="newsdate, newstext";
$ins="'".$newsdate."','".$newstext."'";
echo $query="INSERT INTO sitenews  (".$flds.") VALUES (".$ins.")"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query");  
massage($mysql_qv);
echo "<center><button  onclick='window.close()'>закрыть окно</button></center>";
?>