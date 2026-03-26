	.globl	fun
	.type	fun, @function

fun:
	add 	%edi, %esi
	mov 	%esi, %eax
	ret
