//Compiling modules
#include<linux/module.h>  //needed by all modules
#include<linux/kernel.h>  //needed for KERN info//
#include<linux/init.h>    //needed for the macros

///< The license type-this affects run time behaviour
MODULE_LICENSE("GPL");

///< The author -- visible when you use modinfo
MODULE_AUTHOR("ATHITHYA NARAYAN");

///< The description- see modinfo
MODULE_INFO("Hello guys!");

///< The version of the module
MODULE_VERSION("0.1");

static int __init hello_start(void)
{
 printk(KERN_INFO "Hello world....\n");
 printk(KERN_INFO "I am Athithya...\n");
 return 0;
}

static void __exit hello_end(void)
{
 printk(KERN_INFO "Goodbye Athithya...\n");
}

module_init(hello_start);
module_init(hello_end);
 
