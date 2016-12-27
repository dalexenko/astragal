<?
include('../includes/config.inc');
include('../includes/func.inc');

$query_sel="select check from training"; 
$mysql_sel = mysql_query ($query_sel, $conn) or die("Invalid query");
while ($row = mysql_fetch_object ($mysql_sel))
{
if ($row->check==$file)
{
$flag=1;
}
else
{
$flag=0;
}
}
if($flag==1)
{
echo "file exist";
}
else
{
chdir ('../training/');
fopen ($file.".inc", "w");

$flds="name_id, name, check";
$ins="'".$name_id."','".$name."','".$file."'";
$query="INSERT INTO training  (".$flds.") VALUES (".$ins.")"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query");  
massage($mysql_qv);
echo "<center><button  onclick='window.close()'>закрыть окно</button></center>";
}
?>