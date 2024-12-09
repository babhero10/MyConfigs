#!/bin/bash

# Update system and sync package databases
echo "Updating system and syncing package databases..."
sudo pacman -Syu --noconfirm

# Function to install a list of packages
install_packages() {
    for package in "$@"; do
        if pacman -Qi "$package" &>/dev/null; then
            echo "Package '$package' is already installed. Skipping..."
        else
            echo "Installing '$package'..."
            sudo pacman -S "$package" --noconfirm
        fi
    done
}

# Reconnaissance Tools
echo "Installing Reconnaissance Tools..."
install_packages nmap bettercap
AUR_RECON=(amass subfinder dnsrecon gobuster dirb whatweb recon-ng)
echo "Installing Reconnaissance Tools from AUR: ${AUR_RECON[*]}"
yay -S "${AUR_RECON[@]}" --noconfirm

# Exploitation Tools
echo "Installing Exploitation Tools..."
install_packages metasploit
AUR_EXPLOITATION=(joomscan burpsuite)
yay -S "${AUR_EXPLOITATION[@]}" --noconfirm

# Wireless Testing Tools
echo "Installing Wireless Testing Tools..."
install_packages aircrack-ng bettercap

# Password Cracking Tools
echo "Installing Password Cracking Tools..."
install_packages john hashcat
AUR_CRACKING=(cewl crunch)
yay -S "${AUR_CRACKING[@]}" --noconfirm

# Post-Exploitation Tools
echo "Installing Post-Exploitation Tools..."
install_packages smbclient
AUR_POST_EXPLOIT=(crackmapexec)
yay -S "${AUR_POST_EXPLOIT[@]}" --noconfirm

# Network Tools
echo "Installing Network Tools..."
install_packages wireshark-qt tcpdump ettercap-gtk ngrep gnu-netcat

# Web Application Testing Tools
echo "Installing Web Application Testing Tools..."
AUR_WEB_TESTING=(wfuzz dirsearch wafw00f)
yay -S "${AUR_WEB_TESTING[@]}" --noconfirm

# Reverse Engineering Tools
echo "Installing Reverse Engineering Tools..."
install_packages radare2 binwalk gdb strace ltrace
AUR_REVERSE_ENGINEERING=(ghidra edb-debugger objdump)
yay -S "${AUR_REVERSE_ENGINEERING[@]}" --noconfirm

# Forensics Tools
echo "Installing Forensics Tools..."
install_packages sleuthkit foremost

# Miscellaneous Tools
echo "Installing Miscellaneous Tools..."
install_packages openvpn tor proxychains-ng exploitdb

# Development Tools
echo "Installing Development Tools..."
install_packages base-devel cmake git qt5-base qt5-tools qt5-svg graphviz capstone

# AUR Packages for Development
AUR_DEV_TOOLS=(ida-free hopper)
yay -S "${AUR_DEV_TOOLS[@]}" --noconfirm

echo "All tools have been installed! Happy hacking! 🚀"

