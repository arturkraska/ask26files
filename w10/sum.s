	.file	"sum.c"
	.text
	.p2align 4
	.globl	sum
	.type	sum, @function
sum:
.LFB0:
	.cfi_startproc
	endbr64
	testl	%esi, %esi
	jle	.L4
	leal	-1(%rsi), %eax
	leaq	4(%rdi,%rax,4), %rdx
	xorl	%eax, %eax
	.p2align 4,,10
	.p2align 3
.L3:
	addl	(%rdi), %eax
	addq	$4, %rdi
	cmpq	%rdx, %rdi
	jne	.L3
	ret
	.p2align 4,,10
	.p2align 3
.L4:
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	sum, .-sum
	.p2align 4
	.globl	funkcja
	.type	funkcja, @function
funkcja:
.LFB1:
	.cfi_startproc
	endbr64
	movl	zmienna_statyczna.0(%rip), %edx
	leal	1(%rdx), %eax
	movl	%eax, zmienna_statyczna.0(%rip)
	movl	zmienna_globalna(%rip), %eax
	addl	$1, %eax
	movl	%eax, zmienna_globalna(%rip)
	leal	9(%rdx,%rax), %eax
	ret
	.cfi_endproc
.LFE1:
	.size	funkcja, .-funkcja
	.data
	.align 4
	.type	zmienna_statyczna.0, @object
	.size	zmienna_statyczna.0, 4
zmienna_statyczna.0:
	.long	8
	.globl	tab3
	.section	.rodata
	.align 16
	.type	tab3, @object
	.size	tab3, 20
tab3:
	.long	6
	.long	7
	.long	8
	.long	9
	.long	10
	.globl	tab2
	.data
	.align 16
	.type	tab2, @object
	.size	tab2, 20
tab2:
	.long	1
	.long	2
	.long	3
	.long	4
	.long	5
	.globl	tab1
	.bss
	.align 32
	.type	tab1, @object
	.size	tab1, 4000
tab1:
	.zero	4000
	.globl	zmienna_globalna
	.data
	.align 4
	.type	zmienna_globalna, @object
	.size	zmienna_globalna, 4
zmienna_globalna:
	.long	3
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
