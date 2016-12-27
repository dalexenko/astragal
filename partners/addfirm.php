<?
include('../func.inc');
include('../config.inc');
$firmdate=date(Y).date(m).date(d);

$flds="firmdate, firmname, sfera1, sfera2, sfera3, sfera4, sfera5, partner, strana, firmadres, firmtel, firmfax, firmemail, firmurl, firmfiocont, pwd, day, month, year, check";

$ins="'".$firmdate."','".$firmname."','".$sfera1."','".$sfera2."','".$sfera3."','".$sfera4."','".$sfera5."','".$partner."','".$strana."','".$firmadres."','".$firmtel."','".$firmfax."','".$firmemail."','".$firmurl."','".$firmfiocont."','".$pwd1."','".$day."','".$month."','".$year."','".$check."'";

$query="INSERT INTO firms  (".$flds.") VALUES (".$ins.")"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query");  
massage($mysql_qv);
echo "<center>";
echo "Вам присвоен ID - <font size=3><b>".select_regnum()."</b></font>";
echo "<br>Используйте его как логин для входа в раздел редактирования данных о фирме</center>";
?>