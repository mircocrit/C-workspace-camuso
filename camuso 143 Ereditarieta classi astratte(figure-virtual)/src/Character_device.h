#ifndef CHARACTER_DEVICE_H_
#define CHARACTER_DEVICE_H_

class Character_device {
	public:
	virtual int open(int opt) = 0;
	virtual int close(int opt) = 0;
	virtual int read(char p, int n) = 0;
	virtual int write(const char p, int n) = 0;
	virtual int ioctl(int ...) = 0; //device I/O control
	virtual ~Character_device() { } // virtual destructor
};

#endif /* CHARACTER_DEVICE_H_ */
