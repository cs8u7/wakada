import subprocess
import optparse
import re

def user_input():
    Parse_object = optparse.OptionParser()
    Parse_object.add_option("-i","--interface",dest="Interface",help="Choose your interface")
    Parse_object.add_option("-m","--mac",dest="MAC_add",help="New MAC address")
    return Parse_object.parse_args()

def change_mac_address(interface,MAC):
    subprocess.call(["ifconfig",interface,"down"])
    subprocess.call(["ifconfig",interface,"hw","ether",MAC])
    subprocess.call(["ifconfig",interface,"up"])


(option,user_choice)= user_input()
change_mac_address(option.Interface,option.MAC_add)

def MAC_control():
    Check_ifconfig = subprocess.check_output(["ifconfig", option.Interface])
    search_for_MAC = re.search(r"\w\w:\w\w:\w\w:\w\w:\w\w:\w\w",str(Check_ifconfig))
    if search_for_MAC:
        return print("Your new Mac :"+str(search_for_MAC.group(0)))
    else:
        return print("Choose eth0 please and remember 'You can only set unicast address and unicast address has to have the first octet as an even value'")


MAC_control()

