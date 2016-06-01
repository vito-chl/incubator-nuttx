/****************************************************************************
 * drivers/wireless/ieee802154/mrf24j40.h
 *
 *   Copyright (C) 2015-2016 Sebastien Lorquet. All rights reserved.
 *   Author: Sebastien Lorquet <sebastien@lorquet.fr>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __DRIVERS_IEEE802154_MRF24J40_H
#define __DRIVERS_IEEE802154_MRF24J40_H

/* MRF24J40 Registers *******************************************************/

#define MRF24J40_RXMCR     0x00
#define MRF24J40_PANIDL    0x01
#define MRF24J40_PANIDH    0x02
#define MRF24J40_SADRL     0x03
#define MRF24J40_SADRH     0x04
#define MRF24J40_EADR0     0x05
#define MRF24J40_EADR1     0x06
#define MRF24J40_EADR2     0x07
#define MRF24J40_EADR3     0x08
#define MRF24J40_EADR4     0x09
#define MRF24J40_EADR5     0x0A
#define MRF24J40_EADR6     0x0B
#define MRF24J40_EADR7     0x0C
#define MRF24J40_RXFLUSH   0x0D
#define MRF24J40_ORDER     0x10
#define MRF24J40_TXMCR     0x11
#define MRF24J40_ACKTMOUT  0x12
#define MRF24J40_ESLOTG1   0x13
#define MRF24J40_SYMTICKL  0x14
#define MRF24J40_SYMTICKH  0x15
#define MRF24J40_PACON0    0x16
#define MRF24J40_PACON1    0x17
#define MRF24J40_PACON2    0x18
#define MRF24J40_TXBCON0   0x1A
#define MRF24J40_TXNCON    0x1B
#define MRF24J40_TXG1CON   0x1C
#define MRF24J40_TXG2CON   0x1D
#define MRF24J40_ESLOTG23  0x1E
#define MRF24J40_ESLOTG45  0x1F
#define MRF24J40_ESLOTG67  0x20
#define MRF24J40_TXPEND    0x21
#define MRF24J40_WAKECON   0x22
#define MRF24J40_FRMOFFSET 0x23
#define MRF24J40_TXSTAT    0x24
#define MRF24J40_TXBCON1   0x25
#define MRF24J40_GATECLK   0x26
#define MRF24J40_TXTIME    0x27
#define MRF24J40_HSYMTMRL  0x28
#define MRF24J40_HSYMTMRH  0x29
#define MRF24J40_SOFTRST   0x2A
#define MRF24J40_SECCON0   0x2C
#define MRF24J40_SECCON1   0x2C
#define MRF24J40_TXSTBL    0x2E
#define MRF24J40_RXSR      0x30
#define MRF24J40_INTSTAT   0x31
#define MRF24J40_INTCON    0x32
#define MRF24J40_GPIO      0x33
#define MRF24J40_TRISGPIO  0x34
#define MRF24J40_SLPACK    0x35
#define MRF24J40_RFCTL     0x36
#define MRF24J40_SECCR2    0x37
#define MRF24J40_BBREG0    0x38
#define MRF24J40_BBREG1    0x39
#define MRF24J40_BBREG2    0x3A
#define MRF24J40_BBREG3    0x3B
#define MRF24J40_BBREG4    0x3C
#define MRF24J40_BBREG6    0x3E
#define MRF24J40_CCAEDTH   0x3F

#define MRF24J40_TXBUF_BASE     0x80000000
#define MRF24J40_LONGREG_BASE   0x80000200
#define MRF24J40_RXBUF_BASE     0x80000300

#define MRF24J40_RFCON0    (MRF24J40_LONGREG_BASE + 0x00)
#define MRF24J40_RFCON1    (MRF24J40_LONGREG_BASE + 0x01)
#define MRF24J40_RFCON2    (MRF24J40_LONGREG_BASE + 0x02)
#define MRF24J40_RFCON3    (MRF24J40_LONGREG_BASE + 0x03)
#define MRF24J40_RFCON5    (MRF24J40_LONGREG_BASE + 0x05)
#define MRF24J40_RFCON6    (MRF24J40_LONGREG_BASE + 0x06)
#define MRF24J40_RFCON7    (MRF24J40_LONGREG_BASE + 0x07)
#define MRF24J40_RFCON8    (MRF24J40_LONGREG_BASE + 0x08)
#define MRF24J40_SLPCAL0   (MRF24J40_LONGREG_BASE + 0x09)
#define MRF24J40_SLPCAL1   (MRF24J40_LONGREG_BASE + 0x0A)
#define MRF24J40_SLPCAL2   (MRF24J40_LONGREG_BASE + 0x0B)
#define MRF24J40_RFSTATE   (MRF24J40_LONGREG_BASE + 0x0F)
#define MRF24J40_RSSI      0x80000210
#define MRF24J40_SLPCON0   0x80000211
#define MRF24J40_SLPCON1   0x80000220
#define MRF24J40_WAKETIMEL 0x80000222
#define MRF24J40_WAKETIMEH 0x80000223
#define MRF24J40_REMCNTL   0x80000224
#define MRF24J40_REMCNTH   0x80000225
#define MRF24J40_MAINCNT0  0x80000226
#define MRF24J40_MAINCNT1  0x80000227
#define MRF24J40_MAINCNT2  0x80000228
#define MRF24J40_MAINCNT3  0x80000229
#define MRF24J40_TESTMODE  0x8000022F
#define MRF24J40_ASSOEADR0 0x80000230
#define MRF24J40_ASSOEADR1 0x80000231
#define MRF24J40_ASSOEADR2 0x80000232
#define MRF24J40_ASSOEADR3 0x80000233
#define MRF24J40_ASSOEADR4 0x80000234
#define MRF24J40_ASSOEADR5 0x80000235
#define MRF24J40_ASSOEADR6 0x80000236
#define MRF24J40_ASSOEADR7 0x80000237
#define MRF24J40_ASSOSADR0 0x80000238
#define MRF24J40_ASSOSADR1 0x80000239
#define MRF24J40_UPNONCE0  0x80000240
#define MRF24J40_UPNONCE1  0x80000241
#define MRF24J40_UPNONCE2  0x80000242
#define MRF24J40_UPNONCE3  0x80000243
#define MRF24J40_UPNONCE4  0x80000244
#define MRF24J40_UPNONCE5  0x80000245
#define MRF24J40_UPNONCE6  0x80000246
#define MRF24J40_UPNONCE7  0x80000247
#define MRF24J40_UPNONCE8  0x80000248
#define MRF24J40_UPNONCE9  0x80000249
#define MRF24J40_UPNONCE10 0x8000024A
#define MRF24J40_UPNONCE11 0x8000024B
#define MRF24J40_UPNONCE12 0x8000024C

