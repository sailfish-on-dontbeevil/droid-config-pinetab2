%package -n patterns-sailfish-device-configuration-pinetab2
Summary: Sailfish Configuration Pinephone Pro

Requires: patterns-sailfish-device-configuration-common-pinetab2
Requires: patterns-sailfish-device-adaptation-pinetab2

Requires: patterns-sailfish-applications
Requires: patterns-sailfish-ui

# Early stages of porting benefit from these:
#Requires: sailfish-porter-tools
Requires: jolla-developer-mode
Requires: sailfishsilica-qt5-demos
Requires: busybox-static
Requires: net-tools
Requires: openssh-clients
Requires: openssh-server
Requires: vim-enhanced
Requires: zypper
Requires: strace

# jolla-rnd-device will enable usb-moded even when UI is not yet
# brought up (useful during development, available since update10)
Requires: jolla-rnd-device
#End sailfish-porter-tools

# Jolla Store Items
Requires: patterns-sailfish-consumer-generic
Requires: patterns-sailfish-store-applications

Requires: sailfish-content-graphics-z1.0
Requires: jolla-settings-accounts-extensions-3rd-party-all

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Sailfish OS CSD tool for hardware testing
Requires: csd

# KMod required for kmod-static-nodes.service 
Requires: kmod

#Debug tools
Recommends: vi
Recommends: strace
Recommends: gdb
Recommends: mce-tools

#Sailfish porter tools
Recommends: jolla-developer-mode
Recommends: sailfishsilica-qt5-demos
Recommends: busybox-static
Recommends: net-tools
Recommends: openssh-clients
Recommends: openssh-server
Recommends: vim-enhanced
Recommends: zypper
Recommends: strace
Recommends: jolla-rnd-device

#Chum
Recommends: sailfishos-chum-gui

%description -n patterns-sailfish-device-configuration-pinetab2
Pattern with packages for pinephone pro configurations

%files -n patterns-sailfish-device-configuration-pinetab2
