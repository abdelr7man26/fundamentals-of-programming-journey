/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Not valid ] => starts with number 
  __name      [ valid | Bad Practice  ] => double __ not recommended
  name@name   [ Not valid  ] => has a special char 
  name10name  [ Valid | bad practice  ] => not subject to coding style  
  name!name   [ Not valid ] => has a special char
  first_NAME  [ Valid | Good practice  ] 
  first_name  [ Valid | Good practice  ] => Snake case
  firstName   [ Valid | Good practice ] => camel Case
  first name  [ Not valid ] => has a space
  fn          [ Valid | Bad practice ] => have no meaning
  public      [ Not valid ] => reserved keyword  
  Public      [ Valid | Good practice ] => Pascal case
*/