 L = ((float)tltr/twrd)*100;
    S = ((float)tstc/twrd)*100;
    // Grade calculator.
    index = 0.0588 * L - 0.296 * S - 15.8;
    // final output.
   
   if (index < 1)
   {
    printf("Before Grade 1");
   }
   else if (index >= 16)
   {
    printf("Grade 16+");
   }
   else 
   {
    printf("Grade %d", index);
   }
    