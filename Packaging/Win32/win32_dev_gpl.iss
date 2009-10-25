; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{693CD20A-667F-4441-975D-C62F18BEEBDF}
AppName=GStreamer WinBuild  Developers Package
AppVerName=GStreamer WinBuild 0.10.5-dev
AppPublisher=GStreamer WinBuild Team
AppPublisherURL=http://www.gstreamer-winbuild.ylatuya.es
AppSupportURL=http://www.gstreamer-winbuild.ylatuya.es
AppUpdatesURL=http://www.gstreamer-winbuild.ylatuya.es
DefaultDirName=c:\gstreamer
DisableDirPage=yes
DefaultGroupName=GStreamer WinBuild
LicenseFile=..\..\..\Licenses\gpl-2.0.txt
SetupIconFile=..\..\..\Main\GStreamer\GStreamer.ico
;InfoBeforeFile=..\..\ReadMe.txt
OutputDir=.
OutputBaseFilename=GStreamerWinBuild-0.10.5-dev
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Files]
Source: "..\..\..\Build\Windows\Win32\Release\include\gstreamer-0.10\*"; DestDir: "{app}\include\gstreamer-0.10"; Flags: ignoreversion  recursesubdirs createallsubdirs
Source: "..\..\..\Shared\Build\Windows\Win32\include\*"; DestDir: "{app}\include"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "..\..\..\Build\Windows\Win32\Release\lib\gstreamer\gst*"; DestDir: "{app}\lib"; Flags: ignoreversion
Source: "..\..\..\Shared\Build\Windows\Win32\lib\*"; DestDir: "{app}\lib\"; Flags: ignoreversion  recursesubdirs createallsubdirs  ; Excludes: *la

; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\{cm:UninstallProgram,GStreamer WinBuild Developers Package}"; Filename: "{uninstallexe}"

