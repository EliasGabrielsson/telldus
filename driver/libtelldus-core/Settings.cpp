#include "Settings.h"

/*
* Get the name of the device
*/
std::string Settings::getName(int intDeviceId){
	return getStringSetting(intDeviceId, "name", false);
}

/*
* Set the name of the device
*/
bool Settings::setName(int intDeviceId, const std::string &strNewName){
	return setStringSetting(intDeviceId, "name", strNewName, false);
}

/*
* Get the device vendor
*/
std::string Settings::getProtocol(int intDeviceId){
	return getStringSetting(intDeviceId, "protocol", false);
}

/*
* Set the device vendor
*/
bool Settings::setProtocol(int intDeviceId, const std::string &strVendor){
	return setStringSetting(intDeviceId, "protocol", strVendor, false);
}

/*
* Get the device model
*/
int Settings::getModel(int intDeviceId){
	return getIntSetting(intDeviceId, "model", false);
}

/*
* Set the device model
*/
bool Settings::setModel(int intDeviceId, int intModel){
	return setIntSetting(intDeviceId, "model", intModel, false);
}

/*
* Set device argument
*/
bool Settings::setDeviceParameter(int intDeviceId, const std::string &strName, const std::string &strValue){
	return setStringSetting(intDeviceId, strName, strValue, true);
}

/*
* Get device argument
*/
std::string Settings::getDeviceParameter(int intDeviceId, const std::string &strName) {
	return getStringSetting(intDeviceId, strName, true);
}