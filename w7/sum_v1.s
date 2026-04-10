	.globl	sum
	.type	sum, @function

sum:
    addl    %esi, %edi
    addl    %edx, %edi
    addl    %ecx, %edi
    addl    %r8d, %edi
    addl    %r9d, %edi
    movl    %edi, %eax
    ret

	.size	sum, .-sum
