<!-- Php interface to MassSpringSimulation C++ program -->
<html>
<body>

Running impulse simulation for  <?php echo $_POST["numberOfMasses"]; ?> masses... <br>

  <!-- Run c++ program for numberOfMasses-->
<?php
      $numberOfMasses = $_POST["numberOfMasses"];
      exec("./MassSpringSimulationProgram $numberOfMasses", $output);
   
      foreach($output as $line){
	      echo implode(['<br />', $line, '<br />']); // serialize
      }
?>  
  
<br> ...Simulation finished  <br>
  
<!-- Output results -->
  
</body>
	
	
</html>