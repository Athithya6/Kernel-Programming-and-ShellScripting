#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/usb.h>

//probe function
//called on device insertion if and only if no other driver has beat us to the punch
static int pen_probe(struct usb_interface *interface, const struct usb_device_id *id)
{
 printk(KERN_INFO "[*] Virtual Mouse PenDrive (%0.4X:%0.4X) plugged\n",id->idVendor,
        id->idProduct);
 return 0;
}

//disconnect

static void pen_disconnect(struct usb_interface *interface)
{
 printk(KERN_INFO "[*] Virtual Mouse PenDrive removed\n");
}

//usb_device_id
static struct usb_device_id pen_table[] =
{
 //0x0e0f:0x0003
 { USB_DEVICE(0x0e0f,0x0003) };   //information obtained using lsusb in terminal
  {}   //terminating entry
};

MODULE_DEVICE_TABLE(usb,pen_table);



//usb driver
static struct usb_driver pen_driver = 
{
 .name= "Virtual Mouse PenDrive";
 .id_table=pen table; //usb_device_id
 .probe=pen_probe;
 .disconnect = pen_disconnect;
};
 
static int __init pen_init(void)
{
 int ret=-1;
 printk(KERN_INFO "[*]Constructor- Virtual Mouse PenDrive");
 printk(KERN_INFO "\tRegistering driver with kernel");
 ret = usb_register(&pen_driver);
 printk(KERN_INFO "\tRegistration is complete");
 return ret;
}

static void __exit pen_exit(void)
{ //deregister
 printk(KERN_INFO "[*]Destructor-Virtual Mouse PenDrive");
 usb_deregister(&pen,driver);
 printk(KERN_INFO "\tDeregistration complete");
}

module_init(pen_init);
module_exit(pen_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Athithya Narayan");
MODULE_DESCRIPTION("Virtual Mouse PenDrive Registration");
 
 
