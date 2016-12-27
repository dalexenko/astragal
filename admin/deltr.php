<?
include('../includes/config.inc');
include('../includes/func.inc');

$ftp_server = "ftp.astragal.dp.ua";
$ftp_user = "astragal";
$ftp_pass = "i5prmEc";

// set up a connection or die
$conn_id = ftp_connect($ftp_server) or die("Couldn't connect to $ftp_server"); 

// try to login
if (@ftp_login($conn_id, $ftp_user, $ftp_pass)) {
} 
else 
{
    echo "Couldn't connect";
}
$u=ftp_chdir($conn_id, 'www.astragal.dp.ua/training');

$query_sel="select check from training where check='".$file."'"; 
$mysql_sel = mysql_query ($query_sel, $conn) or die("Invalid query");
while ($row = mysql_fetch_array ($mysql_sel))
{
echo $del = ftp_delete ($conn_id, $row[0].".inc");
} 

$query="delete from training where check='".$file."'"; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query");
admin_delete_massage($mysql_qv);
echo "<center><button  onclick='window.close()'>закрыть окно</button></center>";
?>