
/**
 * This is a simple.c file we are going to use it to compile a linux kernel module
 * 
 * To compile, run makefile by entering "make"
 *
 * We will include the below libraries that are essential for compling a linux kernel module 
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

/* This function will be used to load the module. */
static int simple_init(void)
{
       printk(KERN_INFO "Hello world this is my first linux kernel program\n");

       return 0;
}

/* This function will be called when exiting  the module. */
static void simple_exit(void) {
	printk(KERN_INFO "Hello world am exiting the program. Thanks\n");
}

/* The following macros below are used for registering module entry and exit points. */
module_init( simple_init );
module_exit( simple_exit );
/*
The MODULE LICENSE macros specifies the module license which is GPL since it will be released under GPL licence*/
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("LINUX kERNEL Project 1, Team 4 ");
MODULE_AUTHOR("DkCOM562-10082021");
