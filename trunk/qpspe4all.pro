TEMPLATE = app
TARGET = qpspe4all
QT += core \
    gui
HEADERS += qmemoryspinbox.h \
    qmemorytreemodel.h \
    qmemorytreeview.h \
    qmemoryviewer.h \
    emulator/processor/lsu.h \
    emulator/processor/mdu.h \
    emulator/types.h \
    emulator/processor.h \
    emulator/decoder.h \
    emulator/allegrex/instructions/ABS_S.h \
    emulator/allegrex/instructions/ADD.h \
    emulator/allegrex/instructions/ADDI.h \
    emulator/allegrex/instructions/ADDIU.h \
    emulator/allegrex/instructions/ADDU.h \
    emulator/allegrex/instructions/ADD_S.h \
    emulator/allegrex/instructions/AND.h \
    emulator/allegrex/instructions/ANDI.h \
    emulator/allegrex/instructions/BC1F.h \
    emulator/allegrex/instructions/BC1FL.h \
    emulator/allegrex/instructions/BC1T.h \
    emulator/allegrex/instructions/BC1TL.h \
    emulator/allegrex/instructions/BEQ.h \
    emulator/allegrex/instructions/BEQL.h \
    emulator/allegrex/instructions/BGEZ.h \
    emulator/allegrex/instructions/BGEZAL.h \
    emulator/allegrex/instructions/BGEZALL.h \
    emulator/allegrex/instructions/BGEZL.h \
    emulator/allegrex/instructions/BGTZ.h \
    emulator/allegrex/instructions/BGTZL.h \
    emulator/allegrex/instructions/BITREV.h \
    emulator/allegrex/instructions/BLEZ.h \
    emulator/allegrex/instructions/BLEZL.h \
    emulator/allegrex/instructions/BLTZ.h \
    emulator/allegrex/instructions/BLTZAL.h \
    emulator/allegrex/instructions/BLTZALL.h \
    emulator/allegrex/instructions/BLTZL.h \
    emulator/allegrex/instructions/BNE.h \
    emulator/allegrex/instructions/BNEL.h \
    emulator/allegrex/instructions/BREAK.h \
    emulator/allegrex/instructions/BVF.h \
    emulator/allegrex/instructions/BVFL.h \
    emulator/allegrex/instructions/BVT.h \
    emulator/allegrex/instructions/BVTL.h \
    emulator/allegrex/instructions/CEIL_W_S.h \
    emulator/allegrex/instructions/CFC0.h \
    emulator/allegrex/instructions/CFC1.h \
    emulator/allegrex/instructions/CLO.h \
    emulator/allegrex/instructions/CLZ.h \
    emulator/allegrex/instructions/CTC0.h \
    emulator/allegrex/instructions/CTC1.h \
    emulator/allegrex/instructions/CVT_S_W.h \
    emulator/allegrex/instructions/CVT_W_S.h \
    emulator/allegrex/instructions/C_COND_S.h \
    emulator/allegrex/instructions/DCACHE_CREATE_DIRTY_EXCLUSIVE.h \
    emulator/allegrex/instructions/DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK.h \
    emulator/allegrex/instructions/DCACHE_FILL.h \
    emulator/allegrex/instructions/DCACHE_FILL_WITH_LOCK.h \
    emulator/allegrex/instructions/DCACHE_HIT_INVALIDATE.h \
    emulator/allegrex/instructions/DCACHE_HIT_WRITEBACK.h \
    emulator/allegrex/instructions/DCACHE_HIT_WRITEBACK_INVALIDATE.h \
    emulator/allegrex/instructions/DCACHE_INDEX_UNLOCK.h \
    emulator/allegrex/instructions/DCACHE_INDEX_WRITEBACK_INVALIDATE.h \
    emulator/allegrex/instructions/DIV.h \
    emulator/allegrex/instructions/DIVU.h \
    emulator/allegrex/instructions/DIV_S.h \
    emulator/allegrex/instructions/ERET.h \
    emulator/allegrex/instructions/EXT.h \
    emulator/allegrex/instructions/FLOOR_W_S.h \
    emulator/allegrex/instructions/HALT.h \
    emulator/allegrex/instructions/ICACHE_FILL.h \
    emulator/allegrex/instructions/ICACHE_FILL_WITH_LOCK.h \
    emulator/allegrex/instructions/ICACHE_HIT_INVALIDATE.h \
    emulator/allegrex/instructions/ICACHE_INDEX_INVALIDATE.h \
    emulator/allegrex/instructions/ICACHE_INDEX_UNLOCK.h \
    emulator/allegrex/instructions/INS.h \
    emulator/allegrex/instructions/J.h \
    emulator/allegrex/instructions/JAL.h \
    emulator/allegrex/instructions/JALR.h \
    emulator/allegrex/instructions/JR.h \
    emulator/allegrex/instructions/LB.h \
    emulator/allegrex/instructions/LBU.h \
    emulator/allegrex/instructions/LH.h \
    emulator/allegrex/instructions/LHU.h \
    emulator/allegrex/instructions/LL.h \
    emulator/allegrex/instructions/LUI.h \
    emulator/allegrex/instructions/LVLQ.h \
    emulator/allegrex/instructions/LVQ.h \
    emulator/allegrex/instructions/LVRQ.h \
    emulator/allegrex/instructions/LVS.h \
    emulator/allegrex/instructions/LW.h \
    emulator/allegrex/instructions/LWC1.h \
    emulator/allegrex/instructions/LWL.h \
    emulator/allegrex/instructions/LWR.h \
    emulator/allegrex/instructions/MADD.h \
    emulator/allegrex/instructions/MADDU.h \
    emulator/allegrex/instructions/MAX.h \
    emulator/allegrex/instructions/MFC0.h \
    emulator/allegrex/instructions/MFC1.h \
    emulator/allegrex/instructions/MFHI.h \
    emulator/allegrex/instructions/MFIC.h \
    emulator/allegrex/instructions/MFLO.h \
    emulator/allegrex/instructions/MFV.h \
    emulator/allegrex/instructions/MFVC.h \
    emulator/allegrex/instructions/MIN.h \
    emulator/allegrex/instructions/MOVN.h \
    emulator/allegrex/instructions/MOVZ.h \
    emulator/allegrex/instructions/MOV_S.h \
    emulator/allegrex/instructions/MSUB.h \
    emulator/allegrex/instructions/MSUBU.h \
    emulator/allegrex/instructions/MTC0.h \
    emulator/allegrex/instructions/MTC1.h \
    emulator/allegrex/instructions/MTHI.h \
    emulator/allegrex/instructions/MTIC.h \
    emulator/allegrex/instructions/MTLO.h \
    emulator/allegrex/instructions/MTV.h \
    emulator/allegrex/instructions/MTVC.h \
    emulator/allegrex/instructions/MULT.h \
    emulator/allegrex/instructions/MULTU.h \
    emulator/allegrex/instructions/MUL_S.h \
    emulator/allegrex/instructions/NEG_S.h \
    emulator/allegrex/instructions/NOR.h \
    emulator/allegrex/instructions/OR.h \
    emulator/allegrex/instructions/ORI.h \
    emulator/allegrex/instructions/ROTR.h \
    emulator/allegrex/instructions/ROTRV.h \
    emulator/allegrex/instructions/ROUND_W_S.h \
    emulator/allegrex/instructions/SB.h \
    emulator/allegrex/instructions/SC.h \
    emulator/allegrex/instructions/SEB.h \
    emulator/allegrex/instructions/SEH.h \
    emulator/allegrex/instructions/SH.h \
    emulator/allegrex/instructions/SLL.h \
    emulator/allegrex/instructions/SLLV.h \
    emulator/allegrex/instructions/SLT.h \
    emulator/allegrex/instructions/SLTI.h \
    emulator/allegrex/instructions/SLTIU.h \
    emulator/allegrex/instructions/SLTU.h \
    emulator/allegrex/instructions/SQRT_S.h \
    emulator/allegrex/instructions/SRA.h \
    emulator/allegrex/instructions/SRAV.h \
    emulator/allegrex/instructions/SRL.h \
    emulator/allegrex/instructions/SRLV.h \
    emulator/allegrex/instructions/SUB.h \
    emulator/allegrex/instructions/SUBU.h \
    emulator/allegrex/instructions/SUB_S.h \
    emulator/allegrex/instructions/SVLQ.h \
    emulator/allegrex/instructions/SVQ.h \
    emulator/allegrex/instructions/SVRQ.h \
    emulator/allegrex/instructions/SVS.h \
    emulator/allegrex/instructions/SW.h \
    emulator/allegrex/instructions/SWB.h \
    emulator/allegrex/instructions/SWC1.h \
    emulator/allegrex/instructions/SWL.h \
    emulator/allegrex/instructions/SWR.h \
    emulator/allegrex/instructions/SYNC.h \
    emulator/allegrex/instructions/SYSCALL.h \
    emulator/allegrex/instructions/TRUNC_W_S.h \
    emulator/allegrex/instructions/VABS.h \
    emulator/allegrex/instructions/VADD.h \
    emulator/allegrex/instructions/VASIN.h \
    emulator/allegrex/instructions/VAVG.h \
    emulator/allegrex/instructions/VBFY1.h \
    emulator/allegrex/instructions/VBFY2.h \
    emulator/allegrex/instructions/VC2I.h \
    emulator/allegrex/instructions/VCMOVF.h \
    emulator/allegrex/instructions/VCMOVT.h \
    emulator/allegrex/instructions/VCMP.h \
    emulator/allegrex/instructions/VCOS.h \
    emulator/allegrex/instructions/VCRS.h \
    emulator/allegrex/instructions/VCST.h \
    emulator/allegrex/instructions/VDET.h \
    emulator/allegrex/instructions/VDIV.h \
    emulator/allegrex/instructions/VDOT.h \
    emulator/allegrex/instructions/VEXP2.h \
    emulator/allegrex/instructions/VF2H.h \
    emulator/allegrex/instructions/VF2ID.h \
    emulator/allegrex/instructions/VF2IN.h \
    emulator/allegrex/instructions/VF2IU.h \
    emulator/allegrex/instructions/VF2IZ.h \
    emulator/allegrex/instructions/VFAD.h \
    emulator/allegrex/instructions/VFIM.h \
    emulator/allegrex/instructions/VFLUSH.h \
    emulator/allegrex/instructions/VH2F.h \
    emulator/allegrex/instructions/VHDP.h \
    emulator/allegrex/instructions/VHTFM2.h \
    emulator/allegrex/instructions/VHTFM3.h \
    emulator/allegrex/instructions/VHTFM4.h \
    emulator/allegrex/instructions/VI2C.h \
    emulator/allegrex/instructions/VI2F.h \
    emulator/allegrex/instructions/VI2S.h \
    emulator/allegrex/instructions/VI2UC.h \
    emulator/allegrex/instructions/VI2US.h \
    emulator/allegrex/instructions/VIDT.h \
    emulator/allegrex/instructions/VIIM.h \
    emulator/allegrex/instructions/VLGB.h \
    emulator/allegrex/instructions/VLOG2.h \
    emulator/allegrex/instructions/VMAX.h \
    emulator/allegrex/instructions/VMFVC.h \
    emulator/allegrex/instructions/VMIDT.h \
    emulator/allegrex/instructions/VMIN.h \
    emulator/allegrex/instructions/VMMOV.h \
    emulator/allegrex/instructions/VMMUL.h \
    emulator/allegrex/instructions/VMONE.h \
    emulator/allegrex/instructions/VMOV.h \
    emulator/allegrex/instructions/VMSCL.h \
    emulator/allegrex/instructions/VMTVC.h \
    emulator/allegrex/instructions/VMUL.h \
    emulator/allegrex/instructions/VMZERO.h \
    emulator/allegrex/instructions/VNEG.h \
    emulator/allegrex/instructions/VNOP.h \
    emulator/allegrex/instructions/VNRCP.h \
    emulator/allegrex/instructions/VNSIN.h \
    emulator/allegrex/instructions/VOCP.h \
    emulator/allegrex/instructions/VONE.h \
    emulator/allegrex/instructions/VPFXD.h \
    emulator/allegrex/instructions/VPFXS.h \
    emulator/allegrex/instructions/VPFXT.h \
    emulator/allegrex/instructions/VQMUL.h \
    emulator/allegrex/instructions/VRCP.h \
    emulator/allegrex/instructions/VREXP2.h \
    emulator/allegrex/instructions/VRNDF1.h \
    emulator/allegrex/instructions/VRNDF2.h \
    emulator/allegrex/instructions/VRNDI.h \
    emulator/allegrex/instructions/VRNDS.h \
    emulator/allegrex/instructions/VROT.h \
    emulator/allegrex/instructions/VRSQ.h \
    emulator/allegrex/instructions/VS2I.h \
    emulator/allegrex/instructions/VSAT0.h \
    emulator/allegrex/instructions/VSAT1.h \
    emulator/allegrex/instructions/VSBN.h \
    emulator/allegrex/instructions/VSBZ.h \
    emulator/allegrex/instructions/VSCL.h \
    emulator/allegrex/instructions/VSCMP.h \
    emulator/allegrex/instructions/VSGE.h \
    emulator/allegrex/instructions/VSIN.h \
    emulator/allegrex/instructions/VSLT.h \
    emulator/allegrex/instructions/VSOCP.h \
    emulator/allegrex/instructions/VSQRT.h \
    emulator/allegrex/instructions/VSRT1.h \
    emulator/allegrex/instructions/VSRT2.h \
    emulator/allegrex/instructions/VSRT3.h \
    emulator/allegrex/instructions/VSRT4.h \
    emulator/allegrex/instructions/VSUB.h \
    emulator/allegrex/instructions/VSYNC.h \
    emulator/allegrex/instructions/VT4444.h \
    emulator/allegrex/instructions/VT5551.h \
    emulator/allegrex/instructions/VT5650.h \
    emulator/allegrex/instructions/VTFM2.h \
    emulator/allegrex/instructions/VTFM3.h \
    emulator/allegrex/instructions/VTFM4.h \
    emulator/allegrex/instructions/VUC2I.h \
    emulator/allegrex/instructions/VUS2I.h \
    emulator/allegrex/instructions/VWBN.h \
    emulator/allegrex/instructions/VZERO.h \
    emulator/allegrex/instructions/WSBH.h \
    emulator/allegrex/instructions/WSBW.h \
    emulator/allegrex/instructions/XOR.h \
    emulator/allegrex/instructions/XORI.h \
    emulator/allegrex/instruction.h \
    emulator/allegrex/instructions.h \
    emulator/allegrex.h \
    emulator/emulator.h \
    emulator/linux/linux_memory.h \
    emulator/memory.h \
    qpspe4all.h
SOURCES += qmemoryspinbox.cpp \
    qmemorytreemodel.cpp \
    qmemorytreeview.cpp \
    qmemoryviewer.cpp \
    emulator/processor.cpp \
    emulator/win32/win32_memory.cpp \
    emulator/allegrex.cpp \
    emulator/allegrex/instruction.cpp \
    emulator/allegrex/instructions.cpp \
    emulator/emulator.cpp \
    emulator/memory.cpp \
    main.cpp \
    qpspe4all.cpp
FORMS += qmemoryviewer.ui \
    qpspe4all.ui
RESOURCES += 
