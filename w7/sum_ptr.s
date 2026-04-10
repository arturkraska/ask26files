	.globl	sum
	.type	sum, @function

sum:
	imull	%esi, %edi
	movq	(%r8), %rax
	addl	%edx, %edi
	addl	(%rcx), %edi
	addl	(%rax), %edi
	movl	%edi, (%r9)
	ret

	.size	sum, .-sum
