  INF Binaries/mondrian/QcomPkg/Drivers/XiaomiDxe/SecShareInfoDxe/SecShareInfoDxe.inf

  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/mondrian/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/mondrian/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  #INF Binaries/mondrian/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  #INF Binaries/mondrian/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/mondrian/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

  INF Binaries/mondrian/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf

  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/mondrian/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

  INF Binaries/mondrian/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRAMDxe/DynamicRAMDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

!if $(USE_DISPLAYDXE) == 1
  INF Binaries/mondrian/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/mondrian/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  #INF Binaries/mondrian/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  #INF Binaries/mondrian/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

!if $(USE_DISPLAYDXE) == 1
  INF Binaries/mondrian/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/mondrian/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf

  INF MdeModulePkg/Bus/Pci/XhciDxe/XhciDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/mondrian/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/CipherDxe/CipherDxe.inf         # Use sweet_k6a CipherDxe as mondrian UCDxe needs DTBExt Protocol we don't have
  INF Binaries/sweet_k6a/QcomPkg/Drivers/RNGDxe/RngDxe.inf               # Use sweet_k6a RngDxe as mondrian RngDxe needs DTBExt Protocol we don't have
  #INF Binaries/mondrian/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/ParserDxe/ParserDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/SerialPortDxe/SerialPortDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/XiaomiDxe/SecEnvDxe/SecEnvDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/XiaomiDxe/BoardInfoDxe/BoardInfoDxe.inf
  #INF Binaries/mondrian/QcomPkg/Drivers/XiaomiDxe/CcicDxe/CcicDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/XiaomiDxe/RedriverDxe/RedriverDxe.inf
  #INF Binaries/mondrian/QcomPkg/Drivers/XiaomiDxe/MuicDxe/MuicDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/XiaomiDxe/VibDxe/VibDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/XiaomiDxe/ChgDxe/ChgDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/XiaomiDxe/SubPmicDxe/SubPmicDxe.inf
  INF Binaries/mondrian/QcomPkg/Drivers/XiaomiDxe/GuidedFvDxe/GuidedFvDxe.inf