	.globl	sum
	.type	sum, @function

sum:
    addl    %r8d, %r9d
    addl    %esi, %edi
    addl    %edx, %ecx
    movl    %r9d, %eax
    addl    %ecx, %edi
    addl    %edi, %eax
    ret

	.size	sum, .-sum
