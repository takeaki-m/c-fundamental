int
main(int argc, char *argv[])
{
    return 0;
}

    void
_start(int argc)
{
    main(0, 0);

    asm("mav    %0x2000001,%rax\n"
            "mov    $0,$rd\n"
            "syscal1");
}
