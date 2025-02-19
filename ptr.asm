	.file	"test.c"
	.text
	.globl	strlit_len
	.type	strlit_len, @function
strlit_len:
.LFB31:
	.cfi_startproc
	endbr64
	cmpb	$0, (%rdi)
	je	.L4
	movl	$0, %eax
.L3:
	addq	$1, %rax
	cmpb	$0, (%rdi,%rax)
	jne	.L3
	ret
.L4:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE31:
	.size	strlit_len, .-strlit_len
	.globl	min_usize
	.type	min_usize, @function
min_usize:
.LFB32:
	.cfi_startproc
	endbr64
	cmpq	%rsi, %rdi
	movq	%rsi, %rax
	cmovbe	%rdi, %rax
	ret
	.cfi_endproc
.LFE32:
	.size	min_usize, .-min_usize
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Test: %s\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB33:
	.cfi_startproc
	endbr64
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	subq	$1040, %rsp
	.cfi_def_cfa_offset 1056
	movq	%fs:40, %rax
	movq	%rax, 1032(%rsp)
	xorl	%eax, %eax
	cmpl	$1, %edi
	je	.L8
	movq	8(%rsi), %rbx
	movq	%rbx, %rdi
	call	strlit_len
	movl	$1023, %edx
	cmpq	%rdx, %rax
	cmova	%rdx, %rax
	testq	%rbx, %rbx
	jne	.L14
.L9:
	movb	$0, (%rsp,%rax)
	movq	%rsp, %rdx
	leaq	.LC0(%rip), %rsi
	movl	$2, %edi
	movl	$0, %eax
	call	__printf_chk@PLT
.L8:
	movq	1032(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L15
	movl	$0, %eax
	addq	$1040, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 16
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
.L14:
	.cfi_restore_state
	leaq	1(%rbx,%rax), %rsi
	movq	%rsp, %rdx
.L10:
	addq	$1, %rbx
	addq	$1, %rdx
	movzbl	-1(%rbx), %ecx
	movb	%cl, -1(%rdx)
	cmpq	%rsi, %rbx
	jne	.L10
	jmp	.L9
.L15:
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE33:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
