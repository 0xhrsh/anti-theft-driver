# Anti-Theft-Driver

A raspberry pi driver that provides an abstraction for a user who wants to configure their rpi as an anti-theft device.

## Compiling and Running

- Connect the wires to appropriate pins

- Compile the Driver to create a kernel `object file`.

    ```bash
    sudo make
    ```

- Insert the Driver module into the kernel.

    ```bash
    sudo insmod driver.ko
    ```

- `Optional`: Look at the kernel logs to get a bettter picture of what is happening.

    ```bash
    dmesg
    ```

## Notes

- It is advisable to use a remote systems (PI) or VM to test out drivers, instead of your primary PC.
- `webhook.c` represents the notification system called by the driver detects theft. It can be written in any language. The final binary should be stored in `usr/bin` folder.
