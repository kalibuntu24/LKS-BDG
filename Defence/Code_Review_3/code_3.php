<!DOCTYPE html>
<html>
<head>
   <title>Code 3</title>
</head>
<body>
<div align="center">
   <form method="GET" action="" name="form">
   <p>Your name:<input type="text" name="username"></p>
   <input type="submit" name="submit" value="Submit">
</form>
	</div>
<?php
if(isset($_GET["username"]))

	echo("Your name is ".$_GET["username"])?>
</body>
</html>