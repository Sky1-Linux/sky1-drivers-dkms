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


MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00008126sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EEC5ABE7EDFA202529F46DC");
