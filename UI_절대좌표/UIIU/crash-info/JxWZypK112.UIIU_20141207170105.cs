S/W Version Information
Model: Ref.Device-PQ
Tizen-Version: 2.2.0
Build-Number: Tizen_Ref.Device-PQ_20130719.1629
Build-Date: 2013.07.19 16:29:28

Crash Information
Process Name: UIIU
PID: 8624
Date: 2014-12-07 17:01:05(GMT+0900)
Executable File Path: /opt/apps/JxWZypK112/bin/UIIU
This process is multi-thread process
pid=8624 tid=8624
Signal: 11
      (SIGSEGV)
      si_code: -6
      signal sent by tkill (sent by pid 8624, uid 5000)

Register Information
r0   = 0x400894d0, r1   = 0x448d3e42
r2   = 0xbee2a9a0, r3   = 0x00000010
r4   = 0xbee2a9a0, r5   = 0x00000000
r6   = 0x0012c530, r7   = 0x0012d268
r8   = 0xa00009cb, r9   = 0xbee2bae4
r10  = 0x448d3e42, fp   = 0xbee2a98c
ip   = 0x403dc11c, sp   = 0xbee2a438
lr   = 0x403d30d8, pc   = 0x403d30d8
cpsr = 0x60000010

Memory Information
MemTotal:   797944 KB
MemFree:    233240 KB
Buffers:     21700 KB
Cached:     220148 KB
VmPeak:     112060 KB
VmSize:     112056 KB
VmLck:           0 KB
VmHWM:       48148 KB
VmRSS:       48148 KB
VmData:      40784 KB
VmStk:         136 KB
VmExe:          32 KB
VmLib:       42232 KB
VmPTE:        2016 KB
VmSwap:          0 KB

