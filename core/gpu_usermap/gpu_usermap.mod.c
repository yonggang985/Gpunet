#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x14522340, "module_layout" },
	{ 0x42e80c19, "cdev_del" },
	{ 0x4f1939c7, "per_cpu__current_task" },
	{ 0xc45a9f63, "cdev_init" },
	{ 0xcff53400, "kref_put" },
	{ 0x88765bb5, "nvidia_p2p_free_page_table" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0xdd822018, "boot_cpu_data" },
	{ 0x7edc1537, "device_destroy" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x343a1a8, "__list_add" },
	{ 0xeacba72c, "nvidia_p2p_put_pages" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0x4bf79039, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0xacdeb154, "__tracepoint_module_get" },
	{ 0xb4390f9a, "mcount" },
	{ 0xf487b36a, "nvidia_p2p_get_pages" },
	{ 0x521445b, "list_del" },
	{ 0x2d2cf7d, "device_create" },
	{ 0xa6d1bdca, "cdev_add" },
	{ 0xcbd81171, "module_put" },
	{ 0x2044fa9e, "kmem_cache_alloc_trace" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xc911f7f0, "remap_pfn_range" },
	{ 0xe06bb002, "class_destroy" },
	{ 0xe46d84e9, "get_page" },
	{ 0xa2654165, "__class_create" },
	{ 0x3302b500, "copy_from_user" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvidia";


MODULE_INFO(srcversion, "4707116FADD8F908BE1401C");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 4,
};
