#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};


MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-dma-sg,videobuf2-common");

MODULE_ALIAS("pci:v000013B5d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("acpi*:CIXH3010:*");
MODULE_ALIAS("of:N*T*Carm,mali-mve");
MODULE_ALIAS("of:N*T*Carm,mali-mveC*");
MODULE_ALIAS("of:N*T*Carm,mali-v500");
MODULE_ALIAS("of:N*T*Carm,mali-v500C*");
MODULE_ALIAS("of:N*T*Carm,mali-v550");
MODULE_ALIAS("of:N*T*Carm,mali-v550C*");
MODULE_ALIAS("of:N*T*Carm,mali-v61");
MODULE_ALIAS("of:N*T*Carm,mali-v61C*");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v5");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v5C*");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v6");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v6C*");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v7");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v7C*");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v8");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v8C*");
