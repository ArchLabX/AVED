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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb730487b, "finish_wait" },
	{ 0x832f2d24, "pci_get_device" },
	{ 0xae5686b7, "class_destroy" },
	{ 0x40a621c5, "scnprintf" },
	{ 0xa8e5b801, "__pci_register_driver" },
	{ 0xd5c3f38c, "up" },
	{ 0xacac6336, "memcpy_fromio" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x2d361c45, "remap_pfn_range" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0x5e505530, "kthread_should_stop" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x02e1dca7, "free_pages" },
	{ 0x1c7405b2, "__dynamic_dev_dbg" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0x33a5bd33, "pci_unregister_driver" },
	{ 0xd272d446, "__fentry__" },
	{ 0xdd6830c7, "sysfs_emit" },
	{ 0x95aa0182, "wake_up_process" },
	{ 0x03bcb167, "pci_read_config_dword" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xcb5bc4b5, "memcpy_toio" },
	{ 0xd272d446, "dump_stack" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "schedule" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xff0106da, "refcount_warn_saturate" },
	{ 0xed25583d, "driver_create_file" },
	{ 0x9479a1e8, "strnlen" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0xc0061edf, "_dev_info" },
	{ 0x86d206f6, "__SCT__WARN_trap" },
	{ 0x0c161ddc, "capable" },
	{ 0x177a5462, "module_put" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0x48fd0ca0, "get_zeroed_page_noprof" },
	{ 0xcd1d5f99, "cdev_add" },
	{ 0x53eb37d8, "device_create_file" },
	{ 0x3e4749a7, "pci_find_capability" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xeb73a68a, "pci_iomap_range" },
	{ 0x4b846600, "devm_kfree" },
	{ 0xc0061edf, "_dev_err" },
	{ 0xbe884d55, "kill_pid" },
	{ 0xc866a218, "device_create" },
	{ 0x5881f1ab, "noop_llseek" },
	{ 0xbff2473f, "class_create" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x9502f0fd, "__xa_alloc_cyclic" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0xd272d446, "__put_user_1" },
	{ 0x885eae7d, "pci_read_config_word" },
	{ 0x1349c02f, "const_current_task" },
	{ 0xc609ff70, "strncpy" },
	{ 0xbd03ed67, "phys_base" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0x3c0300ea, "eventfd_ctx_fdget" },
	{ 0xd2f1c5c6, "kthread_stop" },
	{ 0x173ec8da, "sscanf" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x3d395066, "wait_for_completion_killable" },
	{ 0xd17b47a7, "pci_iounmap" },
	{ 0x0e9cab28, "memset" },
	{ 0xc0061edf, "_dev_warn" },
	{ 0x05403c50, "pci_set_master" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0x36f55e86, "devm_hwmon_device_register_with_info" },
	{ 0x4617d87b, "proc_remove" },
	{ 0x888b8f57, "strcmp" },
	{ 0xbd03ed67, "USER_PTR_MAX" },
	{ 0x058c185a, "jiffies" },
	{ 0xb37cf93c, "kthread_create_on_node" },
	{ 0x4aeb5613, "xa_erase" },
	{ 0xdd6830c7, "sprintf" },
	{ 0x506ca276, "pcie_get_readrq" },
	{ 0xf1de9e85, "vfree" },
	{ 0x0bc5fb0d, "unregister_chrdev_region" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0x66bf3c87, "proc_set_user" },
	{ 0x64fbd2ce, "proc_set_size" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x4bd2df26, "device_destroy" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0x50890fd0, "__kmalloc_cache_noprof" },
	{ 0xd7a59a65, "vzalloc_noprof" },
	{ 0x5cb46e6d, "validate_usercopy_range" },
	{ 0x325d84d3, "dput" },
	{ 0x7c14ae9c, "down_interruptible" },
	{ 0x1f3da2df, "lockref_get" },
	{ 0x05403c50, "pci_disable_device" },
	{ 0x048fdb82, "boot_cpu_data" },
	{ 0xe2bee92e, "pcie_set_readrq" },
	{ 0xc5bd6261, "register_chrdev_region" },
	{ 0x84f07bf7, "cachemode2protval" },
	{ 0xe943823f, "pci_read_config_byte" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x43a349ca, "strlen" },
	{ 0xa175f5be, "get_task_pid" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0xa9b74d2a, "pci_release_region" },
	{ 0x18ded256, "eventfd_signal_mask" },
	{ 0x4790ee36, "put_pid" },
	{ 0x67628f51, "msleep" },
	{ 0x0e905811, "cdev_init" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xafbd0823, "kmalloc_caches" },
	{ 0xa36949ef, "cdev_del" },
	{ 0xeff16519, "device_remove_file" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0x21498431, "cdev_set_parent" },
	{ 0x7e2232fb, "ioread32" },
	{ 0x1b4f1bd4, "try_module_get" },
	{ 0x9f222e1e, "alloc_chrdev_region" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0xa6ee2608, "pci_request_region" },
	{ 0x84f6b05f, "pci_find_ext_capability" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0xa58ec32d, "devm_kmalloc" },
	{ 0x506ca276, "pci_enable_device" },
	{ 0xfad8f384, "iowrite32" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x182528d0, "proc_create" },
	{ 0xe0418251, "eventfd_ctx_put" },
	{ 0x40a621c5, "snprintf" },
	{ 0x62cbec20, "complete" },
	{ 0x7a39bc45, "driver_remove_file" },
	{ 0xc2ccdd1e, "__init_swait_queue_head" },
	{ 0x805f627e, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xb730487b,
	0x832f2d24,
	0xae5686b7,
	0x40a621c5,
	0xa8e5b801,
	0xd5c3f38c,
	0xacac6336,
	0xfbe7861b,
	0x2d361c45,
	0xcb8b6ec6,
	0x0feb1e94,
	0xc281f1fb,
	0x5e505530,
	0x68a1b6c6,
	0x02e1dca7,
	0x1c7405b2,
	0x5af09d8b,
	0x33a5bd33,
	0xd272d446,
	0xdd6830c7,
	0x95aa0182,
	0x03bcb167,
	0x5a844b26,
	0xcb5bc4b5,
	0xd272d446,
	0xe8213e80,
	0xbd03ed67,
	0xd272d446,
	0xd272d446,
	0xff0106da,
	0xed25583d,
	0x9479a1e8,
	0x5a844b26,
	0xc0061edf,
	0x86d206f6,
	0x0c161ddc,
	0x177a5462,
	0x90a48d82,
	0xbd03ed67,
	0x48fd0ca0,
	0xcd1d5f99,
	0x53eb37d8,
	0x3e4749a7,
	0x7a5ffe84,
	0xeb73a68a,
	0x4b846600,
	0xc0061edf,
	0xbe884d55,
	0xc866a218,
	0x5881f1ab,
	0xbff2473f,
	0xbd03ed67,
	0x9502f0fd,
	0x9aa6980d,
	0xd272d446,
	0x885eae7d,
	0x1349c02f,
	0xc609ff70,
	0xbd03ed67,
	0x4f1e5fd0,
	0x3c0300ea,
	0xd2f1c5c6,
	0x173ec8da,
	0xe54e0a6b,
	0x3d395066,
	0xd17b47a7,
	0x0e9cab28,
	0xc0061edf,
	0x05403c50,
	0xd272d446,
	0x092a35a2,
	0x36f55e86,
	0x4617d87b,
	0x888b8f57,
	0xbd03ed67,
	0x058c185a,
	0xb37cf93c,
	0x4aeb5613,
	0xdd6830c7,
	0x506ca276,
	0xf1de9e85,
	0x0bc5fb0d,
	0x9aa6980d,
	0x66bf3c87,
	0x64fbd2ce,
	0x5a844b26,
	0x4bd2df26,
	0x30eb81ed,
	0x50890fd0,
	0xd7a59a65,
	0x5cb46e6d,
	0x325d84d3,
	0x7c14ae9c,
	0x1f3da2df,
	0x05403c50,
	0x048fdb82,
	0xe2bee92e,
	0xc5bd6261,
	0x84f07bf7,
	0xe943823f,
	0xe4de56b4,
	0x43a349ca,
	0xa175f5be,
	0x5af09d8b,
	0xa9b74d2a,
	0x18ded256,
	0x4790ee36,
	0x67628f51,
	0x0e905811,
	0x7851be11,
	0xafbd0823,
	0xa36949ef,
	0xeff16519,
	0x9aa6980d,
	0x21498431,
	0x7e2232fb,
	0x1b4f1bd4,
	0x9f222e1e,
	0xa61fd7aa,
	0xa6ee2608,
	0x84f6b05f,
	0xdc352a3b,
	0x092a35a2,
	0xa58ec32d,
	0x506ca276,
	0xfad8f384,
	0xd710adbf,
	0x182528d0,
	0xe0418251,
	0x40a621c5,
	0x62cbec20,
	0x7a39bc45,
	0xc2ccdd1e,
	0x805f627e,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"finish_wait\0"
	"pci_get_device\0"
	"class_destroy\0"
	"scnprintf\0"
	"__pci_register_driver\0"
	"up\0"
	"memcpy_fromio\0"
	"memcpy\0"
	"remap_pfn_range\0"
	"kfree\0"
	"usleep_range_state\0"
	"prepare_to_wait_event\0"
	"kthread_should_stop\0"
	"__wake_up\0"
	"free_pages\0"
	"__dynamic_dev_dbg\0"
	"_raw_spin_lock\0"
	"pci_unregister_driver\0"
	"__fentry__\0"
	"sysfs_emit\0"
	"wake_up_process\0"
	"pci_read_config_dword\0"
	"__x86_indirect_thunk_rax\0"
	"memcpy_toio\0"
	"dump_stack\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"schedule\0"
	"__stack_chk_fail\0"
	"refcount_warn_saturate\0"
	"driver_create_file\0"
	"strnlen\0"
	"__x86_indirect_thunk_rdx\0"
	"_dev_info\0"
	"__SCT__WARN_trap\0"
	"capable\0"
	"module_put\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"get_zeroed_page_noprof\0"
	"cdev_add\0"
	"device_create_file\0"
	"pci_find_capability\0"
	"init_wait_entry\0"
	"pci_iomap_range\0"
	"devm_kfree\0"
	"_dev_err\0"
	"kill_pid\0"
	"device_create\0"
	"noop_llseek\0"
	"class_create\0"
	"random_kmalloc_seed\0"
	"__xa_alloc_cyclic\0"
	"mutex_lock\0"
	"__put_user_1\0"
	"pci_read_config_word\0"
	"const_current_task\0"
	"strncpy\0"
	"phys_base\0"
	"__list_del_entry_valid_or_report\0"
	"eventfd_ctx_fdget\0"
	"kthread_stop\0"
	"sscanf\0"
	"__fortify_panic\0"
	"wait_for_completion_killable\0"
	"pci_iounmap\0"
	"memset\0"
	"_dev_warn\0"
	"pci_set_master\0"
	"__x86_return_thunk\0"
	"_copy_to_user\0"
	"devm_hwmon_device_register_with_info\0"
	"proc_remove\0"
	"strcmp\0"
	"USER_PTR_MAX\0"
	"jiffies\0"
	"kthread_create_on_node\0"
	"xa_erase\0"
	"sprintf\0"
	"pcie_get_readrq\0"
	"vfree\0"
	"unregister_chrdev_region\0"
	"mutex_unlock\0"
	"proc_set_user\0"
	"proc_set_size\0"
	"__x86_indirect_thunk_rcx\0"
	"device_destroy\0"
	"__dynamic_pr_debug\0"
	"__kmalloc_cache_noprof\0"
	"vzalloc_noprof\0"
	"validate_usercopy_range\0"
	"dput\0"
	"down_interruptible\0"
	"lockref_get\0"
	"pci_disable_device\0"
	"boot_cpu_data\0"
	"pcie_set_readrq\0"
	"register_chrdev_region\0"
	"cachemode2protval\0"
	"pci_read_config_byte\0"
	"__ubsan_handle_load_invalid_value\0"
	"strlen\0"
	"get_task_pid\0"
	"_raw_spin_unlock\0"
	"pci_release_region\0"
	"eventfd_signal_mask\0"
	"put_pid\0"
	"msleep\0"
	"cdev_init\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"cdev_del\0"
	"device_remove_file\0"
	"mutex_init_generic\0"
	"cdev_set_parent\0"
	"ioread32\0"
	"try_module_get\0"
	"alloc_chrdev_region\0"
	"__check_object_size\0"
	"pci_request_region\0"
	"pci_find_ext_capability\0"
	"__list_add_valid_or_report\0"
	"_copy_from_user\0"
	"devm_kmalloc\0"
	"pci_enable_device\0"
	"iowrite32\0"
	"__kmalloc_noprof\0"
	"proc_create\0"
	"eventfd_ctx_put\0"
	"snprintf\0"
	"complete\0"
	"driver_remove_file\0"
	"__init_swait_queue_head\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010EEd*sv000010EEsd0000000Ebc*sc*i*");

MODULE_INFO(srcversion, "5C54B059C31669A1B759696");
