<?
include('../includes/config.inc');
include('../includes/func.inc');

$delfile="photo".$n.".jpg";

$ftp_server = "ftp.astragal.dp.ua";
$ftp_user = "astragal";
$ftp_pass = "i5prmEc";

// set up a connection or die
$conn_id = ftp_connect($ftp_server) or die("Couldn't connect to $ftp_server"); 

// try to login
if (@ftp_login($conn_id, $ftp_user, $ftp_pass)) {
    echo "Connected<br>";
$u=ftp_chdir($conn_id, 'www.astragal.dp.ua/training/photos');
ftp_delete ($conn_id, $delfile) or die("error delete file");
} else {
    echo "Couldn't connect";
}
$query="delete from kursisti where num=".$n; 
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
admin_delete_massage($mysql_qv);
echo "<center><button  onclick='window.close()'>закрыть окно</button></center>";
?>