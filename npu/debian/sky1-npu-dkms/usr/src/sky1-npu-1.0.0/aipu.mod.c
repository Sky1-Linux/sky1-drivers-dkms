#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(armchina_aipu_probe, "", "");
KSYMTAB_FUNC(armchina_aipu_remove, "", "");
KSYMTAB_FUNC(armchina_aipu_suspend, "", "");
KSYMTAB_FUNC(armchina_aipu_resume, "", "");
KSYMTAB_FUNC(armchina_aipu_alloc_dma_buf, "", "");
KSYMTAB_FUNC(armchina_aipu_free_dma_buf, "", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Carmchina,zhouyi-v1");
MODULE_ALIAS("of:N*T*Carmchina,zhouyi-v1C*");
MODULE_ALIAS("of:N*T*Carmchina,zhouyi-v2");
MODULE_ALIAS("of:N*T*Carmchina,zhouyi-v2C*");
MODULE_ALIAS("of:N*T*Carmchina,zhouyi-v3");
MODULE_ALIAS("of:N*T*Carmchina,zhouyi-v3C*");
MODULE_ALIAS("of:N*T*Carmchina,zhouyi");
MODULE_ALIAS("of:N*T*Carmchina,zhouyiC*");
MODULE_ALIAS("acpi*:CIXH4000:*");
