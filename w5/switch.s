	.file	"switch.c"
	.text
	.p2align 4
	.globl	fun
	.type	fun, @function
fun:
.LFB0:
	.cfi_startproc
	endbr64
	cmpl	$7, %edi
	ja	.L2
	movl	%edi, %edi
	notrack jmp	*.L4(,%rdi,8)
	.section	.rodata
	.align 8
	.align 4
.L4:
	.quad	.L2
	.quad	.L8
	.quad	.L7
	.quad	.L7
	.quad	.L6
	.quad	.L2
	.quad	.L5
	.quad	.L3
	.text
	.p2align 4,,10
	.p2align 3
.L8:
	addl	$17, %esi
.L7:
	xorl	$38, %esi
.L3:
	leal	7(%rsi,%rsi), %eax
	ret
	.p2align 4,,10
	.p2align 3
.L5:
	movslq	%esi, %rax
	sarl	$31, %esi
	imulq	$1431655766, %rax, %rax
	shrq	$32, %rax
	subl	%esi, %eax
	leal	9(%rax), %esi
.L6:
	addl	$1000, %esi
.L2:
	leal	7(%rsi), %eax
	ret
	.cfi_endproc
.LFE0:
	.size	fun, .-fun
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04.3) 11.4.0"
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
