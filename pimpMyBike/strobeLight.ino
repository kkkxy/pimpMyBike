
int strobePixels [16*32] = 
{
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 1, 1, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 1, 1, 1, 1, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 1, 1, 1, 1, 1, 1, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    1, 1, 1, 0, 0, 1, 1, 1, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 1, 
    1, 1, 0, 0, 0, 0, 1, 1, 
    1, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 1, 1, 
    1, 0, 0, 1, 1, 0, 0, 1, 
    1, 1, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 1, 1, 1, 
    0, 0, 1, 1, 1, 1, 0, 0, 
    1, 1, 1, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 1, 1, 1, 0, 
    0, 1, 1, 1, 1, 1, 1, 0, 
    0, 1, 1, 1, 0, 0, 0, 0, 
    0, 0, 0, 0, 1, 1, 1, 0, 
    0, 1, 1, 1, 1, 1, 1, 0, 
    0, 1, 1, 1, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 1, 1, 1, 
    0, 0, 1, 1, 1, 1, 0, 0, 
    1, 1, 1, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 1, 1, 
    1, 0, 0, 1, 1, 0, 0, 1, 
    1, 1, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 1, 
    1, 1, 0, 0, 0, 0, 1, 1, 
    1, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    1, 1, 1, 0, 0, 1, 1, 1, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 1, 1, 1, 1, 1, 1, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 1, 1, 1, 1, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 1, 1, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0
};

void drawStrobe(){
  for(int i = 0; i < 16*32; i++){
    matrix.drawPixel(i%width, i/32, strobePixels[i]);
  }
  matrix.writeScreen();
}
