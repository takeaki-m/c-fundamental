	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 1
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	str	x1, [sp]
	mov	w0, #0
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
