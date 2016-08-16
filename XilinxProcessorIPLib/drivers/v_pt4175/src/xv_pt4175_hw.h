// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
//
// ==============================================================

// CTRL
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of HwReg_width_V
//        bit 15~0 - HwReg_width_V[15:0] (Read/Write)
//        others   - reserved
// 0x14 : reserved
// 0x18 : Data signal of HwReg_height_V
//        bit 15~0 - HwReg_height_V[15:0] (Read/Write)
//        others   - reserved
// 0x1c : reserved
// 0x20 : Data signal of HwReg_video_format_V
//        bit 2~0 - HwReg_video_format_V[2:0] (Read/Write)
//        others  - reserved
// 0x24 : reserved
// 0x28 : Data signal of HwReg_PktsPerLine_V
//        bit 7~0 - HwReg_PktsPerLine_V[7:0] (Read/Write)
//        others  - reserved
// 0x2c : reserved
// 0x30 : Data signal of HwReg_PyldLen_V
//        bit 10~0 - HwReg_PyldLen_V[10:0] (Read/Write)
//        others   - reserved
// 0x34 : reserved
// 0x38 : Data signal of HwReg_PyldLen_last_V
//        bit 10~0 - HwReg_PyldLen_last_V[10:0] (Read/Write)
//        others   - reserved
// 0x3c : reserved
// 0x40 : Data signal of HwReg_ssrc_V
//        bit 31~0 - HwReg_ssrc_V[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of HwReg_payloadtype_V
//        bit 7~0 - HwReg_payloadtype_V[7:0] (Read/Write)
//        others  - reserved
// 0x4c : reserved
// 0x50 : Data signal of HwReg_bpc_reg_V
//        bit 4~0 - HwReg_bpc_reg_V[4:0] (Read/Write)
//        others  - reserved
// 0x54 : reserved
// 0x58 : Data signal of HwReg_channel_number_V
//        bit 11~0 - HwReg_channel_number_V[11:0] (Read/Write)
//        others   - reserved
// 0x5c : reserved
// 0x60 : Data signal of HwReg_tx_pkt_cnt_V
//        bit 31~0 - HwReg_tx_pkt_cnt_V[31:0] (Read)
// 0x64 : Control signal of HwReg_tx_pkt_cnt_V
//        bit 0  - HwReg_tx_pkt_cnt_V_ap_vld (Read/COR)
//        others - reserved
// 0x68 : Data signal of HwReg_reserved1_V
//        bit 0  - HwReg_reserved1_V[0] (Read/Write)
//        others - reserved
// 0x6c : reserved
// 0x70 : Data signal of HwReg_stat_reset_V
//        bit 0  - HwReg_stat_reset_V[0] (Read/Write)
//        others - reserved
// 0x74 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XV_PT4175_CTRL_ADDR_AP_CTRL                     0x00
#define XV_PT4175_CTRL_ADDR_GIE                         0x04
#define XV_PT4175_CTRL_ADDR_IER                         0x08
#define XV_PT4175_CTRL_ADDR_ISR                         0x0c
#define XV_PT4175_CTRL_ADDR_HWREG_WIDTH_V_DATA          0x10
#define XV_PT4175_CTRL_BITS_HWREG_WIDTH_V_DATA          16
#define XV_PT4175_CTRL_ADDR_HWREG_HEIGHT_V_DATA         0x18
#define XV_PT4175_CTRL_BITS_HWREG_HEIGHT_V_DATA         16
#define XV_PT4175_CTRL_ADDR_HWREG_VIDEO_FORMAT_V_DATA   0x20
#define XV_PT4175_CTRL_BITS_HWREG_VIDEO_FORMAT_V_DATA   3
#define XV_PT4175_CTRL_ADDR_HWREG_PKTSPERLINE_V_DATA    0x28
#define XV_PT4175_CTRL_BITS_HWREG_PKTSPERLINE_V_DATA    8
#define XV_PT4175_CTRL_ADDR_HWREG_PYLDLEN_V_DATA        0x30
#define XV_PT4175_CTRL_BITS_HWREG_PYLDLEN_V_DATA        11
#define XV_PT4175_CTRL_ADDR_HWREG_PYLDLEN_LAST_V_DATA   0x38
#define XV_PT4175_CTRL_BITS_HWREG_PYLDLEN_LAST_V_DATA   11
#define XV_PT4175_CTRL_ADDR_HWREG_SSRC_V_DATA           0x40
#define XV_PT4175_CTRL_BITS_HWREG_SSRC_V_DATA           32
#define XV_PT4175_CTRL_ADDR_HWREG_PAYLOADTYPE_V_DATA    0x48
#define XV_PT4175_CTRL_BITS_HWREG_PAYLOADTYPE_V_DATA    8
#define XV_PT4175_CTRL_ADDR_HWREG_BPC_REG_V_DATA        0x50
#define XV_PT4175_CTRL_BITS_HWREG_BPC_REG_V_DATA        5
#define XV_PT4175_CTRL_ADDR_HWREG_CHANNEL_NUMBER_V_DATA 0x58
#define XV_PT4175_CTRL_BITS_HWREG_CHANNEL_NUMBER_V_DATA 12
#define XV_PT4175_CTRL_ADDR_HWREG_TX_PKT_CNT_V_DATA     0x60
#define XV_PT4175_CTRL_BITS_HWREG_TX_PKT_CNT_V_DATA     32
#define XV_PT4175_CTRL_ADDR_HWREG_TX_PKT_CNT_V_CTRL     0x64
#define XV_PT4175_CTRL_ADDR_HWREG_RESERVED1_V_DATA      0x68
#define XV_PT4175_CTRL_BITS_HWREG_RESERVED1_V_DATA      1
#define XV_PT4175_CTRL_ADDR_HWREG_STAT_RESET_V_DATA     0x70
#define XV_PT4175_CTRL_BITS_HWREG_STAT_RESET_V_DATA     1
