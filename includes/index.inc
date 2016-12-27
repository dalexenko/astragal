
<table width="95%" bgcolor=<?=$bodycolor?> border=0 cellpadding=0 cellspacing=0>
<tr>
<td valign="top" align=left width='20%'>
<?
include("http://".$host."/includes/menul.inc");
?>
<br>
</td>
<td valign="top" align=center width='70%'>
<?
$obj_url = apache_lookup_uri ("index.php");
$obj_url->uri."<br>";
$path = explode("/", $obj_url->uri);
if ($path[1]=='index.php')
{
$file_url = "/".$id.".inc";
}
else
{
$file_url = "/".$path[1]."/".$id.".inc"; 
}

if ($subm)
{
$part="includes";
$file_url = "/".$part."/".$id.".inc"; 
}

insert($title[$id], $file_url);
?>
	</td>
    <td  valign="top" align=right width='10%'>
       <?
	include("http://".$host."/includes/menur.inc");
       ?>
	</td>
  </tr>
  <tr>
  <td colspan="3">
  <?
  include("http://".$host."/includes/footer.inc");
  include("http://".$host."/includes/regbanner.inc");
  ?>
  </td>
  </tr>
</table>
</center>
</body>
</html>