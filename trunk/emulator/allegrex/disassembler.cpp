/*
 * disassembler.cpp
 *
 *  Created on: 21 nov. 2008
 *      Author: hli
 */

#include "instruction.h"

#if 0
#define RDRTSA(opname, int rd, int rt, int sa) \
  ::sprintf((rd == 0 && sa == 0) ? "nop" : String.format("%1$-10s %2$s, %3$s, 0x%4$04X", opname, gprNames[rd], gprNames[rt], sa);
        }
    }

    public static String disasmRDRTRS(String opname, int rd, int rt, int rs) {
        return String.format("%1$-10s %2$s, %3$s, %4$s", opname, gprNames[rd], gprNames[rt], gprNames[rs]);
    }

    public static String disasmRS(String opname, int rs) {
        return String.format("%1$-10s %2$s", opname, gprNames[rs]);
    }

    public static String disasmRT(String opname, int rt) {
        return String.format("%1$-10s %2$s", opname, gprNames[rt]);
    }

    public static String disasmRDRS(String opname, int rd, int rs) {
        return String.format("%1$-10s %2$s, %3$s", opname, gprNames[rd], gprNames[rs]);
    }

    public static String disasmRDRT(String opname, int rd, int rt) {
        return String.format("%1$-10s %2$s, %3$s", opname, gprNames[rd], gprNames[rt]);
    }

    public static String disasmRD(String opname, int rd) {
        return String.format("%1$-10s %2$s", opname, gprNames[rd]);
    }

    public static String disasmRSRT(String opname, int rs, int rt) {
        return String.format("%1$-10s %2$s, %3$s", opname, gprNames[rs], gprNames[rt]);
    }

    public static String disasmEXT(int rt, int rs, int rd, int sa) {
        return String.format("%1$-10s %2$s, %3$s, %4$d, %5$d", "ext", gprNames[rt], gprNames[rs], sa, (rd + 1));
    }

    public static String disasmINS(int rt, int rs, int rd, int sa) {
        return String.format("%1$-10s %2$s, %3$s, %4$d, %5$d", "ins", gprNames[rt], gprNames[rs], sa, (rd - sa + 1));
    }

    public static String disasmRDRSRT(String opname, int rd, int rs, int rt) {
        String s = String.format("%1$-10s %2$s, %3$s, %4$s", opname, gprNames[rd], gprNames[rs], gprNames[rt]);
        if (rs == 0 && rt == 0) {

            if (opname.equals("xor") || opname.equals("nor")) {
                return String.format("%2$s <=> li %1$s, -1", gprNames[rd], s);
            }

            return String.format("%2$s <=> li %1$s, 0", gprNames[rd], s);
        } else if (rs == 0) {

            if (opname.equals("and")) {
                return String.format("%2$s <=> li %1$s, 0", gprNames[rd], s);
            }

            if (opname.equals("nor")) {
                return String.format("%2$s <=> not %1$s", gprNames[rd], s);
            }

            if (opname.equals("sub")) {
                return String.format("%3$s <=> neg %1$s, %2$s", gprNames[rd], gprNames[rt], s);
            }

            if (opname.equals("subu")) {
                return String.format("%3$s <=> negu %1$s, %2$s", gprNames[rd], gprNames[rt], s);
            }

            return String.format("%3$s <=> move %1$s, %2$s", gprNames[rd], gprNames[rt], s);
        } else if (rt == 0) {

            if (opname.equals("and")) {
                return String.format("%2$s <=> li %1$s, 0", gprNames[rd], s);
            }

            if (opname.equals("nor")) {
                return String.format("%2$s <=> not %1$s", gprNames[rd], gprNames[rs], s);
            }

            return String.format("%3$s <=> move %1$s, %2$s", gprNames[rd], gprNames[rs], s);
        }

        return s;
    }

    public static String disasmRSOFFSET(String opname, int rs, int simm16, int opcode_address) {
        return String.format("%1$-10s %2$s, 0x%3$08X", opname, gprNames[rs], ((int) (short) simm16) * 4 + opcode_address + 4);
    }

    public static String disasmRSRTOFFSET(String opname, int rs, int rt, int simm16, int opcode_address) {
        return String.format("%1$-10s %2$s, %3$s, 0x%4$08X", opname, gprNames[rs], gprNames[rt], ((int) (short) simm16) * 4 + opcode_address + 4);
    }

    public static String disasmOFFSET(String opname, int simm16, int opcode_address) {
        return String.format("%1$-10s 0x%2$08X", opname, ((int) (short) simm16) * 4 + opcode_address + 4);
    }

    public static String disasmRTRSIMM(String opname, int rt, int rs, int imm16) {
        String s = String.format("%1$-10s %2$s, %3$s, %4$d", opname, gprNames[rt], gprNames[rs], ((int) (short) imm16));

        if (rs == 0) {

            if (opname.equals("andi")) {
                return String.format("%2$s <=> li %1$s, 0", gprNames[rt], s);
            } else if (opname.matches("slti")) {
                return String.format("%3$s <=> li %1$s, %2$d", gprNames[rt], ((0 < imm16) ? 1 : 0), s);
            }

        }

        return s;
    }

    public static String disasmSYSCALL(int code) {
        for (jpcsp.Debugger.DisassemblerModule.syscallsFirm15.calls c : jpcsp.Debugger.DisassemblerModule.syscallsFirm15.calls.values()) {
            if (c.getSyscall() == code) {
                return String.format("%1$-10s 0x%2$05X [%3$s]", "syscall", code, c);
            }
        }
        return String.format("%1$-10s 0x%2$05X [unknown]", "syscall", code);
    }

    public static String disasmBREAK(int code) {
        return String.format("%1$-10s 0x%2$05X", "break", code);
    }

    public static String disasmJUMP(String opname, int uimm26, int opcode_address) {
        int jump = (opcode_address & 0xf0000000) | ((uimm26 & 0x3ffffff) << 2);

        // If we think the target is a stub, try and append the syscall name
        if (opname.equals("jal") && jump != 0 &&
            jpcsp.Memory.getInstance().isAddressGood(jump + 4)) {
            int nextOpcode = jpcsp.Memory.getInstance().read32(jump + 4);
            Instruction nextInsn = Decoder.instruction(nextOpcode);
            String secondTarget = nextInsn.disasm(jump + 4, nextOpcode);
            if (secondTarget.startsWith("syscall") && !secondTarget.contains("[unknown]")) {
                return String.format("%1$-10s 0x%2$08X %3$s", opname, jump, secondTarget.substring(19));
            }
        }
        return String.format("%1$-10s 0x%2$08X", opname, jump);
    }

    public static String disasmRTIMM(String opname, int rt, int imm) {
        return String.format("%1$-10s %2$s, 0x%3$04X <=> li %2$s, 0x%3$04X0000", opname, gprNames[rt], (imm & 0xFFFF));
    }

    public static String disasmRTIMMRS(String opname, int rt, int rs, int imm) {
        return String.format("%1$-10s %2$s, %4$d(%3$s)", opname, gprNames[rt], gprNames[rs], ((int) (short) imm));
    }

    public static String disasmCODEIMMRS(String opname, int code, int rs, int imm) {
        return String.format("%1$-10s 0x%2$02X, %4$d(%3$s)", opname, code, gprNames[rs], ((int) (short) imm));
    }

    public static String disasmFTIMMRS(String opname, int ft, int rs, int imm) {
        return String.format("%1$-10s %2$s, %4$d(%3$s)", opname, fprNames[ft], gprNames[rs], ((int) (short) imm));
    }

    public static String disasmFDFSFT(String opname, int fd, int fs, int ft) {
        return String.format("%1$-10s %2$s, %3$s, %4$s", opname, fprNames[fd], fprNames[fs], fprNames[ft]);
    }

    public static String disasmFDFS(String opname, int fd, int fs) {
        return String.format("%1$-10s %2$s, %3$s", opname, fprNames[fd], fprNames[fs]);
    }

    public static String disasmRTFS(String opname, int rt, int fs) {
        return String.format("%1$-10s %2$s, %3$s", opname, gprNames[rt], fprNames[fs]);
    }

    public static String disasmRTFC(String opname, int rt, int fc) {
        return String.format("%1$-10s %2$s, %3$s", opname, gprNames[rt], fcrNames[fc]);
    }

    public static String disasmCcondS(int cconds, int fs, int ft) {
        return String.format("%1$-10s %2$s, %3$s", ccondsNames[cconds], fprNames[fs], fprNames[ft]);
    }

    public static String disasmFSFT(String opname, int fs, int ft) {
        return String.format("%1$-10s %2$s, %3$s", opname, fprNames[fs], fprNames[ft]);
    }

    public static String disasmVD(String opname, int vsize, int vd) {
        return String.format("%1$-10s %2$s", opname + vsuffix[vsize - 1], vprNames[vsize - 1][vd]);
    }

    public static String disasmVS(String opname, int vsize, int vs) {
        return String.format("%1$-10s %2$s", opname + vsuffix[vsize - 1], vprNames[vsize - 1][vs]);
    }

    public static String disasmVDVS(String opname, int vsize, int vd, int vs) {
        return String.format("%1$-10s %2$s, %3$s", opname + vsuffix[vsize - 1], vprNames[vsize - 1][vd], vprNames[vsize - 1][vs]);
    }

    public static String disasmVD1VS(String opname, int vsize, int vd, int vs) {
        return String.format("%1$-10s %2$s, %3$s", opname + vsuffix[vsize - 1], vprNames[0][vd], vprNames[vsize - 1][vs]);
    }

    public static String disasmVTIMMRS(String opname, int vsize, int vt, int rs, int imm) {
        return String.format(
                "%1$-10s %2$s, %4$d(%3$s)",
                opname + vsuffix[vsize - 1],
                vprNames[vsize - 1][vt],
                gprNames[rs],
                imm);
    }

    public static String disasmVDVSVT(String opname, int vsize, int vd, int vs, int vt) {
        return String.format("%1$-10s %2$s, %3$s, %4$s", opname + vsuffix[vsize - 1], vprNames[vsize - 1][vd], vprNames[vsize - 1][vs], vprNames[vsize - 1][vt]);
    }

    public static String disasmVDVSVT1(String opname, int vsize, int vd, int vs, int vt) {
        return String.format("%1$-10s %2$s, %3$s, %4$s", opname + vsuffix[vsize - 1], vprNames[vsize - 1][vd], vprNames[vsize - 1][vs], vprNames[0][vt]);
    }

    public static String disasmVD1VSVT(String opname, int vsize, int vd, int vs, int vt) {
        return String.format("%1$-10s %2$s, %3$s, %4$s", opname + vsuffix[vsize - 1], vprNames[0][vd], vprNames[vsize - 1][vs], vprNames[0][vt]);
    }

    public static String disasmVCMP(String opname, int vsize, int vcode, int vs, int vt) {
        if ((vcode & ~4) == 0) {
            return String.format("%1$-10s %2$s", opname + vsuffix[vsize - 1], vcondNames[vcode]);
        } else if (vcode < 8) {
            return String.format("%1$-10s %2$s, %3$s, %4$s", opname + vsuffix[vsize - 1], vcondNames[vcode], vprNames[vsize - 1][vs], vprNames[vsize - 1][vt]);
        }
        return String.format("%1$-10s %2$s, %3$s", opname + vsuffix[vsize - 1], vcondNames[vcode], vprNames[vsize - 1][vs], vprNames[vsize - 1][vt]);
    }

    public static String disasmVROT(String opname, int vsize, int vd, int vs, int vt) {
        int i;
        int si = (vt >>> 2) & 3;
        int ci = (vt >>> 0) & 3;
        String ca = " c", sa = " s";
        String codes[] = new String[4];
        if ((vt & 16) == 1) {
            sa = "-s";
        }

        if (si == ci) {
            for (i = 0; i < vsize; ++i) {
                codes[i] = (ci == i) ? ca : sa;
            }
        } else {
            for (i = 0; i < vsize; ++i) {
                codes[i] = (ci == i) ? ca : ((si == i) ? sa : " 0");
            }
        }

        String rot = "[";

        i = 0;
        for(;;) {
                rot += codes[i++];
                if(i >= vsize)
                        break;
                rot += ",";
        }
        rot += "]";
        return String.format("%1$-10s %2$s, %3$s, %4$s", opname + vsuffix[vsize - 1], vprNames[vsize - 1][vd], vprNames[0][vs], rot);
    }

    public static String disasmVDM(String opname, int vsize, int vd) {
        return String.format("%1$-10s %2$s", opname + vsuffix[vsize - 1], vprMatNames[vsize - 1][vd]);
    }

        public static String disasmVDMVSM(String opname, int vsize, int vd, int vs) {
                return String.format("%1$-10s %2$s, %3$s", opname + vsuffix[vsize - 1], vprMatNames[vsize - 1][vd], vprMatNames[vsize - 1][vs]);
        }

        public static String disasmVDCST(String opname, int vsize, int vd, int cst) {
                return String.format("%1$-10s %2$s, %3$s", opname + vsuffix[vsize - 1], vprNames[vsize - 1][vd], vfpuConstants[cst]);
        }

        public static String disasmVDIIM(String opcode, int vsize, int vd, int imm16) {
                return String.format("%1$-10s %2$s, 0x%3$04X", opcode + vsuffix[vsize - 1], vprNames[0][vd], imm16);
        }

        public static String disasmVDFIM(String opcode, int vsize, int vd, int imm16) {
                float s = ((imm16 >> 15) == 0) ? 1.0f : -1.0f;
        int e = ((imm16 >> 10) & 0x1f);
        int m = (e == 0) ? ((imm16 & 0x3ff) << 1) : ((imm16 & 0x3ff) | 0x400);

        s = s * ((float) m) / ((float) (1 << e)) / ((float) (1 << 41));
        return String.format("%1$-10s %2$s, %3$1.8f", opcode + vsuffix[vsize - 1], vprNames[0][vd], s);
        }

        public static String disasmVDMVSMVTM(String opname, int vsize, int vd, int vs, int vt) {
                return String.format("%1$-10s %2$s, %3$s, %4$s", opname + vsuffix[vsize - 1], vprMatNames[vsize - 1][vd], vprMatNames[vsize - 1][vs], vprMatNames[vsize - 1][vt]);
        }

        public static String disasmVDRS(String opname, int vd, int rt) {
                return String.format("%1$-10s %2$s, %3$s", opname + vsuffix[0], gprNames[rt], vprNames[0][vd]);
        }

        public static String disasmVPFX(String opname, int[] swz, boolean[] abs, boolean[] cst, boolean[] neg) {
                String[] values = new String[4];
                for (int i = 0; i < 4; ++i) {
                        if (cst[i]) {
                                switch (swz[i]) {
                                case 0:
                                        values[i] = abs[i] ? "3" : "0";
                                        break;
                                case 1:
                                        values[i] = abs[i] ? "1/3" : "1";
                                        break;
                                case 2:
                                        values[i] = abs[i] ? "1/4" : "2";
                                        break;
                                case 3:
                                        values[i] = abs[i] ? "1/6" : "1/2";
                                        break;
                                }
                        } else {
                                values[i] = abs[i] ? "|" + vpfxNames[swz[i]] + "|"
                                                : vpfxNames[swz[i]];
                        }

                        if (neg[i])
                                values[i] = "-" + values[i];
                }

                return String.format("%1$-10s [%2$s, %3$s, %4$s, %5$s]", opname, values[0], values[1], values[2], values[3]);
        }

        public static String disasmVPFXD(String opname, int[] sat, int[] msk) {
                String[] values = new String[4];
                for (int i = 0; i < 4; ++i) {
                        if(msk[i] == 0) {
                                values[i] = sat[i] == 1 ? "0:1" : "-1:1";
                        } else
                                values[i] = "M";
                }
                return String.format("%1$-10s [%2$s, %3$s, %4$s, %5$s]", opname, values[0], values[1], values[2], values[3]);
        }

#endif
