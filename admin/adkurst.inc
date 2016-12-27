<form  method="POST" target="_blank" action='addkurst.php'enctype="multipart/form-data" >
<table cellpadding="5" cellspacing="0" border="1" width=99% class='regular'>
<td colspan="4"><marquee><font color="red"><b>УБЕДИТЕЛЬНО ПРОСИМ ВАС ВНИМАТЕЛЬНО ЗАПОЛНЯТЬ ДАННЫЕ!</b></font></marquee><br></td>
</tr>
<tr>
<td colspan="2">Дата рождения:</td>
<td colspan="2">
год:<select name="brnyear">
<option>1950</option>
<option>1951</option>
<option>1952</option>
<option>1953</option>
<option>1954</option>
<option>1955</option>
<option>1956</option>
<option>1957</option>
<option>1958</option>
<option>1959</option>
<option>1960</option>
<option>1961</option>
<option>1962</option>
<option>1963</option>
<option>1964</option>
<option>1965</option>
<option>1966</option>
<option>1967</option>
<option>1968</option>
<option>1969</option>
<option selected>1970</option>
<option>1971</option>
<option>1972</option>
<option>1973</option>
<option>1974</option>
<option>1975</option>
<option>1976</option>
<option>1977</option>
<option>1978</option>
<option>1979</option>
<option>1980</option>
<option>1981</option>
<option>1982</option>
<option>1983</option>
<option>1984</option>
<option>1985</option>
<option>1986</option>
<option>1987</option>
<option>1988</option>
<option>1989</option>
<option>1990</option>
</select>
месяц:<select name="brnmnth">
<option selected>01</option>
<option>02</option>
<option>03</option>
<option>04</option>
<option>05</option>
<option>06</option>
<option>07</option>
<option>08</option>
<option>09</option>
<option>10</option>
<option>11</option>
<option>12</option>
</select>
день:<select name="brnday">
<option selected>01</option>
<option>02</option>
<option>03</option>
<option>04</option>
<option>05</option>
<option>06</option>
<option>07</option>
<option>08</option>
<option>09</option>
<option>10</option>
<option>11</option>
<option>12</option>
<option>13</option>
<option>14</option>
<option>15</option>
<option>16</option>
<option>17</option>
<option>18</option>
<option>19</option>
<option>20</option>
<option>21</option>
<option>22</option>
<option>23</option>
<option>24</option>
<option>25</option>
<option>26</option>
<option>27</option>
<option>28</option>
<option>29</option>
<option>30</option>
<option>31</option>
</select>
</td>
</tr>
<tr> 
<td colspan="2">Базовое образование: </td>
<td colspan="2"> 
<select name="obraz">
<option>нет</option>
<option selected>среднее</option>
<option>среднее специальное</option>
<option>неоконченное высшее</option>
<option>высшее</option>
</select>
</td>
</tr>
<tr> 
<td colspan="2">Полное название учебного заведения:</td>
<td colspan="2"> 
<input type="text" name="vuzoffice" size="70" maxlength="40">
</td>
</tr>
<tr> 
<td colspan="2">Форма обучения:</td>
<td colspan="2"> 
<select name="obrazform">
<option>нет</option>
<option selected>дневное</option>
<option>заочное</option>
<option>вечернее</option>
<option>другое</option>
</select>
</td>
</tr>
<tr> 
<td colspan="2">Специальность, квалификация:</td>
<td colspan="2"> 
<input type="text" name="vuzkvalific" size="40" maxlength="40">
</td>
</tr>
<tr> 
<td colspan="4"><b>курс: </b></td>
</tr>
<tr> 
<td colspan="2">Название:</td>
<td colspan="2">
<select name="cource">
<?
$query="SELECT * FROM training";
$mysql_qv = mysql_query ($query, $conn) or die("Invalid query"); 
$num_rows = mysql_num_rows($mysql_qv);
while ($row = mysql_fetch_array($mysql_qv))
{
echo "<option>".$row[1]."</option>";
}
?>
</select>
</td>
</tr>
<tr> 
<td colspan="4">Иностранные языки: 
<input type="text" name="forlang" value="таковых нет" size="45" maxlength="45">
</td>
</tr>
<tr> 
<tr> 
<td colspan=2>Требуемая зарплата: </td>
<td> 
<select name="workopl">
<option selected>до 200 грн</option>
<option>от 200 и выше </option>
<option>от 400 и выше</option>
<option>от 500 и выше</option>
<option>от 1000 и выше</option>
</select>
</td>
</tr>
<tr align="center" valign="top"> 
<td colspan="4">Фамилия 
<input type="text" name="fiof">
Имя 
<input type="text" name="fioi">
</td>
</tr>
<tr align="center" valign="top"> 
<td colspan="4">Отчество 
<input type="text" name="fioo">
</td>
</tr>
<tr> 
<td colspan="2">Профессиональные достижения:</td>
<td colspan="2">
<textarea name="officedost" value="нет" cols="30"></textarea>
</td>
</tr>
<tr>
<td colspan="2">
<input type='hidden' name='MAX_FILE_SIZE' value='50000'>
Выберите фотографию курсиста: <input name='userfile' type='file' value='обзор'>
<br> 
</td>
</tr>
<tr> 
<td colspan="2"> 
<input type="submit" value="Отослать">
</td>
<td colspan="2"> 
<input type="reset" value="Очистить">
</td>
</tr>
</table>
</form>