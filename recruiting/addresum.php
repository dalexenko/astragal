<?
include('../includes/config.inc');
include("http://".$host."/includes/smalhead.inc");
include("http://".$host."/includes/func.inc");

$resumdate=date(Y).date(m).date(d);
$born = $brnyear.$brnmnth.$brnday;
$fiosoiskat = $fiof." ".$fioi." ".$fioo;

$flds="resumdate, sfera1, sfera2, sfera3, born, obraz, workoplnew, fiosoiskat, telcontact, faxcotact, emailcont, test101, test104, test105, test106, test107, dopoln";   

$ins="'".$resumdate."','".$sfera1."','".$sfera2."','".$sfera3."','".$born."','".$obraz."','".$workoplnew."','".$fiosoiskat."','".$telcontact."','".$faxcotact."','".$emailcont."','".$test101."','".$test104."','".$test105."','".$test106."','".$test107."','".$dopoln."'";
$query="INSERT INTO resumes (".$flds.") VALUES (".$ins.")"; 
$mysql_qv = mysql_query ($query, $conn);  
massage($mysql_qv);
?>