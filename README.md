# sky1-drivers-dkms (Deprecated)

> **This repository is archived.** All drivers have been migrated into the
> [linux-sky1](https://github.com/Sky1-Linux/linux-sky1) kernel patch set
> as of 6.18.7-2 and are built in-tree. DKMS packages are no longer needed.

## Migration

| Former DKMS Package | Replacement |
|---------------------|-------------|
| r8126-dkms | In-tree `drivers/net/ethernet/realtek/r8126/` |
| sky1-vpu-dkms | In-tree `drivers/media/platform/cix/` (amvx) |
| sky1-npu-dkms | In-tree `drivers/misc/armchina-npu/` |

Users on kernel 6.18.7-sky1.2 or later can remove DKMS packages:

```bash
sudo apt remove r8126-dkms sky1-vpu-dkms
```

The in-tree drivers load automatically. No configuration changes needed.

## License

- r8126: Realtek license (see r8126/LICENSE)
- vpu/npu: CIX proprietary
