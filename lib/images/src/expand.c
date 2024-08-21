#include <pgmspace.h>

// array size is 4608
static const unsigned char expand[] PROGMEM  = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x84, 0xf7, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x84, 0xf7, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x84, 0xf7, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x84, 0xf7, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x9d, 0xb9, 0x42, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x9d, 0xb9, 0x42, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x9d, 0xbb, 0x42, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x42, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x9d, 0xbb, 0x42, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x42, 0xad, 0x8d, 0x79, 0x84, 0xf7, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x9d, 0xfb, 0x42, 0xaf, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x42, 0xad, 0x8d, 0x79, 0xbe, 0xff, 0xbe, 0xff, 0x84, 0xf7, 0x3a, 0xad, 0x3a, 0xad, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x9d, 0xfb, 0x42, 0xef, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x42, 0xad, 0x8d, 0x79, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x84, 0xf7, 0x3a, 0xad, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0x9d, 0xfb, 0x42, 0xef, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x42, 0xad, 0x8d, 0x79, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x7c, 0xf7, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0x9d, 0xfb, 0x42, 0xaf, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x42, 0xad, 0x8d, 0x79, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0x9d, 0xfb, 0x42, 0xaf, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x42, 0xad, 0x8d, 0x37, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xb6, 0xff, 
  0x4a, 0xef, 0x3a, 0xad, 0x3a, 0xad, 0x3a, 0xad, 0x42, 0xad, 0x8d, 0x79, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0x9d, 0xfb, 0x42, 0xef, 0x3a, 0xad, 0x42, 0xad, 0x8d, 0x37, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0x9d, 0xfb, 0x42, 0xef, 0x85, 0x37, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xb6, 0xbd, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0x1b, 0xb5, 0xbe, 0xff, 0xbe, 0xff, 
  0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0xbe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

