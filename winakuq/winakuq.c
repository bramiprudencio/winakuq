#pragma warning (disable: 4100)

#include <ntifs.h>
#include <wdm.h>

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath);

NTSTATUS UnloadDriver(PDRIVER_OBJECT DriverObject);

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
	DbgPrintEx(0, 0, "Message!");
	DriverObject->DriverUnload = UnloadDriver;
	
	return STATUS_SUCCESS;
}


NTSTATUS UnloadDriver(PDRIVER_OBJECT DriverObject) {
	return STATUS_SUCCESS;
}
