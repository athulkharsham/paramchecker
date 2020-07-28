
#define bpm_low 70
#define bpm_high 150
#define sp02_low 80
#define sp02_high 100
#define resprate_low 30
#define resprate_high 60

typedef   bool (*Operation)(float a);

typedef struct
{
  Operation  vitalChecker; // funtion pointer 
}vitals
vitals vitals_obj = {isVitalsOkBpm,
                     isVitalsOkSpo2,
                     isVitalsOkResprate
                     };
bool ifVitalLimitsOk(float value, float minValue, float maxValue)
{
  bool retVal = true;
  
  if( (value < minValue) || (value > maxValue) )
  {
    retVal = false;
  }
  return retVal;
}

/* bool ifVitalsOK(float bpm, float spo2, float respRate)
{
  return (ifVitalLimitsOk(bpm,bpm_low,bpm_high) &&
           ifVitalLimitsOk(spo2,sp02_low,sp02_high) &&
           ifVitalLimitsOk(respRate,resprate_low,resprate_high) );
}
*/
bool isVitalsOkBpm(float value)
{
  return ( ifVitalLimitsOk(value, bpm_low, bpm_high) );
}
bool isVitalsOkSpo2(float value)
{
  return ( ifVitalLimitsOk(value,sp02_low,sp02_high) );
}
bool isVitalsOkResprate(float value)
{
  return ( ifVitalLimitsOk(value,resprate_low,resprate_high) );
}
