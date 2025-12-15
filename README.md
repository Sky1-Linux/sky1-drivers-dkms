# sky1-drivers-dkms

DKMS driver packages for CIX Sky1 SoC (Radxa Orion O6).

## Drivers

| Driver | Package | Description |
|--------|---------|-------------|
| r8126 | r8126-dkms | Realtek RTL8126 5GbE Ethernet |
| vpu | sky1-vpu-dkms | ARM Linlon MVE v8 Video Processing Unit |
| npu | sky1-npu-dkms | ARM Zhouyi V3 Neural Processing Unit (30 TOPS) |

## Building

```bash
# Build r8126-dkms
cd r8126
dpkg-buildpackage -us -uc -b

# Install
sudo dpkg -i ../r8126-dkms_*.deb
```

## Installation from APT

```bash
# Add Sky1 Linux repository first, then:
sudo apt install r8126-dkms
```

## License

- r8126: Realtek license (see r8126/LICENSE)
- vpu/npu: CIX proprietary
