# Sky1 VPU Driver (AMVX)

## Hardware

| Property | Value |
|----------|-------|
| IP | ARM Technology China Linlon MVE (Mali Video Engine) |
| Version | Linlon v8 |
| Cores | 5 AEU cores (aeu0-aeu4) |
| Base Address | 0x14030000 (RCSU), 0x14230000 (VPU) |

## Supported Codecs

| Codec | Decode | Encode |
|-------|--------|--------|
| H.264/AVC | Yes | Yes |
| HEVC/H.265 | Yes | Yes |
| VP8 | Yes | Yes |
| VP9 | Yes | Yes |
| AV1 | Yes | - |
| MPEG-2 | Yes | - |
| MPEG-4 | Yes | - |
| AVS | Yes | - |
| AVS2 | Yes | - |
| JPEG | Yes | Yes |
| VC-1 | Yes | - |

## Driver

- **Module**: `amvx`
- **Interface**: V4L2 stateful codec API
- **Firmware**: Requires codec firmware in `/lib/firmware/*.fwb`

## Usage

```bash
# Install driver
sudo apt install sky1-vpu-dkms sky1-firmware

# Load module
sudo modprobe amvx

# Check V4L2 devices
v4l2-ctl --list-devices
```

## FFmpeg Hardware Decode

```bash
ffmpeg -hwaccel v4l2m2m -i input.mp4 -c:v copy output.mkv
```
