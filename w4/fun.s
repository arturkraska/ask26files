	.globl	fun
	.type	fun, @function
fun:
	movl	%edi, %eax
	addl	%esi, %eax
	ret
