<?
include('../func.inc');
include('../config.inc');

$query="UPDATE firms SET firmname='".$firmname."', sfera1='".$sfera1."', sfera2='".$sfera2.", sfera3='".$sfera3."', sfera4='".$sfera4."', sfera5='".$sfera5."', partner='".$partner."', strana='".$strana."', firmadres='".$firmadres."', firmtel='".$firmtel."', $firmfax='".$firmfax.",
firmemail='".$firmemail."', firmurl='".$firmurl."', firmfiocont='".$firmfiocont."', pwd='".$pwd1."', day='".$day."', month='".$month."', year='".$year."', check='".$check."' where num='".$fid."'"; 

echo $query;

$mysql_qv = mysql_query ($query, $conn) or die("Invalid query");  
massage($mysql_qv);

?>