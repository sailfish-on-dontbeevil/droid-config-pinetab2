%package -n patterns-sailfish-device-adaptation-pinetab2
Summary: Sailfish HW Adaptation PinephonePro

Obsoletes: qt5-plugin-generic-evdev

# Graphics (mesa)
Requires: mesa-dri-drivers
Requires: mesa-libEGL
Requires: mesa-libGLESv2
Requires: mesa-libgbm
Requires: mesa-libglapi
Requires: wayland-egl
Requires: qt5-plugin-platform-eglfs

# Splash screen
Requires: plymouth-lite
Requires: plymouth-lite-theme-default

# Bluetooth tools
Requires: bluez5-tools
#Requires: bluetooth-rfkill-event-hciattach

# Vibra
Requires: qt5-feedback-haptics-ffmemless
Requires: libngf-qt5-qtfeedback

# Sensors
#Requires: hybris-libsensorfw-qt5

# Pulseaudio
Requires: pulseaudio-module-keepalive

# Connman
Requires: sailfish-connman-plugin-tethering-keepalive

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
#Requires: gstreamer1.0-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
## Enables mode selector upon plugging USB cable:
Requires: usb-moded
#Requires: usb-moded-defaults-android
#Requires: usb-moded-developer-mode-android

Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-plugin-encsfa

# For mounting SD card automatically
Requires: sd-utils

# sound
Requires: alsa-utils
Requires: alsa-ucm-conf

# Cameras
Requires: v4l-utils

# Firmware
Requires: firmware-pine64-pinetab2
Requires: wireless-regdb

Requires: kernel-adaptation-pinetab2
Requires: droid-config-pinetab2-sailfish
Requires: droid-config-pinetab2-pulseaudio-settings
Requires: droid-config-pinetab2-policy-settings
Requires: droid-config-pinetab2-preinit-plugin
Requires: droid-config-pinetab2-bluez5
Requires: droid-hal-version-pinetab2
#Requires: droid-config-pinetab2-flashing

# Enable home encryption
Requires: sailfish-device-encryption-community

%description -n patterns-sailfish-device-adaptation-pinetab2
Pattern with packages for pinephone pro HW Adaptation

%files -n patterns-sailfish-device-adaptation-pinetab2
 