Maps Information
00008000 00010000 r-xp /usr/bin/launchpad_preloading_preinitializing_daemon
00018000 00072000 rw-p [heap]
00072000 00159000 rw-p [heap]
40003000 40004000 r-xp /usr/lib/libdlog.so.0.0.0
4000e000 4000f000 r-xp /usr/lib/libpmapi.so.1.2
40019000 4001d000 r-xp /usr/lib/libbundle.so.0.1.22
40025000 40027000 r-xp /usr/lib/libXau.so.6.0.0
40032000 40033000 r-xp /usr/lib/libXdamage.so.1.1.0
4003c000 4003d000 r-xp /usr/lib/libcapi-content-mime-type.so.0.0.2
40047000 4004a000 r-xp /lib/libattr.so.1.1.0
40052000 4005d000 r-xp /usr/lib/libaul.so.0.1.0
40065000 40067000 r-xp /usr/lib/libXcomposite.so.1.0.0
40077000 40081000 r-xp /usr/lib/libprivilege-control.so.0.0.2
4008a000 4008b000 r-xp /usr/lib/libgthread-2.0.so.0.3200.3
40094000 40097000 r-xp /usr/lib/libsmack.so.1.0.0
400a3000 400a6000 r-xp /lib/libcap.so.2.21
400ae000 400cb000 r-xp /lib/ld-2.13.so
400d4000 400d8000 r-xp /usr/lib/libsys-assert.so
400e0000 401c6000 r-xp /usr/lib/libX11.so.6.3.0
401d1000 4023b000 r-xp /usr/lib/libsqlite3.so.0.8.6
40245000 40259000 r-xp /lib/libpthread-2.13.so
40264000 4033e000 r-xp /usr/lib/libglib-2.0.so.0.3200.3
40347000 40349000 r-xp /lib/libdl-2.13.so
40352000 4037e000 r-xp /usr/lib/libdbus-1.so.3.7.2
40387000 40390000 r-xp /lib/libgcc_s-4.5.3.so.1
40398000 404b5000 r-xp /lib/libc-2.13.so
404c3000 404ce000 r-xp /lib/libunwind.so.8.0.1
404fc000 40511000 r-xp /usr/lib/libxcb.so.1.1.0
40519000 4051b000 r-xp /usr/lib/libiri.so
40523000 4052b000 r-xp /lib/libcrypt-2.13.so
4055b000 40561000 r-xp /lib/librt-2.13.so
4056b000 40580000 r-xp /usr/lib/libecore.so.1.7.99
40597000 405c7000 r-xp /usr/lib/libecore_x.so.1.7.99
405d0000 40604000 r-xp /usr/lib/libgobject-2.0.so.0.3200.3
4060d000 4060e000 r-xp /usr/lib/libecore_imf_evas.so.1.7.99
40616000 4061a000 r-xp /usr/lib/libappcore-efl.so.1.1
40622000 40741000 r-xp /usr/lib/libelementary.so.1.7.99
40754000 40759000 r-xp /usr/lib/libappcore-common.so.1.1
40761000 40768000 r-xp /usr/lib/libutilX.so.1.1.0
40773000 40786000 r-xp /usr/lib/libeet.so.1.7.99
4078f000 407ce000 r-xp /usr/lib/libeina.so.1.7.99
407d7000 407f4000 r-xp /usr/lib/libecore_evas.so.1.7.99
407fd000 40802000 r-xp /usr/lib/libecore_file.so.1.7.99
4080a000 40821000 r-xp /usr/lib/libecore_input.so.1.7.99
4083c000 4083e000 r-xp /usr/lib/libefreet_trash.so.1.7.99
40846000 408b0000 r-xp /lib/libm-2.13.so
408b9000 40968000 r-xp /usr/lib/libevas.so.1.7.99
4098a000 409e6000 r-xp /usr/lib/libedje.so.1.7.99
409f0000 409f5000 r-xp /usr/lib/libecore_fb.so.1.7.99
409fe000 40a07000 r-xp /usr/lib/libedbus.so.1.7.99
40a0f000 40a25000 r-xp /usr/lib/libefreet.so.1.7.99
40a2f000 40a33000 r-xp /usr/lib/libefreet_mime.so.1.7.99
40a3c000 40a44000 r-xp /usr/lib/libethumb_client.so.1.7.99
40a4c000 40a51000 r-xp /usr/lib/libecore_imf.so.1.7.99
40a59000 40a74000 r-xp /usr/lib/libecore_con.so.1.7.99
40a7d000 40a85000 r-xp /usr/lib/libemotion.so.1.7.99
40a8d000 40a94000 r-xp /usr/lib/libXcursor.so.1.0.2
40a9c000 40a9e000 r-xp /usr/lib/libXgesture.so.7.0.0
40aa6000 40aa9000 r-xp /usr/lib/libXfixes.so.3.1.0
40ab1000 40aba000 r-xp /usr/lib/libXi.so.6.1.0
40ac2000 40ac3000 r-xp /usr/lib/libXinerama.so.1.0.0
40acc000 40ad2000 r-xp /usr/lib/libXrandr.so.2.2.0
40ada000 40ae0000 r-xp /usr/lib/libXrender.so.1.3.0
40ae8000 40aeb000 r-xp /usr/lib/libXtst.so.6.1.0
40af3000 40afd000 r-xp /usr/lib/libXext.so.6.4.0
40b06000 40b0b000 r-xp /usr/lib/libffi.so.5.0.10
40b13000 40b2b000 r-xp /usr/lib/libdbus-glib-1.so.2.2.2
40b2c000 40b38000 r-xp /usr/lib/libail.so.0.1.0
40b41000 40b4a000 r-xp /usr/lib/libvconf.so.0.2.45
40b52000 40b55000 r-xp /usr/lib/libSLP-db-util.so.0.1.0
40b5d000 40c7d000 r-xp /usr/lib/libicui18n.so.48.1
40c8b000 40d73000 r-xp /usr/lib/libicuuc.so.48.1
41e8f000 41e95000 r-xp /usr/lib/libxdgmime.so.1.1.0
41e9d000 41e9f000 r-xp /usr/lib/libapp-checker.so.0.1.0
41ea7000 41eb4000 r-xp /usr/lib/libsensor.so.1.1.0
41ebf000 41ed6000 r-xp /lib/libz.so.1.2.5
41ede000 41f02000 r-xp /usr/lib/libjpeg.so.8.0.2
41f1a000 41f6f000 r-xp /usr/lib/libfreetype.so.6.8.1
41f7a000 41f8e000 r-xp /usr/lib/libfribidi.so.0.3.1
41f96000 41ff2000 r-xp /usr/lib/libharfbuzz.so.0.907.0
42004000 42028000 r-xp /usr/lib/libfontconfig.so.1.5.0
42031000 4209b000 r-xp /usr/lib/libpixman-1.so.0.28.2
420a8000 420ac000 r-xp /usr/lib/libecore_ipc.so.1.7.99
420b5000 420f2000 r-xp /usr/lib/libcurl.so.4.3.0
420fc000 420ff000 r-xp /usr/lib/libecore_input_evas.so.1.7.99
42107000 4210e000 r-xp /usr/lib/libembryo.so.1.7.99
42117000 42130000 r-xp /usr/lib/liblua-5.1.so
42139000 42147000 r-xp /usr/lib/libremix.so.0.0.0
4214f000 42151000 r-xp /usr/lib/libctxdata.so.0.0.0
42159000 4219d000 r-xp /usr/lib/libsndfile.so.1.0.25
421ab000 421b5000 r-xp /usr/lib/libethumb.so.1.7.99
421bd000 421e2000 r-xp /usr/lib/libexif.so.12.3.3
421f6000 422d3000 r-xp /usr/lib/libgio-2.0.so.0.3200.3
422de000 42379000 r-xp /usr/lib/libstdc++.so.6.0.14
4238c000 42394000 r-xp /usr/lib/libsf_common.so
4239c000 423c0000 r-xp /usr/lib/libicule.so.48.1
423c9000 423e0000 r-xp /lib/libexpat.so.1.5.2
423ea000 423f4000 r-xp /usr/lib/libcares.so.2.0.0
423fc000 42428000 r-xp /usr/lib/libidn.so.11.5.44
42431000 4247d000 r-xp /usr/lib/libssl.so.1.0.0
42489000 425dc000 r-xp /usr/lib/libcrypto.so.1.0.0
425fa000 425fc000 r-xp /usr/lib/libgmodule-2.0.so.0.3200.3
42604000 42614000 r-xp /lib/libresolv-2.13.so
42618000 4263c000 r-xp /usr/lib/ecore/immodules/libisf-imf-module.so
42645000 42654000 r-xp /usr/lib/libnotification.so.0.1.0
4265c000 42727000 r-xp /usr/lib/libscim-1.0.so.8.2.3
4273d000 42740000 r-xp /usr/lib/libXv.so.1.0.0
42748000 4274c000 r-xp /usr/lib/libtbm.so.1.0.0
42754000 4275c000 r-xp /usr/lib/libdrm.so.2.4.0
42764000 42766000 r-xp /usr/lib/libdri2.so.0.0.0
4276e000 42774000 r-xp /usr/lib/libappsvc.so.0.1.0
4277c000 4278d000 r-xp /usr/lib/libcom-core.so.0.0.1
42795000 427da000 r-xp /usr/lib/libsoup-2.4.so.1.5.0
427e3000 427e6000 r-xp /usr/lib/libiniparser.so.0
427ef000 4280c000 r-xp /usr/lib/libpkgmgr-info.so.0.0.17
42814000 428ec000 r-xp /usr/lib/libxml2.so.2.7.8
428f9000 4290d000 r-xp /usr/lib/libpkgmgr_parser.so.0.1.0
42b15000 42b25000 r-xp /usr/lib/libprivacy-manager-client.so.0.0.4
42b27000 42b38000 r-xp /lib/libnsl-2.13.so
42b43000 42b4d000 r-xp /lib/libnss_files-2.13.so
42b56000 42b57000 r-xp /usr/lib/libmmfkeysound.so.0.0.0
42cbd000 42cc3000 r-xp /lib/libnss_compat-2.13.so
42ccc000 42cd5000 r-xp /lib/libnss_nis-2.13.so
42cde000 42ff0000 r-xp /usr/lib/osp/libosp-appfw.so.1.2.2.0
43018000 43021000 r-xp /usr/lib/libcapi-security-privilege-manager.so.0.0.3
4302a000 43030000 r-xp /usr/lib/libalarm.so.0.0.0
43039000 4303d000 r-xp /usr/lib/libchromium.so.1.0
43045000 4304a000 r-xp /usr/lib/libdevman.so.0.1
43053000 4305e000 r-xp /usr/lib/libcryptsvc.so.0.0.1
4306b000 4306f000 r-xp /usr/lib/libhaptic.so.0.1
43077000 4307b000 r-xp /usr/lib/libheynoti.so.0.0.2
43083000 430a1000 r-xp /usr/lib/libpcre.so.0.0.1
430a9000 430b5000 r-xp /usr/lib/libmessage-port.so.1.2.2.0
430be000 430c6000 r-xp /usr/lib/libminizip.so.1.0.0
430ce000 430e2000 r-xp /usr/lib/libpkgmgr-client.so.0.1.68
430eb000 430ee000 r-xp /usr/lib/libuuid.so.1.3.0
430f7000 43119000 r-xp /usr/lib/libSLP-tapi.so.0.0.0
43121000 43127000 r-xp /usr/lib/libcapi-appfw-app-manager.so.0.1.0
4312f000 4313d000 r-xp /usr/lib/libcapi-appfw-application.so.0.1.0
43146000 43149000 r-xp /usr/lib/libcapi-network-serial.so.0.0.7
43151000 43154000 r-xp /usr/lib/libcapi-system-runtime-info.so.0.0.3
4315d000 43160000 r-xp /usr/lib/libcapi-system-device.so.0.1.0
43168000 43169000 r-xp /usr/lib/libcapi-system-power.so.0.1.1
43172000 43177000 r-xp /usr/lib/libcapi-system-system-settings.so.0.0.2
4317f000 43183000 r-xp /usr/lib/libcapi-system-info.so.0.2.0
4318b000 4319d000 r-xp /usr/lib/libsecurity-server-client.so.1.0.1
431a6000 431a9000 r-xp /usr/lib/libdevice-node.so.0.1
431b1000 431b4000 r-xp /usr/lib/libpkgmgr_installer_client.so.0.1.0
431bc000 431be000 r-xp /usr/lib/libpkgmgr_installer_status_broadcast_server.so.0.1.0
431c6000 431da000 r-xp /usr/lib/libsecurity-server-commons.so.1.0.0
431e3000 431e8000 r-xp /usr/lib/libslp_devman_plugin.so
431f1000 43ab4000 r-xp /usr/lib/osp/libosp-uifw.so.1.2.2.0
43b25000 43b27000 r-xp /opt/usr/apps/JxWZypK112/bin/UIIU
43b37000 43b4e000 r-xp /usr/lib/libEGL.so.1.4
43b5b000 43b74000 r-xp /usr/lib/osp/libosp-image-core.so.1.2.2.0
43b7d000 43c33000 r-xp /usr/lib/libcairo.so.2.11200.12
43c3e000 43c4a000 r-xp /usr/lib/libtts.so
43c52000 43c58000 r-xp /usr/lib/libfeedback.so.0.1.4
43c60000 43c79000 r-xp /usr/lib/libpng12.so.0.50.0
43c82000 43f79000 r-xp /usr/lib/libavcodec.so.54.59.100
442a0000 442ce000 r-xp /usr/lib/libswscale.so.2.1.101
442d7000 442f9000 r-xp /usr/lib/libavutil.so.51.73.101
44308000 4430e000 r-xp /usr/lib/libgif.so.4.1.6
44316000 4431c000 r-xp /usr/lib/libmmutil_imgp.so.0.0.0
44324000 4434d000 r-xp /usr/lib/libturbojpeg.so
44366000 443b1000 r-xp /usr/lib/libtiff.so.5.1.0
443bc000 443fa000 r-xp /usr/lib/libGLESv2.so.2.0
44402000 44403000 r-xp /usr/lib/libxcb-shm.so.0.0.0
4440c000 44412000 r-xp /usr/lib/libxcb-render.so.0.0.0
4441a000 444f1000 r-xp /usr/lib/libMali.so
444fc000 4450f000 r-xp /usr/lib/libEGL_platform.so
44518000 4455b000 r-xp /usr/lib/libmmfplayer.so.0.0.0
44564000 44567000 r-xp /usr/lib/libmmfsession.so.0.0.0
4456f000 44577000 r-xp /usr/lib/libaudio-session-mgr.so.0.0.0
44582000 44586000 r-xp /usr/lib/libsysman.so.0.2.0
4458e000 44596000 r-xp /usr/lib/libmmfcommon.so.0.0.0
4459e000 445a3000 r-xp /usr/lib/libSM.so.6.0.1
445ab000 445ba000 r-xp /usr/lib/libICE.so.6.3.0
445c4000 445c7000 r-xp /usr/lib/libmm_ta.so.0.0.0
445cf000 445d5000 r-xp /usr/lib/libUMP.so
445dd000 445ea000 r-xp /usr/lib/libgstinterfaces-0.10.so.0.25.0
445f3000 445fc000 r-xp /usr/lib/libgstapp-0.10.so.0.25.0
44604000 44645000 r-xp /usr/lib/libgstbase-0.10.so.0.30.0
4464e000 446ea000 r-xp /usr/lib/libgstreamer-0.10.so.0.30.0
446f6000 44704000 r-xp /usr/lib/libmmfsound.so.0.1.0
4470c000 44729000 r-xp /usr/lib/libavsysaudio.so.0.0.1
44731000 44735000 r-xp /usr/lib/libascenario-0.2.so.0.0.0
4473e000 44741000 r-xp /usr/lib/libpulse-simple.so.0.0.3
44749000 447ac000 r-xp /usr/lib/libasound.so.2.0.0
447b6000 447e7000 r-xp /usr/lib/libpulse.so.0.12.4
447ef000 447f3000 r-xp /usr/lib/libmmfsoundcommon.so.0.0.0
447fb000 44835000 r-xp /usr/lib/libpulsecommon-0.9.23.so
4483e000 448ba000 r-xp /usr/lib/libosp-env-config.so.SOVERSION
448c2000 448d6000 r-xp /opt/usr/apps/JxWZypK112/bin/UIIU.exe
448e1000 448ea000 r-xp /usr/lib/evas/modules/engines/software_x11/linux-gnueabi-armv7l-1.7.99/module.so
448f3000 448fd000 r-xp /usr/lib/evas/modules/engines/software_generic/linux-gnueabi-armv7l-1.7.99/module.so
44905000 44906000 r-xp /usr/lib/libdrm_slp.so.1.0.0
4490e000 44911000 r-xp /usr/lib/bufmgr/libtbm_exynos4412.so.0.0.0
bee0d000 bee2e000 rwxp [stack]
End of Maps Information

