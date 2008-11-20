TEMPLATE = app
TARGET = qpspe4all
QT += core \
    gui
HEADERS += emulator/processor/cpu.h \
    emulator/processor/bcu.h \
    emulator/allegrex/interpreter/ABS_S.h \
    emulator/allegrex/interpreter/ADD.h \
    emulator/allegrex/interpreter/ADDI.h \
    emulator/allegrex/interpreter/ADDIU.h \
    emulator/allegrex/interpreter/ADDU.h \
    emulator/allegrex/interpreter/ADD_S.h \
    emulator/allegrex/interpreter/AND.h \
    emulator/allegrex/interpreter/ANDI.h \
    emulator/allegrex/interpreter/BC1F.h \
    emulator/allegrex/interpreter/BC1FL.h \
    emulator/allegrex/interpreter/BC1T.h \
    emulator/allegrex/interpreter/BC1TL.h \
    emulator/allegrex/interpreter/BEQ.h \
    emulator/allegrex/interpreter/BEQL.h \
    emulator/allegrex/interpreter/BGEZ.h \
    emulator/allegrex/interpreter/BGEZAL.h \
    emulator/allegrex/interpreter/BGEZALL.h \
    emulator/allegrex/interpreter/BGEZL.h \
    emulator/allegrex/interpreter/BGTZ.h \
    emulator/allegrex/interpreter/BGTZL.h \
    emulator/allegrex/interpreter/BITREV.h \
    emulator/allegrex/interpreter/BLEZ.h \
    emulator/allegrex/interpreter/BLEZL.h \
    emulator/allegrex/interpreter/BLTZ.h \
    emulator/allegrex/interpreter/BLTZAL.h \
    emulator/allegrex/interpreter/BLTZALL.h \
    emulator/allegrex/interpreter/BLTZL.h \
    emulator/allegrex/interpreter/BNE.h \
    emulator/allegrex/interpreter/BNEL.h \
    emulator/allegrex/interpreter/BREAK.h \
    emulator/allegrex/interpreter/BVF.h \
    emulator/allegrex/interpreter/BVFL.h \
    emulator/allegrex/interpreter/BVT.h \
    emulator/allegrex/interpreter/BVTL.h \
    emulator/allegrex/interpreter/CEIL_W_S.h \
    emulator/allegrex/interpreter/CFC0.h \
    emulator/allegrex/interpreter/CFC1.h \
    emulator/allegrex/interpreter/CLO.h \
    emulator/allegrex/interpreter/CLZ.h \
    emulator/allegrex/interpreter/CTC0.h \
    emulator/allegrex/interpreter/CTC1.h \
    emulator/allegrex/interpreter/CVT_S_W.h \
    emulator/allegrex/interpreter/CVT_W_S.h \
    emulator/allegrex/interpreter/C_COND_S.h \
    emulator/allegrex/interpreter/DCACHE_CREATE_DIRTY_EXCLUSIVE.h \
    emulator/allegrex/interpreter/DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK.h \
    emulator/allegrex/interpreter/DCACHE_FILL.h \
    emulator/allegrex/interpreter/DCACHE_FILL_WITH_LOCK.h \
    emulator/allegrex/interpreter/DCACHE_HIT_INVALIDATE.h \
    emulator/allegrex/interpreter/DCACHE_HIT_WRITEBACK.h \
    emulator/allegrex/interpreter/DCACHE_HIT_WRITEBACK_INVALIDATE.h \
    emulator/allegrex/interpreter/DCACHE_INDEX_UNLOCK.h \
    emulator/allegrex/interpreter/DCACHE_INDEX_WRITEBACK_INVALIDATE.h \
    emulator/allegrex/interpreter/DIV.h \
    emulator/allegrex/interpreter/DIVU.h \
    emulator/allegrex/interpreter/DIV_S.h \
    emulator/allegrex/interpreter/ERET.h \
    emulator/allegrex/interpreter/EXT.h \
    emulator/allegrex/interpreter/FLOOR_W_S.h \
    emulator/allegrex/interpreter/HALT.h \
    emulator/allegrex/interpreter/ICACHE_FILL.h \
    emulator/allegrex/interpreter/ICACHE_FILL_WITH_LOCK.h \
    emulator/allegrex/interpreter/ICACHE_HIT_INVALIDATE.h \
    emulator/allegrex/interpreter/ICACHE_INDEX_INVALIDATE.h \
    emulator/allegrex/interpreter/ICACHE_INDEX_UNLOCK.h \
    emulator/allegrex/interpreter/INS.h \
    emulator/allegrex/interpreter/J.h \
    emulator/allegrex/interpreter/JAL.h \
    emulator/allegrex/interpreter/JALR.h \
    emulator/allegrex/interpreter/JR.h \
    emulator/allegrex/interpreter/LB.h \
    emulator/allegrex/interpreter/LBU.h \
    emulator/allegrex/interpreter/LH.h \
    emulator/allegrex/interpreter/LHU.h \
    emulator/allegrex/interpreter/LL.h \
    emulator/allegrex/interpreter/LUI.h \
    emulator/allegrex/interpreter/LVLQ.h \
    emulator/allegrex/interpreter/LVQ.h \
    emulator/allegrex/interpreter/LVRQ.h \
    emulator/allegrex/interpreter/LVS.h \
    emulator/allegrex/interpreter/LW.h \
    emulator/allegrex/interpreter/LWC1.h \
    emulator/allegrex/interpreter/LWL.h \
    emulator/allegrex/interpreter/LWR.h \
    emulator/allegrex/interpreter/MADD.h \
    emulator/allegrex/interpreter/MADDU.h \
    emulator/allegrex/interpreter/MAX.h \
    emulator/allegrex/interpreter/MFC0.h \
    emulator/allegrex/interpreter/MFC1.h \
    emulator/allegrex/interpreter/MFHI.h \
    emulator/allegrex/interpreter/MFIC.h \
    emulator/allegrex/interpreter/MFLO.h \
    emulator/allegrex/interpreter/MFV.h \
    emulator/allegrex/interpreter/MFVC.h \
    emulator/allegrex/interpreter/MIN.h \
    emulator/allegrex/interpreter/MOVN.h \
    emulator/allegrex/interpreter/MOVZ.h \
    emulator/allegrex/interpreter/MOV_S.h \
    emulator/allegrex/interpreter/MSUB.h \
    emulator/allegrex/interpreter/MSUBU.h \
    emulator/allegrex/interpreter/MTC0.h \
    emulator/allegrex/interpreter/MTC1.h \
    emulator/allegrex/interpreter/MTHI.h \
    emulator/allegrex/interpreter/MTIC.h \
    emulator/allegrex/interpreter/MTLO.h \
    emulator/allegrex/interpreter/MTV.h \
    emulator/allegrex/interpreter/MTVC.h \
    emulator/allegrex/interpreter/MULT.h \
    emulator/allegrex/interpreter/MULTU.h \
    emulator/allegrex/interpreter/MUL_S.h \
    emulator/allegrex/interpreter/NEG_S.h \
    emulator/allegrex/interpreter/NOR.h \
    emulator/allegrex/interpreter/OR.h \
    emulator/allegrex/interpreter/ORI.h \
    emulator/allegrex/interpreter/ROTR.h \
    emulator/allegrex/interpreter/ROTRV.h \
    emulator/allegrex/interpreter/ROUND_W_S.h \
    emulator/allegrex/interpreter/SB.h \
    emulator/allegrex/interpreter/SC.h \
    emulator/allegrex/interpreter/SEB.h \
    emulator/allegrex/interpreter/SEH.h \
    emulator/allegrex/interpreter/SH.h \
    emulator/allegrex/interpreter/SLL.h \
    emulator/allegrex/interpreter/SLLV.h \
    emulator/allegrex/interpreter/SLT.h \
    emulator/allegrex/interpreter/SLTI.h \
    emulator/allegrex/interpreter/SLTIU.h \
    emulator/allegrex/interpreter/SLTU.h \
    emulator/allegrex/interpreter/SQRT_S.h \
    emulator/allegrex/interpreter/SRA.h \
    emulator/allegrex/interpreter/SRAV.h \
    emulator/allegrex/interpreter/SRL.h \
    emulator/allegrex/interpreter/SRLV.h \
    emulator/allegrex/interpreter/SUB.h \
    emulator/allegrex/interpreter/SUBU.h \
    emulator/allegrex/interpreter/SUB_S.h \
    emulator/allegrex/interpreter/SVLQ.h \
    emulator/allegrex/interpreter/SVQ.h \
    emulator/allegrex/interpreter/SVRQ.h \
    emulator/allegrex/interpreter/SVS.h \
    emulator/allegrex/interpreter/SW.h \
    emulator/allegrex/interpreter/SWB.h \
    emulator/allegrex/interpreter/SWC1.h \
    emulator/allegrex/interpreter/SWL.h \
    emulator/allegrex/interpreter/SWR.h \
    emulator/allegrex/interpreter/SYNC.h \
    emulator/allegrex/interpreter/SYSCALL.h \
    emulator/allegrex/interpreter/TRUNC_W_S.h \
    emulator/allegrex/interpreter/VABS.h \
    emulator/allegrex/interpreter/VADD.h \
    emulator/allegrex/interpreter/VASIN.h \
    emulator/allegrex/interpreter/VAVG.h \
    emulator/allegrex/interpreter/VBFY1.h \
    emulator/allegrex/interpreter/VBFY2.h \
    emulator/allegrex/interpreter/VC2I.h \
    emulator/allegrex/interpreter/VCMOVF.h \
    emulator/allegrex/interpreter/VCMOVT.h \
    emulator/allegrex/interpreter/VCMP.h \
    emulator/allegrex/interpreter/VCOS.h \
    emulator/allegrex/interpreter/VCRS.h \
    emulator/allegrex/interpreter/VCST.h \
    emulator/allegrex/interpreter/VDET.h \
    emulator/allegrex/interpreter/VDIV.h \
    emulator/allegrex/interpreter/VDOT.h \
    emulator/allegrex/interpreter/VEXP2.h \
    emulator/allegrex/interpreter/VF2H.h \
    emulator/allegrex/interpreter/VF2ID.h \
    emulator/allegrex/interpreter/VF2IN.h \
    emulator/allegrex/interpreter/VF2IU.h \
    emulator/allegrex/interpreter/VF2IZ.h \
    emulator/allegrex/interpreter/VFAD.h \
    emulator/allegrex/interpreter/VFIM.h \
    emulator/allegrex/interpreter/VFLUSH.h \
    emulator/allegrex/interpreter/VH2F.h \
    emulator/allegrex/interpreter/VHDP.h \
    emulator/allegrex/interpreter/VHTFM2.h \
    emulator/allegrex/interpreter/VHTFM3.h \
    emulator/allegrex/interpreter/VHTFM4.h \
    emulator/allegrex/interpreter/VI2C.h \
    emulator/allegrex/interpreter/VI2F.h \
    emulator/allegrex/interpreter/VI2S.h \
    emulator/allegrex/interpreter/VI2UC.h \
    emulator/allegrex/interpreter/VI2US.h \
    emulator/allegrex/interpreter/VIDT.h \
    emulator/allegrex/interpreter/VIIM.h \
    emulator/allegrex/interpreter/VLGB.h \
    emulator/allegrex/interpreter/VLOG2.h \
    emulator/allegrex/interpreter/VMAX.h \
    emulator/allegrex/interpreter/VMFVC.h \
    emulator/allegrex/interpreter/VMIDT.h \
    emulator/allegrex/interpreter/VMIN.h \
    emulator/allegrex/interpreter/VMMOV.h \
    emulator/allegrex/interpreter/VMMUL.h \
    emulator/allegrex/interpreter/VMONE.h \
    emulator/allegrex/interpreter/VMOV.h \
    emulator/allegrex/interpreter/VMSCL.h \
    emulator/allegrex/interpreter/VMTVC.h \
    emulator/allegrex/interpreter/VMUL.h \
    emulator/allegrex/interpreter/VMZERO.h \
    emulator/allegrex/interpreter/VNEG.h \
    emulator/allegrex/interpreter/VNOP.h \
    emulator/allegrex/interpreter/VNRCP.h \
    emulator/allegrex/interpreter/VNSIN.h \
    emulator/allegrex/interpreter/VOCP.h \
    emulator/allegrex/interpreter/VONE.h \
    emulator/allegrex/interpreter/VPFXD.h \
    emulator/allegrex/interpreter/VPFXS.h \
    emulator/allegrex/interpreter/VPFXT.h \
    emulator/allegrex/interpreter/VQMUL.h \
    emulator/allegrex/interpreter/VRCP.h \
    emulator/allegrex/interpreter/VREXP2.h \
    emulator/allegrex/interpreter/VRNDF1.h \
    emulator/allegrex/interpreter/VRNDF2.h \
    emulator/allegrex/interpreter/VRNDI.h \
    emulator/allegrex/interpreter/VRNDS.h \
    emulator/allegrex/interpreter/VROT.h \
    emulator/allegrex/interpreter/VRSQ.h \
    emulator/allegrex/interpreter/VS2I.h \
    emulator/allegrex/interpreter/VSAT0.h \
    emulator/allegrex/interpreter/VSAT1.h \
    emulator/allegrex/interpreter/VSBN.h \
    emulator/allegrex/interpreter/VSBZ.h \
    emulator/allegrex/interpreter/VSCL.h \
    emulator/allegrex/interpreter/VSCMP.h \
    emulator/allegrex/interpreter/VSGE.h \
    emulator/allegrex/interpreter/VSIN.h \
    emulator/allegrex/interpreter/VSLT.h \
    emulator/allegrex/interpreter/VSOCP.h \
    emulator/allegrex/interpreter/VSQRT.h \
    emulator/allegrex/interpreter/VSRT1.h \
    emulator/allegrex/interpreter/VSRT2.h \
    emulator/allegrex/interpreter/VSRT3.h \
    emulator/allegrex/interpreter/VSRT4.h \
    emulator/allegrex/interpreter/VSUB.h \
    emulator/allegrex/interpreter/VSYNC.h \
    emulator/allegrex/interpreter/VT4444.h \
    emulator/allegrex/interpreter/VT5551.h \
    emulator/allegrex/interpreter/VT5650.h \
    emulator/allegrex/interpreter/VTFM2.h \
    emulator/allegrex/interpreter/VTFM3.h \
    emulator/allegrex/interpreter/VTFM4.h \
    emulator/allegrex/interpreter/VUC2I.h \
    emulator/allegrex/interpreter/VUS2I.h \
    emulator/allegrex/interpreter/VWBN.h \
    emulator/allegrex/interpreter/VZERO.h \
    emulator/allegrex/interpreter/WSBH.h \
    emulator/allegrex/interpreter/WSBW.h \
    emulator/allegrex/interpreter/XOR.h \
    emulator/allegrex/interpreter/XORI.h \
    emulator/allegrex/interpreter.h \
    qmemoryspinbox.h \
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
    emulator/emulator.cpp \
    emulator/memory.cpp \
    main.cpp \
    qpspe4all.cpp
FORMS += qmemoryviewer.ui \
    qpspe4all.ui
RESOURCES += 
