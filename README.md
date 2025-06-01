 # BLDC Motor Mathematical Model with Sensored and Sensorless Control

This repository contains a mathematical model of a Brushless DC (BLDC) motor developed from first principles, along with both **sensored** and **sensorless** control algorithms. The model is designed for transparency, parameter flexibility, and ease of integration in simulation and code generation workflows.

## 🚀 Features

- ✏️ **Custom Mathematical Modeling**  
  Developed from the ground up — no black-box abstraction. Unlike Simscape models, this model exposes internal variables and dynamics clearly.

- 🎛️ **Minimal Parameter Requirement**  
  No need for hard-to-estimate parameters. Requires only a few key values to simulate accurately.

- 🧠 **Control Algorithms Included**  
  - **Sensored control** using rotor position feedback  
  - **Sensorless control** based on back-EMF estimation

- 🔁 **SIL (Software-in-the-Loop) Validation**  
  Code generated from the model is validated against simulation to ensure functional equivalence.

## 🎯 Purpose

The goal of this project is to provide a **transparent and lightweight alternative** to built-in Simscape BLDC models, which:
- Obscure key motor dynamics and internals
- Limit access to simulation outputs
- Often require complex parameters to function properly

This model is ideal for educational, research, and early prototyping applications where visibility and simplicity are essential.

## 🛠️ Requirements

- MATLAB / Simulink (R2021a or later recommended)
- Simulink Coder (for SIL)

## 📄 License

This work is licensed under the **Creative Commons Attribution-NonCommercial 4.0 International License**.  
You are free to use and adapt the contents for **non-commercial purposes**, provided you give appropriate credit.

🔗 [View License Terms](https://creativecommons.org/licenses/by-nc/4.0/)  
📧 Contact for commercial use: hossammohamad142@gmail.com
## 🤝 Contributions

Suggestions and improvements are welcome! Feel free to open an issue or fork the repo.

## 📬 Contact

For technical questions, feedback, or commercial inquiries, please reach out via:
hossammohamad142@gmail.com

