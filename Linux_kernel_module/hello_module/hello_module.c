/*
 * The "Hello, World" kernel module
 */

#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE(“GPL”);				// This module bears free license

static int hello_init(void) {			// Invoked when module is loaded
	printk(KERN_ALERT “Hello, world\n”);
	return 0;
}
static void hello_exit(void) {			// Invoked when module is removed
	printk(KERN_ALERT “Goodbye, cruel world\n”);
}

// Macros to indicate which module Initialization and Exit functions a to call
module_init(hello_init); 
module_exit(hello_exit);
