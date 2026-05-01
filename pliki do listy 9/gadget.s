        .global gadget

        .text

# oczekiwane wartosci:
# rax: 0x3b (sys_evecve)
# rdi: "/usr/bin/nyancat"
# rsi: {"nyancat", NULL}
# rdx: {NULL}

gadget:
        dec     %rax            
        mov     48(%rsp), %rsi      
        lea     24(%rsp), %r8
        mov     %r8, (%rsi)
        mov     %rdi, %rdx      
        lea     16(%rsp),%rdi   
        ret

