<?
if (!$_GET['id'] or !is_file($_GET['id'].".inc"))
	{
   header ('Location: /?id=news');
	}
include('../includes/config.inc');
include("http://".$host."/includes/header.inc");
include("http://".$host."/includes/func.inc");
include("http://".$host."/includes/index.inc");
?>
