<html>
  <head>
    <title>  Cloud Simulation </title>
  </head>
  <body>
		<p> Test program for Simulation in the cloud </p> 
    
		<!-- Large textbox for input of BDF file -->
		<form action="BDFInterface.php" method="post">
			<textarea class="FormElement" name="BDFInput" id="BDFInput" cols="40" rows="4"></textarea><br>
			<input type="submit">
		</form>
		
		
		<!-- Input form for simulation -->
		Input the number of masses (integer): 
		<form action="MassSpringInterface.php" method="post">
			Number of masses: <input type="text" name="numberOfMasses"><br>
			<input type="submit">
		</form>
		
		 
    <?php
      // echo phpinfo();
    ?>
  </body>
  
 </html>