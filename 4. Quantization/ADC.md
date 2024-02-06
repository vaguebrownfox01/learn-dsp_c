## Quantization

### 1
- Analog to Digital Converter | **ADC** : Continuous signal to Discrete signal (samples).
- Digital to Analog Converter | **DAC** : Discrete signal (samples) to Continuous signal.
- **Sample and Hold** | S/H : Convert independent variable (e.g. x, time) from continuous to discrete.
- **Digitizer** | Q : Convert dependent variable (e.g. y, voltage) from continuous to discrete.
- **ADC** : S/H -> Q -> Discrete signal

### 2
- Sampling frequency | **fs** : frequency at which the continuous signal is sampled.
- Maximum frequency | **fmax** : Maximum frequency component that is present in the signal.
- Sampling theorem: **fs >= 2 * fmax**
- **Aliasing**: A frequency component (a sinusoid) assumes another frequency (other that its own value)
> if fs < 2 * fmax : Aliasing happens
- Low Pass Filter| **LPF** | Anti-aliasing filter : to remove frequency > 2 * fs
- Digital Signal Processing | **DSP**
- **Analog signal** -> LPF -> ADC -> **DSP** -> DAC -> Analog filter -> **Processed analog signal**

### 3
**Analog filters**: 3 types - optimize different performance parameters 
1. Bessel
2. Chebyshev
3. Butterworth

#### Simple filter: 
- **RC Passive LPF** - passive: only passive components - Resistor | R and Capacitor | C
- cut-off frequency | fc
- Allow only frequency < fc
- Circuit: **R + C**
- **Design: fc = 1 / (2 * pi * R * C)**
> Low pass: capacitor is lower

- **High Pass Filter| HPF**
RC Passive HPF
Allow only frequency > fc
Circuit: **C + R**
> High pass: capacitor is higher

#### ideal vs practical
- **Ideal** Filter : Passband + Stopband
- **Practical** Filter : Passband + Transition + Stopband

#### filter poles
- Filter: More poles => More components => Better performance
- More poles: Cascading Filters

### sallen-key
- Modified Sallen-Key Filter | MSKF - passive + active components (op-amp) - 2 poles
- parameters: k1, k2 - decide resistor values
- 3 Stage MSKF (cascaded): 6 pole Bessel filter

### 4
- Analog filter design : with MSKF cascading
3 types {B, C, B}:  Designed according to k1, k2 value from look-up table
cascaded to increase poles => better performance

### 5
#### filter comparison 
1. Bessel: Best step-response; worst frequency response.
2. Chebyshev: Worst step-response; Best frequency response.
3. Butterworth: Meh step-response; Meh frequency response.

### 6
#### Information encoding
1. Time-domain encoding
2. Frequency-domain encoding

**Audio signal**: Information is present in the frequency component (sinusoids) present in the signal, more than the shape of the waveform.
- Chebyshev and Butterworth: used as anti-aliasing filters; good performance because better roll off; bad step response doesn't affect much.

Get dem samples boi!
