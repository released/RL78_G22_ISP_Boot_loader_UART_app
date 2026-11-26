; Generated from this app's app_irq_handlers.h. Do not edit.
.EXTERN _start
.EXTERN _IspTimerIsr
.EXTERN _IspUartRxIsr
.jtext .CSEG AT FLASH_TABLE
    BR !!_start ; RESET 0x00
    .DB4 0xFFFFFFFF ; Reserved 0x02
    BR !!g22_app_default_isr ; vector 0x04, slot 0x2008
    BR !!g22_app_default_isr ; vector 0x06, slot 0x200C
    BR !!g22_app_default_isr ; vector 0x08, slot 0x2010
    BR !!g22_app_default_isr ; vector 0x0A, slot 0x2014
    BR !!g22_app_default_isr ; vector 0x0C, slot 0x2018
    BR !!g22_app_default_isr ; vector 0x0E, slot 0x201C
    BR !!g22_app_default_isr ; vector 0x10, slot 0x2020
    BR !!g22_app_default_isr ; vector 0x12, slot 0x2024
    BR !!g22_app_default_isr ; vector 0x14, slot 0x2028
    BR !!g22_app_default_isr ; vector 0x16, slot 0x202C
    BR !!g22_app_default_isr ; vector 0x18, slot 0x2030
    BR !!g22_app_default_isr ; vector 0x1A, slot 0x2034
    BR !!g22_app_default_isr ; vector 0x1C, slot 0x2038
    BR !!g22_app_default_isr ; vector 0x1E, slot 0x203C
    BR !!g22_app_default_isr ; vector 0x20, slot 0x2040
    BR !!g22_app_default_isr ; vector 0x22, slot 0x2044
    BR !!g22_app_default_isr ; vector 0x24, slot 0x2048
    BR !!_IspUartRxIsr ; vector 0x26, slot 0x204C
    BR !!g22_app_default_isr ; vector 0x28, slot 0x2050
    BR !!g22_app_default_isr ; vector 0x2A, slot 0x2054
    BR !!g22_app_default_isr ; vector 0x2C, slot 0x2058
    BR !!_IspTimerIsr ; vector 0x2E, slot 0x205C
    BR !!g22_app_default_isr ; vector 0x30, slot 0x2060
    BR !!g22_app_default_isr ; vector 0x32, slot 0x2064
    BR !!g22_app_default_isr ; vector 0x34, slot 0x2068
    BR !!g22_app_default_isr ; vector 0x36, slot 0x206C
    BR !!g22_app_default_isr ; vector 0x38, slot 0x2070
    BR !!g22_app_default_isr ; vector 0x3A, slot 0x2074
    BR !!g22_app_default_isr ; vector 0x3C, slot 0x2078
    BR !!g22_app_default_isr ; vector 0x3E, slot 0x207C
    BR !!g22_app_default_isr ; vector 0x40, slot 0x2080
    BR !!g22_app_default_isr ; vector 0x42, slot 0x2084
    BR !!g22_app_default_isr ; vector 0x44, slot 0x2088
    BR !!g22_app_default_isr ; vector 0x46, slot 0x208C
    BR !!g22_app_default_isr ; vector 0x48, slot 0x2090
    BR !!g22_app_default_isr ; vector 0x4A, slot 0x2094
    BR !!g22_app_default_isr ; vector 0x4C, slot 0x2098
    BR !!g22_app_default_isr ; vector 0x4E, slot 0x209C
    BR !!g22_app_default_isr ; vector 0x50, slot 0x20A0
    BR !!g22_app_default_isr ; vector 0x52, slot 0x20A4
    BR !!g22_app_default_isr ; vector 0x54, slot 0x20A8
    BR !!g22_app_default_isr ; vector 0x56, slot 0x20AC
    BR !!g22_app_default_isr ; vector 0x58, slot 0x20B0
    BR !!g22_app_default_isr ; vector 0x5A, slot 0x20B4
    BR !!g22_app_default_isr ; vector 0x5C, slot 0x20B8
    BR !!g22_app_default_isr ; vector 0x5E, slot 0x20BC
    BR !!g22_app_default_isr ; vector 0x60, slot 0x20C0
    BR !!g22_app_default_isr ; vector 0x62, slot 0x20C4
    BR !!g22_app_default_isr ; vector 0x64, slot 0x20C8
    BR !!g22_app_default_isr ; vector 0x66, slot 0x20CC
    BR !!g22_app_default_isr ; vector 0x68, slot 0x20D0
    BR !!g22_app_default_isr ; vector 0x6A, slot 0x20D4
    BR !!g22_app_default_isr ; vector 0x6C, slot 0x20D8
    BR !!g22_app_default_isr ; vector 0x6E, slot 0x20DC
    BR !!g22_app_default_isr ; vector 0x70, slot 0x20E0
    BR !!g22_app_default_isr ; vector 0x72, slot 0x20E4
    BR !!g22_app_default_isr ; vector 0x74, slot 0x20E8
    BR !!g22_app_default_isr ; vector 0x76, slot 0x20EC
    BR !!g22_app_default_isr ; vector 0x78, slot 0x20F0
    BR !!g22_app_default_isr ; vector 0x7A, slot 0x20F4
    BR !!g22_app_default_isr ; vector 0x7C, slot 0x20F8
    BR !!g22_app_default_brk ; Reserved BRK slot 0x7E; not physically forwarded
.SECTION .text, TEXT
g22_app_default_isr:
    RETI
g22_app_default_brk:
    RETB