/* INTSTAT bits */

#define MRF24J40_INTSTAT_TXNIF     (1 << 0)
#define MRF24J40_INTSTAT_TXG1IF    (1 << 1)
#define MRF24J40_INTSTAT_TXG2IF    (1 << 2)
#define MRF24J40_INTSTAT_RXIF      (1 << 3)
#define MRF24J40_INTSTAT_SECIF     (1 << 4)
#define MRF24J40_INTSTAT_HSYMTMRIF (1 << 5)
#define MRF24J40_INTSTAT_WAKEIF    (1 << 6)
#define MRF24J40_INTSTAT_SLPIF     (1 << 7)

/* RXMCR bits */

#define MRF24J40_RXMCR_PROMI       (1 << 0) /* Enable promisc mode (rx all valid packets) */ 
#define MRF24J40_RXMCR_ERRPKT      0x02 /* Do not check CRC */ 
#define MRF24J40_RXMCR_COORD       0x04 /* Enable coordinator mode     ??? DIFFERENCE ??? - not used in datasheet! */
#define MRF24J40_RXMCR_PANCOORD    0x08 /* Enable PAN coordinator mode ??? DIFFERENCE ??? */ 
#define MRF24J40_RXMCR_NOACKRSP    0x20 /* Enable auto ACK when a packet is rxed */

/* TXMCR bits */

#define MRF24J40_TXMCR_CSMABF0     (1 << 0)
#define MRF24J40_TXMCR_CSMABF1     0x02
#define MRF24J40_TXMCR_CSMABF2     0x04
#define MRF24J40_TXMCR_MACMINBE0   0x08
#define MRF24J40_TXMCR_MACMINBE1   0x10
#define MRF24J40_TXMCR_SLOTTED     0x20
#define MRF24J40_TXMCR_BATLIFEXT   0x40
#define MRF24J40_TXMCR_NOCSMA      0x80

/* INTCON bits */

#define MRF24J40_INTCON_SLPIE      0x80
#define MRF24J40_INTCON_WAKEIE     0x40
#define MRF24J40_INTCON_HSYMTMRIE  0x20
#define MRF24J40_INTCON_SECIE      0x10
#define MRF24J40_INTCON_RXIE       0x08
#define MRF24J40_INTCON_TXG2IE     0x04
#define MRF24J40_INTCON_TXG1IE     0x02
#define MRF24J40_INTCON_TXNIE      (1 << 0)

/* BBREG1 bits */

#define MRF24J40_BBREG1_RXDECINV   0x04 /* Enable/Disable packet reception */

/* BBREG2 bits */

#define MRF24J40_BBREG2_CCAMODE_ED 0x80
#define MRF24J40_BBREG2_CCAMODE_CS 0x40

/* TXNCON bits */

#define MRF24J40_TXNCON_TXNTRIG    (1 << 0) /* Trigger packet tx, automatically cleared */
#define MRF24J40_TXNCON_TXNSECEN   0x02 /* Enable security */
#define MRF24J40_TXNCON_TXNACKREQ  0x04 /* An ACK is requested for this pkt */
#define MRF24J40_TXNCON_INDIRECT   0x08 /* Activate indirect tx bit (for coordinators) */
#define MRF24J40_TXNCON_FPSTAT     0x10 /* Status of the frame pending big in txed acks */

/* TXSTAT bits */

#define MRF24J40_TXSTAT_TXNSTAT    (1 << 0)
#define MRF24J40_TXSTAT_CCAFAIL    (1 << 5)
#define MRF24J40_TXSTAT_X_SHIFT    6
#define MRF24J40_TXSTAT_X_MASK     (3 << MRF24J40_TXSTAT_X_SHIFT)

#endif /* __DRIVERS_IEEE802154_MRF24J40_H */