Callstack Information (PID:8624)
Call Stack Count: 40
 0: _IO_vfprintf + 0x20 (0x403d30d8) [/lib/libc.so.6] + 0x3b0d8
 1: _IO_fprintf + 0x20 (0x403dc13c) [/lib/libc.so.6] + 0x4413c
 2: MainForm::OnInitializing() + 0x344 (0x448cc174) [/opt/apps/JxWZypK112/bin/UIIU.exe] + 0xa174
 3: Tizen::Ui::_ControlImpl::OnAttachedToMainTree() + 0x22 (0x434a8833) [/usr/lib/osp/libosp-uifw.so] + 0x2b7833
 4: Tizen::Ui::Controls::_FormImpl::OnAttachedToMainTree() + 0x28 (0x4366a435) [/usr/lib/osp/libosp-uifw.so] + 0x479435
 5: Tizen::Ui::_Control::CallOnAttachedToMainTree(Tizen::Ui::_Control&) + 0xb2 (0x43490e97) [/usr/lib/osp/libosp-uifw.so] + 0x29fe97
 6: Tizen::Ui::_Control::EndAttaching(Tizen::Ui::_Control&) + 0xf2 (0x4349403b) [/usr/lib/osp/libosp-uifw.so] + 0x2a303b
 7: Tizen::Ui::_Control::AttachChild(Tizen::Ui::_Control&) + 0x5a (0x43496a43) [/usr/lib/osp/libosp-uifw.so] + 0x2a5a43
 8: Tizen::Ui::_ContainerImpl::AddChild(Tizen::Ui::_ControlImpl*, bool) + 0xa4 (0x434b3de5) [/usr/lib/osp/libosp-uifw.so] + 0x2c2de5
 9: Tizen::Ui::Container::AddControl(Tizen::Ui::Control*) + 0x26 (0x4348b217) [/usr/lib/osp/libosp-uifw.so] + 0x29a217
10: Tizen::Ui::Container::AddControl(Tizen::Ui::Control const&) + 0x6 (0x4348b2a3) [/usr/lib/osp/libosp-uifw.so] + 0x29a2a3
End of Call Stack

Package Information
Package Name: JxWZypK112.UIIU
Package ID : JxWZypK112
Version: 1.0.0
Package Type: tpk
App Name: UIIU
App ID: JxWZypK112.UIIU
Type: Application
Categories: (NULL)
