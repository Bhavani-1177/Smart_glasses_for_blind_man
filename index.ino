const int trigPin = 9;
const int echoPin = 10;

const int buzzer1 = 3; // Buzzer on D3
const int buzzer2 = 5; // Buzzer on D5
const int ledPin = 4;  // LED on D4

long duration;
int distanceCm, distanceInch;

void setup() {
  Serial.begin(9600);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Trigger ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo time
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance
  distanceCm = duration * 0.034 / 2;
  distanceInch = duration * 0.0133 / 2;

  // Print distance
  Serial.print("Distance (cm): ");
  Serial.println(distanceCm);

  if (distanceCm < 25) {
    // Object is close
    digitalWrite(buzzer1, HIGH);
    digitalWrite(buzzer2, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(500);
  } else {
    // Object is far
    digitalWrite(buzzer1, LOW);
    digitalWrite(buzzer2, LOW);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}