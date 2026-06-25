# tx_rx_esp32
# Transmission and Reception of Signal Using ESP32 with Machine Learning-Based Intelligent Beam Selection

## Overview
This project presents a low-cost intelligent beam selection system using three ESP32 microcontrollers and Machine Learning. One ESP32 acts as a Wi-Fi transmitter, while two ESP32 receivers continuously measure RSSI (Received Signal Strength Indicator) values. A trained Machine Learning model predicts the optimal receiver (beam) in real time, improving wireless communication reliability in indoor environments.

## Features
- Real-time RSSI data collection using ESP32
- Intelligent beam selection using Machine Learning
- Live Python dashboard for visualization
- Exponential Moving Average (EMA) filtering for noise reduction
- LED indication for selected receiver
- Low-cost hardware implementation

### Hardware
- ESP32 DevKit V1 (3 modules)
- LEDs
- Breadboard
- Resistors
- Jumper wires

### Software
- Python
- Arduino IDE
- Scikit-learn
- Matplotlib
- PySerial
- NumPy
- Joblib
- Google Colab

## Machine Learning Models 
- Random Forest
- Support Vector Machine (SVM)
- K-Nearest Neighbors (KNN)
- Multi-Layer Perceptron (MLP)

The MLP model achieved **99.97% test accuracy**.

## System Workflow
1. ESP32 transmitter broadcasts a Wi-Fi beacon.
2. Two ESP32 receivers measure RSSI values.
3. RSSI values are filtered using EMA.
4. Data is sent to the Python application.
5. The trained ML model predicts the strongest beam.
6. The selected receiver's LED is turned ON.
7. Live dashboard displays RSSI values and beam selection.

## Project Structure

```
├── Arduino_Code/
│   ├── Transmitter/
│   ├── Receiver1/
│   └── Receiver2/
│
├── Python/
│   ├── dashboard.py
│   ├── predict.py
│   └── serial_reader.py
│
├── ML_Model/
│   ├── model.pkl
│   └── scaler.pkl
│
├── Images/
├── Report/
└── README.md
```

## Results
- Neural Network Accuracy: **99.97%**
- End-to-End Latency: **65 ms**
- Dataset Size: **17,270 RSSI samples**
- Low-cost implementation using ESP32 modules

## Future Improvements
- Deploy ML model directly on ESP32 using TensorFlow Lite Micro
- Support multiple receiver nodes
- Reinforcement Learning for adaptive beam selection
- Dynamic environment testing
- 3D indoor localization

## Authors
- Bagyalakshmi A
- R. Ssadhana
- Ditsa Chakraborty

## Guide
Dr. T. S. Balaji

## License
This project is developed for academic and research purposes.
