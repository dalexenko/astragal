<?
if (!$id)
{
header ("location: http://".$host."/?id=main");
}
else
{
}
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
<head>
<title>Астрагал. Частная рекрутинговая компания. Днепропетровск Recruitment Company Astragal, Dniepropetrovsk, Ukraine </title>
<META NAME="Description" CONTENT=" Астрагал. Частная рекрутинговая компания: элитные вакансии от $300 в Днепропетровске, Киеве, городах Украины">
<meta name="robots" content="all">
<meta http-equiv="Content-Language" content="ru">
<meta http-equiv="Content-Type" content="text/html; charset=windows-1251">
<META content="no-cache" http-equiv="pragma">
<meta name="keywords" content="вакансия, вакансии, резюме, работа, робота, праця, кадры, персонал, ресурсы, агентство, агенство, агентсво, агенція, рекрутинг, рекруитинг, headhunting, хэдхантинг, трудоустройство, бюро, карьера, филиал, руководитель, менеджер, специалист, программист, системотехник, юрист, HR, ОК, продавец, секретарь, бухгалтер, психолог, региональный, представитель, проектный, консультант, качество, стандарт, управление, бизнес, банк, финансы, торговый, IT, CV, подбор, пiдбiр, информационные, услуги, требуется, поиск, пошук, зарплата, доход, заработок, профессия, кадровое, Киев, Днепропетровск, Днепропетровске, Днепрпетровск, Dnipropetrovsk, Dnipropetrovs'k, Dnepropetrovsk, Dniepropetrovsk, Харьков, Донецк, Запорожье, Одесса, Львов, Астрагал, astragal, Украина, Ukraine, Ukraina, сеть, консалтинг, ВУЗ, executive, search, CEO, топ, хантинг, рекрутинговое, рекруитинговое, рекрутер, рекруитер, рекруитмент, рекрутмент, project, manager, IPMA, UPMA, job, марчендайзер, мерчендайзер, мерчандайзер, штатное, оргструктура, FMCG, RSM, regional, area, sales, сэйл, recruiters, recruitment, recruiting, candidates, hiring, hire, staff, salary, agency,  professionalism, manager, specialist, human, compensation, applicant, curriculum, vitae, resume, personnel, emploiment, employees">
<LINK REL=stylesheet HREF="http://<?=$host ?>/includes/main.css" TYPE="text/css">
<title>АСтРаГАЛ</title>
<script src="http://<?=$host ?>/includes/jscripts.js"></script>
<script type="text/javascript" language="JavaScript1.2" src="http://<?=$host ?>/includes/topmenu.js"></script>
</head>
<body topmargin=0 leftmargin=0>
<center>
<table width="95%"  bgcolor=<?= $bodycolor?> border=0 cellpadding=0 cellspacing=0>
<tr>
<td colspan=2>
<hr color=<?=$bodycolor?>>
</td>
</tr>
<tr bgcolor="white">
<td width=40% valign=top>
<img src='http://<?=$host ?>/pics/title.gif' align=left>
</td>
<td width=60% valign=top>
<?
include("http://".$host."/includes/ubsbig.inc");
?>
</td>
</tr>
<tr valign=top>
<td colspan=2 align="center">
<script type="text/javascript" language="JavaScript1.2">
<!--
stm_bm(["menu46b3",400,"","http://<?=$host ?>/pics/blank.gif",0,"","",0,0,250,0,1000,1,0,0,""],this);
stm_bp("p0",[0,4,0,0,1,2,0,7,100,"",-2,"",-2,90,0,0,"#000000","#3399ff","",3,0,0,"#ffffff"]);
stm_ai("p0i0",[6,1,"#ffffff","",-1,-1,0]);
stm_ai("p0i1",[0,"на главную","","",-1,-1,0,"http://<?=$host?>","_self","","","","",0,0,0,"","",0,0,0,0,1,"#3399ff",0,"#3399ff",0,"","",3,3,0,0,"#ffffff","#ffffff","#ffffff","#ff0000","bold 10pt Arial","bold 10pt Arial",0,0]);
stm_aix("p0i2","p0i0",[]);

