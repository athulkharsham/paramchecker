
#define bpm_low 70
#define bpm_high 150
#define sp02_low 80
#define sp02_high 100
#define resprate_low 30
#define resprate_high 60

bool ifVitalLimitsOk(float value, float minValue, float maxValue)
{
  bool retVal = true;
  
  if( (value < minValue) || (value > minValue) )
  {
    retVal = false;
  }
  return retVal;
}

bool ifVitalsOK(float bpm, float spo2, float respRate)
{
  return (ifVitalLimitsOk(bpm,bpm_low,bpm_high) &&
           ifVitalLimitsOk(spo2,sp02_low,sp02_high) &&
           ifVitalLimitsOk(respRate,resprate_low,resprate_high) )
}
