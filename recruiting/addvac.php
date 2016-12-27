<?
include('../includes/config.inc');
include("http://".$host."/includes/smalhead.inc");
include("http://".$host."/includes/func.inc");
$vacandate=date(Y).date(m).date(d);

$flds="vacandate, sfera1, sfera2, sfera3, fioquery, strana, officephone, officefax, officeemail, specialist, minvoz, maxvoz, pol, obrazow, other, workbegin, workend, payispsroc, payshtat";

$ins="'".$vacandate."','".$sfera1."','".$sfera2."','".$sfera3."','".$fioquery."','".$strana."','".$officephone."','".$officefax."','".$officeemail."','".$specialist."','".$minvoz."','".$maxvoz."','".$pol."','".$obrazow."','".$other."','".$workbegin."','".$workend."','".$payispsroc."','".$payshtat."'";
$query="INSERT INTO vacances  (".$flds.") VALUES (".$ins.")"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query");  
massage($mysql_qv);
echo "<center><button  onclick='window.close()'>закрыть окно</button></center>"; 
?>