stm_ai("p0i1",[0,"новости","","",-1,-1,0,"http://<?=$host?>/?id=news","_self","","","","",0,0,0,"","",0,0,0,0,1,"#3399ff",0,"#3399ff",0,"","",3,3,0,0,"#ffffff","#ffffff","#ffffff","#ff0000","bold 10pt Arial","bold 10pt Arial",0,0]);
stm_aix("p0i2","p0i0",[]);

stm_aix("p0i3","p0i1",[0,"рекрутинг","","",-1,-1,0,"","_self","","","","",0,0,0,"http://<?=$host ?>/pics/arrow_r.gif","http://<?=$host ?>/pics/arrow_r.gif",7,7]);
stm_bpx("p1","p0",[1,4,0,0,1,2,0,0]);
stm_aix("p1i0","p0i1",[0,"вакансии","","",-1,-1,0,"http://<?=$host?>/recruiting/?id=vacance"]);
stm_aix("p1i1","p0i1",[0,"резюме","","",-1,-1,0,"http://<?=$host?>/recruiting/?id=resume"]);
stm_aix("p1i2","p0i1",[0,"анкета для соискателя","","",-1,-1,0,"http://<?=$host?>/recruiting/?id=anketa"]);
stm_aix("p1i3","p0i1",[0,"заявка для работодателя","","",-1,-1,0,"http://<?=$host?>/recruiting/?id=sworker"]);
stm_ep();
stm_aix("p0i4","p0i0",[]);
stm_aix("p0i5","p0i3",[0,"тренинг"]);
stm_bpx("p2","p0",[1,4]);
stm_aix("p2i0","p0i3",[0,"семинары"]);
stm_bpx("p3","p1",[1,2]);
<?
$i=0;
$query="SELECT * FROM training where name_id='семинары'";
 $mysql_qv = mysql_query ($query, $conn) or die("Invalid query");
 $num_rows = mysql_num_rows($mysql_qv);
 while ($row = mysql_fetch_array($mysql_qv))
{
echo 'stm_aix("p3i'.$i.'","p0i1",[0,"'.$row[1].'","","",-1,-1,0,"http://'.$host.'/training/?id='.$row[2].'"]);';
//echo 'stm_aix("p4i'.$i.'","p0i1",[0,"'.$row[1].'","","",-1,-1,0,"http://'.$host.'/training/?id='.$row[2].'"]);';
$i=$i+1;
}
?>
stm_ep();
stm_aix("p2i1","p0i3",[0,"тренинги"]);
stm_bpx("p4","p3",[]);
<?
$i=0;
$query="SELECT * FROM training where name_id='тренинги'";
 $mysql_qv = mysql_query ($query, $conn) or die("Invalid query");
 $num_rows = mysql_num_rows($mysql_qv);
 while ($row = mysql_fetch_array($mysql_qv))
{
echo 'stm_aix("p4i'.$i.'","p0i1",[0,"'.$row[1].'","","",-1,-1,0,"http://'.$host.'/training/?id='.$row[2].'"]);';
$i=$i+1;
}
?>
stm_ep();
stm_aix("p2i2","p0i1",[0,"тестирование","","",-1,-1,0,"http://<?=$host?>/training/?id=tests"]);
stm_aix("p2i3","p0i1",[0,"курсисты","","",-1,-1,0,"http://<?=$host?>/training/?id=kursisti"]);
stm_ep();
stm_aix("p0i6","p0i0",[]);
stm_aix("p0i7","p0i1",[0,"партнерство","","",-1,-1,0,""]);
stm_ep();
stm_aix("p0i2","p0i0",[]);
stm_em();
//-->
</script>

<hr color=<?=$bodycolor?>>
</td>
</tr>
</table>