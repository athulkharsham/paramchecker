
bool vitalsAreOkForBpm(float bpm) {
  if(bpm < 70 || bpm > 150) {
    return false;
  } 
  return true;
}
bool vitalsAreOkForSpo2(float spo2) {
 if(spo2 < 80) {
    return false;
  } 
  return true;
}
bool vitalsAreOkForRespRate(float respRate) {
if(respRate < 30 || respRate > 60) {
    return false;
  }
  return true;
}
