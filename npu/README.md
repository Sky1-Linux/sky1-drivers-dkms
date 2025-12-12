# Sky1 NPU Driver (AIPU)

## Hardware

| Property | Value |
|----------|-------|
| IP | ARM China Zhouyi AIPU (AI Processing Unit) |
| Architecture | Zhouyi V3 |
| Cores | 3 NPU cores (core0-core2) |
| Performance | 30 TOPS (INT8) |
| Base Address | 0x14260000 |
| ACPI ID | CIXH4000 |

## Features

- Neural network inference acceleration
- DVFS (Dynamic Voltage and Frequency Scaling)
- Power domain management per core
- DMA buffer support for zero-copy data transfer

## Driver

- **Module**: `aipu`
- **Interface**: `/dev/aipu` misc device
- **Userspace**: ARM China Compass NPU SDK

## Usage

```bash
# Install driver
sudo apt install sky1-npu-dkms

# Load module
sudo modprobe aipu

# Check device
ls -la /dev/aipu
```

## Device Tree Compatible Strings

- `armchina,zhouyi-v3`
- `armchina,zhouyi-v2`
- `armchina,zhouyi-v1`
- `armchina,zhouyi`
