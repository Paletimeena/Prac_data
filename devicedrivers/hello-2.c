#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

static int __init hello_2_init(void)
{

	printk(KERN_INFO "Hello world program_2\n");
return 0;

}

static void __exit hello_2_exit(void)
{
	printk(KERN_INFO "end of hello_2 program\n");



}

module_init(hello_2_init);
module_exit(hello_2_exit);
