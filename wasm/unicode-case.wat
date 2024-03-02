(; 
    Unicode case

    Set of functions to check and convert a unicode character between lower and upper case.

    I have exported the functions for testing, but you do not need to include those parts if
    they are only being used internally within WAT.
;)
(module
    ;; Exported functions for testing. You do not need to include these parts
    (export "unicode_case_is_lower" (func $unicode_case_is_lower))
    (export "unicode_case_is_upper" (func $unicode_case_is_upper))
    (export "unicode_case_to_lower" (func $unicode_case_to_lower))
    (export "unicode_case_to_upper" (func $unicode_case_to_upper))

    (;
        unicode_case_is_lower
        Checks to see if the given character (a code point) is either
        a lower case, or some other character.
        @param {i32} $character The code point character to check.
        @return {i32} Returns 1 if a lower case character, otherwise returns 0.
    ;)
    (func $unicode_case_is_lower (param $character i32) (result i32)
        ;; Set locals
        (local $isOdd i32)

        ;; Basic Latin
        local.get $character
        i32.const 0x0061
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x007A
        i32.le_u
        if
            i32.const 1
            return
        end

        ;; Latin 1 Supplement
        local.get $character
        i32.const 0x00DF
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x00FF
        i32.le_u
        if
            local.get $character
            i32.const 0x00F7
            i32.eq
            if
                i32.const 0
                return
            else
                i32.const 1
                return
            end
        end

        ;; Set is odd
        local.get $character
        i32.const 2
        i32.rem_u
        local.set $isOdd

        ;; Latin Extended A
        local.get $character
        i32.const 0x0101
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x017E
        i32.le_u
        if

            local.get $character
            i32.const 0x0101
            i32.ge_u
            if
                local.get $character
                i32.const 0x0137
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x013A
            i32.ge_u
            if
                local.get $character
                i32.const 0x0148
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x014B
            i32.ge_u
            if
                local.get $character
                i32.const 0x0177
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x017A
            i32.ge_u
            if
                local.get $character
                i32.const 0x017E
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

        end

        ;; Latin Extended B and IPA Entensions
        local.get $character
        i32.const 0x0180
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x0294
        i32.le_u
        if

            (if (i32.eq (local.get $character)(i32.const 0x0180)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x0183
            i32.ge_u
            if
                local.get $character
                i32.const 0x0185
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x0188)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x018C)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0192)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0199)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x019A)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x019E)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x01A1
            i32.ge_u
            if
                local.get $character
                i32.const 0x01A5
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x01A8)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01A9)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01AD)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B0)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B4)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B6)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B9)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01BD)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01BF)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01C6)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01C9)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01CC)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x01CE
            i32.ge_u
            if
                local.get $character
                i32.const 0x01DC
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x01DF
            i32.ge_u
            if
                local.get $character
                i32.const 0x01EF
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x01F3)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01F5)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x01F9
            i32.ge_u
            if
                local.get $character
                i32.const 0x021F
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0223
            i32.ge_u
            if
                local.get $character
                i32.const 0x0233
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x023C)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x023F)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0240)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0242)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x0247
            i32.ge_u
            if
                local.get $character
                i32.const 0x024F
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0250
            i32.ge_u
            if
                local.get $character
                i32.const 0x0259
                i32.le_u
                if
                    local.get $character
                    i32.const 0x0255
                    i32.ne
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x025B)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0260)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0263)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0265)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x0268
            i32.ge_u
            if
                local.get $character
                i32.const 0x026A
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x026F)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0271)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0272)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0275)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x027D)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0280)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x0288
            i32.ge_u
            if
                local.get $character
                i32.const 0x028C
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x0292)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0294)) (then (i32.const 1) (return)))

        end

        ;; Greek and Coptic
        local.get $character
        i32.const 0x03AC
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x03EF
        i32.le_u
        if

            local.get $character
            i32.const 0x03AC
            i32.ge_u
            if
                local.get $character
                i32.const 0x03AF
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x03B1
            i32.ge_u
            if
                local.get $character
                i32.const 0x03C1
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x03C3
            i32.ge_u
            if
                local.get $character
                i32.const 0x03CE
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x03E3
            i32.ge_u
            if
                local.get $character
                i32.const 0x03EF
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

        end

        ;; Cyrillic
        local.get $character
        i32.const 0x0430
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x04F9
        i32.le_u
        if

            local.get $character
            i32.const 0x0430
            i32.ge_u
            if
                local.get $character
                i32.const 0x044F
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x0451
            i32.ge_u
            if
                local.get $character
                i32.const 0x045C
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x045E)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x045F
            i32.ge_u
            if
                local.get $character
                i32.const 0x0481
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0491
            i32.ge_u
            if
                local.get $character
                i32.const 0x04BF
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x04C2)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04C4)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04C8)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04CC)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x04D1
            i32.ge_u
            if
                local.get $character
                i32.const 0x04EB
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x04EF
            i32.ge_u
            if
                local.get $character
                i32.const 0x04F5
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x04F9)) (then (i32.const 1) (return)))

        end

        ;; Armenian
        local.get $character
        i32.const 0x0561
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x0586
        i32.le_u
        if
            i32.const 1
            return
        end

        ;; Georgian
        local.get $character
        i32.const 0x10D0
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x10F5
        i32.le_u
        if
            i32.const 1
            return
        end

        ;; Latin Extended Additional
        local.get $character
        i32.const 0x1E01
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x1EF9
        i32.le_u
        if

            local.get $character
            i32.const 0x1E01
            i32.ge_u
            if
                local.get $character
                i32.const 0x1E95
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x1EA1
            i32.ge_u
            if
                local.get $character
                i32.const 0x1EF9
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

        end

        ;; Greek Extended
        local.get $character
        i32.const 0x1F00
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x1FE1
        i32.le_u
        if

            local.get $character
            i32.const 0x1F00
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F07
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F10
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F15
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F20
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F27
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F30
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F37
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F40
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F45
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F51
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F57
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x1F60
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F67
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F80
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F87
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F90
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F97
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1FA0
            i32.ge_u
            if
                local.get $character
                i32.const 0x1FA7
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x1FB0)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FB1)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FD0)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FD1)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FE0)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FE1)) (then (i32.const 1) (return)))

        end

        ;; Encloded Alphanumerics
        local.get $character
        i32.const 0x24D0
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x24E9
        i32.le_u
        if
            i32.const 1
            return
        end

        ;; Halwidth and Fullwidth Forms
        local.get $character
        i32.const 0xFF41
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0xFF5A
        i32.le_u
        if
            i32.const 1
            return
        end

        ;; Got to end therefore not a lower case
        i32.const 0
    )

    (;
        unicode_case_is_upper
        Checks to see if the given character (a code point) is either
        a upper case, or some other character.
        @param {i32} $character The code point character to check.
        @return {i32} If a upper case (0) character, otherwise (1).
    ;)
    (func $unicode_case_is_upper (param $character i32) (result i32)
        ;; Set locals
        (local $isOdd i32)

        ;; Basic Latin
        local.get $character
        i32.const 0x0041
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x005A
        i32.le_u
        if
            i32.const 1
            return
        end

        ;; Latin 1 Supplement
        local.get $character
        i32.const 0x00C0
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x00DE
        i32.le_u
        if
            local.get $character
            i32.const 0x00D7
            i32.eq
            if
                i32.const 0
                return
            else
                i32.const 1
                return
            end
        end

        ;; Set is odd
        local.get $character
        i32.const 2
        i32.rem_u
        local.set $isOdd

        ;; Latin Extended A
        local.get $character
        i32.const 0x0100
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x017D
        i32.le_u
        if

            local.get $character
            i32.const 0x0100
            i32.ge_u
            if
                local.get $character
                i32.const 0x0136
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0139
            i32.ge_u
            if
                local.get $character
                i32.const 0x0147
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x014A
            i32.ge_u
            if
                local.get $character
                i32.const 0x0178
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0179
            i32.ge_u
            if
                local.get $character
                i32.const 0x017D
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

        end

        ;; Latin Extended B
        local.get $character
        i32.const 0x0181
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x024E
        i32.le_u
        if

            (if (i32.eq (local.get $character)(i32.const 0x0181)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x0182
            i32.ge_u
            if
                local.get $character
                i32.const 0x0186
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x0187)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x0189
            i32.ge_u
            if
                local.get $character
                i32.const 0x018B
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x018E
            i32.ge_u
            if
                local.get $character
                i32.const 0x0191
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x0193
            i32.ge_u
            if
                local.get $character
                i32.const 0x0198
                i32.le_u
                if
                    local.get $character
                    i32.const 0x0195
                    i32.ne
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x019C)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x019D)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x019F)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x01A0
            i32.ge_u
            if
                local.get $character
                i32.const 0x01A6
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x01A7)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01AC)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01AE)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01AF)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x01B1
            i32.ge_u
            if
                local.get $character
                i32.const 0x01B3
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x01B5)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B7)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B8)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01BC)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01C4)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01C7)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01CA)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x01CD
            i32.ge_u
            if
                local.get $character
                i32.const 0x01DB
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x01DE
            i32.ge_u
            if
                local.get $character
                i32.const 0x01EE
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x01F1)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01F4)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01F7)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x01F8
            i32.ge_u
            if
                local.get $character
                i32.const 0x01FE
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0200
            i32.ge_u
            if
                local.get $character
                i32.const 0x021E
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0220
            i32.ge_u
            if
                local.get $character
                i32.const 0x0232
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x023B)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x023D)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0241)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x0243
            i32.ge_u
            if
                local.get $character
                i32.const 0x0245
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x0246
            i32.ge_u
            if
                local.get $character
                i32.const 0x024E
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

        end

        ;; IPA Extensions
        (if (i32.eq (local.get $character)(i32.const 0x0283)) (then (i32.const 1) (return)))        

        ;; Spacing Modifier Letter
        (if (i32.eq (local.get $character)(i32.const 0x02C0)) (then (i32.const 1) (return)))        

        ;; Greek and Coptic
        local.get $character
        i32.const 0x0386
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x03EE
        i32.le_u
        if

            (if (i32.eq (local.get $character)(i32.const 0x0386)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x0388
            i32.ge_u
            if
                local.get $character
                i32.const 0x038A
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x038C)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x038E)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x038F)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x0391
            i32.ge_u
            if
                local.get $character
                i32.const 0x03A1
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x03A3
            i32.ge_u
            if
                local.get $character
                i32.const 0x03AB
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x03E2
            i32.ge_u
            if
                local.get $character
                i32.const 0x03EE
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

        end

        ;; Cyrillic
        local.get $character
        i32.const 0x0401
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x04F8
        i32.le_u
        if

            local.get $character
            i32.const 0x0401
            i32.ge_u
            if
                local.get $character
                i32.const 0x040C
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x040E
            i32.ge_u
            if
                local.get $character
                i32.const 0x042F
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x0460
            i32.ge_u
            if
                local.get $character
                i32.const 0x0480
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0490
            i32.ge_u
            if
                local.get $character
                i32.const 0x04BE
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x04C1)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04C3)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04C7)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04CB)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x04D0
            i32.ge_u
            if
                local.get $character
                i32.const 0x04EA
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x04EA)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x04EE
            i32.ge_u
            if
                local.get $character
                i32.const 0x04F4
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x04F8)) (then (i32.const 1) (return)))

        end

        ;; Armenian
        local.get $character
        i32.const 0x0531
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x0556
        i32.le_u
        if
            i32.const 1
            return
        end

        ;; Georgin
        local.get $character
        i32.const 0x10A0
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x10C5
        i32.le_u
        if
            i32.const 1
            return
        end

        ;; Latin Extended Additional
        local.get $character
        i32.const 0x01E00
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x1EF8
        i32.le_u
        if

            local.get $character
            i32.const 0x1E00
            i32.ge_u
            if
                local.get $character
                i32.const 0x1E94
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x1E9E
            i32.ge_u
            if
                local.get $character
                i32.const 0x1EF8
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        i32.const 1
                        return
                    end
                end
            end

        end

        ;; Greek Entended
        local.get $character
        i32.const 0x01F08
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x1FE9
        i32.le_u
        if

            local.get $character
            i32.const 0x1F08
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F0F
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F18
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F1D
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F28
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F2F
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F38
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F3F
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F48
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F4D
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F59
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F5F
                i32.le_u
                if
                    local.get $isOdd
                    if
                        i32.const 1
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x1F68
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F6F
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F88
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F8F
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1F98
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F9F
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            local.get $character
            i32.const 0x1FA8
            i32.ge_u
            if
                local.get $character
                i32.const 0x1FAF
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x1FB8)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FB9)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FD8)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FD9)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FE8)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FE9)) (then (i32.const 1) (return)))

        end

        ;; Encloded Alphanumerics
        local.get $character
        i32.const 0x24B6
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x24CF
        i32.le_u
        if
            i32.const 1
            return
        end

        ;; Latin Extended C
        local.get $character
        i32.const 0x02C64
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x2C7F
        i32.le_u
        if

            (if (i32.eq (local.get $character)(i32.const 0x2C64)) (then (i32.const 1) (return)))

            local.get $character
            i32.const 0x2C6D
            i32.ge_u
            if
                local.get $character
                i32.const 0x2C70
                i32.le_u
                if
                    i32.const 1
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x2C7E)) (then (i32.const 1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x2C7F)) (then (i32.const 1) (return)))

        end

        ;; Laten Extended D
        local.get $character
        i32.const 0xA78D
        i32.lt_u
        if
            i32.const 0
            return
        end

        (if (i32.eq (local.get $character)(i32.const 0xA78D)) (then (i32.const 1) (return)))
        (if (i32.eq (local.get $character)(i32.const 0xA7AE)) (then (i32.const 1) (return)))

        ;; Halfwidth and Fullwidth Forms
        local.get $character
        i32.const 0xFF21
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0xFF3A
        i32.le_u
        if
            i32.const 1
            return
        end

        ;; Got to end therefore not an upper case
        i32.const 0
    )

    (;
        unicode_case_to_lower
        Converts the given character (a code point) into a lower case
        version (if required).
        @param {i32} $character The code point character to convert to lower case.
        @return {i32} The lower case version of the character (if it has changed), otherwise
        it is the same value.
    ;)
    (func $unicode_case_to_lower (param $character i32) (result i32)
        ;; Set locals
        (local $isOdd i32)

        ;; Basic Latin
        local.get $character
        i32.const 0x0041
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x005A
        i32.le_u
        if
            local.get $character
            i32.const 0x20
            i32.add
            return
        end

        ;; Latin 1 Supplement
        local.get $character
        i32.const 0x00C0
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x00DE
        i32.le_u
        if
            local.get $character
            i32.const 0x00D7
            i32.ne
            if
                local.get $character
                i32.const 0x20
                i32.add
                return
            end
        end

        ;; Set is odd
        local.get $character
        i32.const 2
        i32.rem_u
        local.set $isOdd

        ;; Latin Extended A
        local.get $character
        i32.const 0x0100
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x017D
        i32.le_u
        if

            local.get $character
            i32.const 0x0100
            i32.ge_u
            if
                local.get $character
                i32.const 0x0136
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0139
            i32.ge_u
            if
                local.get $character
                i32.const 0x0147
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x014A
            i32.ge_u
            if
                local.get $character
                i32.const 0x0176
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x0178)) (then (i32.const 0x00FF) (return)))

            local.get $character
            i32.const 0x0179
            i32.ge_u
            if
                local.get $character
                i32.const 0x017D
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

        end

        ;; Latin Extended B
        local.get $character
        i32.const 0x0181
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x024E
        i32.le_u
        if

            (if (i32.eq (local.get $character)(i32.const 0x0181)) (then (i32.const 0x0253) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0182)) (then (i32.const 0x0183) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0184)) (then (i32.const 0x0185) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0186)) (then (i32.const 0x0254) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0187)) (then (i32.const 0x0188) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0189)) (then (i32.const 0x0256) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x018A)) (then (i32.const 0x0257) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x018B)) (then (i32.const 0x018C) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x018E)) (then (i32.const 0x0258) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x018F)) (then (i32.const 0x0259) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0190)) (then (i32.const 0x025B) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0191)) (then (i32.const 0x0192) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0193)) (then (i32.const 0x0260) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0194)) (then (i32.const 0x0263) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0196)) (then (i32.const 0x0269) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0197)) (then (i32.const 0x0268) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0198)) (then (i32.const 0x0199) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x019C)) (then (i32.const 0x026F) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x019D)) (then (i32.const 0x0272) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x019F)) (then (i32.const 0x0275) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01A0)) (then (i32.const 0x01A1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01A2)) (then (i32.const 0x01A3) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01A4)) (then (i32.const 0x01A5) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01A6)) (then (i32.const 0x0280) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01A7)) (then (i32.const 0x01A8) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01AC)) (then (i32.const 0x01AD) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01AE)) (then (i32.const 0x0288) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01AF)) (then (i32.const 0x01B0) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B1)) (then (i32.const 0x028A) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B2)) (then (i32.const 0x028B) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B3)) (then (i32.const 0x01B4) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B5)) (then (i32.const 0x01B6) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B7)) (then (i32.const 0x0292) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B8)) (then (i32.const 0x01B9) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01BC)) (then (i32.const 0x01BD) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01C4)) (then (i32.const 0x01C6) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01C7)) (then (i32.const 0x01C9) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01CA)) (then (i32.const 0x01CC) (return)))

            local.get $character
            i32.const 0x01CD
            i32.ge_u
            if
                local.get $character
                i32.const 0x01DB
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x01DE
            i32.ge_u
            if
                local.get $character
                i32.const 0x01EE
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x01F1)) (then (i32.const 0x01F3) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01F4)) (then (i32.const 0x01F5) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01F7)) (then (i32.const 0x01BF) (return)))

            local.get $character
            i32.const 0x01F8
            i32.ge_u
            if
                local.get $character
                i32.const 0x01FE
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0200
            i32.ge_u
            if
                local.get $character
                i32.const 0x021E
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x0220)) (then (i32.const 0x019E) (return)))

            local.get $character
            i32.const 0x0222
            i32.ge_u
            if
                local.get $character
                i32.const 0x0232
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x023B)) (then (i32.const 0x023C) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x023D)) (then (i32.const 0x019A) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0241)) (then (i32.const 0x0242) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0243)) (then (i32.const 0x0180) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0244)) (then (i32.const 0x0289) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0245)) (then (i32.const 0x028C) (return)))

            local.get $character
            i32.const 0x0246
            i32.ge_u
            if
                local.get $character
                i32.const 0x024E
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

        end

        ;; IPA Extensions
        (if (i32.eq (local.get $character)(i32.const 0x0283)) (then (i32.const 0x01A9) (return)))        

        ;; Spacing Modifier Letter
        (if (i32.eq (local.get $character)(i32.const 0x02C0)) (then (i32.const 0x0294) (return)))        

        ;; Greek and Coptic
        local.get $character
        i32.const 0x0386
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x03EE
        i32.le_u
        if

            (if (i32.eq (local.get $character)(i32.const 0x0386)) (then (i32.const 0x3AC) (return)))

            local.get $character
            i32.const 0x0388
            i32.ge_u
            if
                local.get $character
                i32.const 0x038A
                i32.le_u
                if
                    local.get $character
                    i32.const 0x25
                    i32.add
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x038C)) (then (i32.const 0x3CC) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x038E)) (then (i32.const 0x03CD) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x038F)) (then (i32.const 0x03CE) (return)))

            local.get $character
            i32.const 0x0391
            i32.ge_u
            if
                local.get $character
                i32.const 0x03A1
                i32.le_u
                if
                    local.get $character
                    i32.const 0x20
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x03A3
            i32.ge_u
            if
                local.get $character
                i32.const 0x03AB
                i32.le_u
                if
                    local.get $character
                    i32.const 0x20
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x03E2
            i32.ge_u
            if
                local.get $character
                i32.const 0x03EE
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

        end

        ;; Cyrillic
        local.get $character
        i32.const 0x0401
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x04F8
        i32.le_u
        if

            local.get $character
            i32.const 0x0401
            i32.ge_u
            if
                local.get $character
                i32.const 0x040C
                i32.le_u
                if
                    local.get $character
                    i32.const 0x50
                    i32.add
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x040E)) (then (i32.const 0x45E) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x040F)) (then (i32.const 0x45F) (return)))

            local.get $character
            i32.const 0x0410
            i32.ge_u
            if
                local.get $character
                i32.const 0x042F
                i32.le_u
                if
                    local.get $character
                    i32.const 0x20
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x0460
            i32.ge_u
            if
                local.get $character
                i32.const 0x0480
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0490
            i32.ge_u
            if
                local.get $character
                i32.const 0x04BE
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x04C1)) (then (i32.const 0x04C2) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04C3)) (then (i32.const 0x04C4) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04C7)) (then (i32.const 0x04C8) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04CB)) (then (i32.const 0x04CC) (return)))

            local.get $character
            i32.const 0x04D0
            i32.ge_u
            if
                local.get $character
                i32.const 0x04EA
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x04EA)) (then (i32.const 0x04EB) (return)))

            local.get $character
            i32.const 0x04EE
            i32.ge_u
            if
                local.get $character
                i32.const 0x04F4
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x04F8)) (then (i32.const 0x04F9) (return)))

        end

        ;; Armenian
        local.get $character
        i32.const 0x0531
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x0556
        i32.le_u
        if
            local.get $character
            i32.const 0x30
            i32.add
            return
        end

        ;; Georgin
        local.get $character
        i32.const 0x10A0
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x10C5
        i32.le_u
        if
            local.get $character
            i32.const 0x30
            i32.add
            return
        end

        ;; Latin Extended Additional
        local.get $character
        i32.const 0x01E00
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x1EF8
        i32.le_u
        if

            local.get $character
            i32.const 0x1E00
            i32.ge_u
            if
                local.get $character
                i32.const 0x1E94
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x1E9E)) (then (i32.const 0x00DF) (return)))

            local.get $character
            i32.const 0x1EA0
            i32.ge_u
            if
                local.get $character
                i32.const 0x1EF8
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.add
                        return
                    end
                end
            end

        end

        ;; Greek Entended
        local.get $character
        i32.const 0x01F08
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x1FE9
        i32.le_u
        if

            local.get $character
            i32.const 0x1F08
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F0F
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x1F18
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F1D
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x1F28
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F2F
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x1F38
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F3F
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x1F48
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F4D
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x1F59
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F5F
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 8
                        i32.sub
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x1F68
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F6F
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x1F88
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F8F
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x1F98
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F9F
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x1FA8
            i32.ge_u
            if
                local.get $character
                i32.const 0x1FAF
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.sub
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x1FB8)) (then (i32.const 0x1FB0) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FB9)) (then (i32.const 0x1FB1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FD8)) (then (i32.const 0x1FD0) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FD9)) (then (i32.const 0x1FD1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FE8)) (then (i32.const 0x1FE0) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FE9)) (then (i32.const 0x1FE1) (return)))

        end

        ;; Encloded Alphanumerics
        local.get $character
        i32.const 0x24B6
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x24CF
        i32.le_u
        if
            local.get $character
            i32.const 0x1A
            i32.add
            return
        end

        ;; Latin Extended C
        local.get $character
        i32.const 0x02C64
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x2C7F
        i32.le_u
        if

            (if (i32.eq (local.get $character)(i32.const 0x2C64)) (then (i32.const 0x027D) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x2C6D)) (then (i32.const 0x0251) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x2C6E)) (then (i32.const 0x0271) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x2C6F)) (then (i32.const 0x0250) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x2C70)) (then (i32.const 0x0252) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x2C7E)) (then (i32.const 0x023F) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x2C7F)) (then (i32.const 0x0240) (return)))

        end

        ;; Laten Extended D
        local.get $character
        i32.const 0xA78D
        i32.lt_u
        if
            local.get $character
            return
        end

        (if (i32.eq (local.get $character)(i32.const 0xA78D)) (then (i32.const 0x0265) (return)))
        (if (i32.eq (local.get $character)(i32.const 0xA7AE)) (then (i32.const 0x026A) (return)))

        ;; Halfwidth and Fullwidth Forms
        local.get $character
        i32.const 0xFF21
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0xFF3A
        i32.le_u
        if
            local.get $character
            i32.const 0x20
            i32.add
            return
        end

        ;; Got to the end therefore already lower case or something else
        local.get $character
    )

    (;
        unicode_case_to_upper
        Converts the given character (a code point) into an upper case
        version (if required).
        @param {i32} $character The code point character to convert to upper case.
        @return {i32} The upper case version of the character (if it has changed), otherwise
        it is the same value.
    ;)
    (func $unicode_case_to_upper (param $character i32) (result i32)
        ;; Set locals
        (local $isOdd i32)

        ;; Basic Latin
        local.get $character
        i32.const 0x0061
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x007A
        i32.le_u
        if
            local.get $character
            i32.const 0x20
            i32.sub
            return
        end

        ;; Latin 1 Supplement
        (if (i32.eq (local.get $character)(i32.const 0x00DF)) (then (i32.const 0x1E9E) (return)))

        local.get $character
        i32.const 0x00E0
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x00FE
        i32.le_u
        if
            local.get $character
            i32.const 0x00F7
            i32.ne
            if
                local.get $character
                i32.const 0x20
                i32.sub
                return
            end
        end

        (if (i32.eq (local.get $character)(i32.const 0x00FF)) (then (i32.const 0x0178) (return)))

        ;; Set is odd
        local.get $character
        i32.const 2
        i32.rem_u
        local.set $isOdd

        ;; Latin Extended A
        local.get $character
        i32.const 0x0101
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x017E
        i32.le_u
        if

            local.get $character
            i32.const 0x0101
            i32.ge_u
            if
                local.get $character
                i32.const 0x0137
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x013A
            i32.ge_u
            if
                local.get $character
                i32.const 0x0148
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x014B
            i32.ge_u
            if
                local.get $character
                i32.const 0x0177
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x017A
            i32.ge_u
            if
                local.get $character
                i32.const 0x017E
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

        end

        ;; Latin Extended B and IPA Entensions
        local.get $character
        i32.const 0x0180
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x0294
        i32.le_u
        if

            (if (i32.eq (local.get $character)(i32.const 0x0180)) (then (i32.const 0x0243) (return)))

            local.get $character
            i32.const 0x0183
            i32.ge_u
            if
                local.get $character
                i32.const 0x0185
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x0188)) (then (i32.const 0x0187) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x018C)) (then (i32.const 0x018B) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0192)) (then (i32.const 0x0191) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0199)) (then (i32.const 0x0198) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x019A)) (then (i32.const 0x023D) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x019E)) (then (i32.const 0x0220) (return)))

            local.get $character
            i32.const 0x01A1
            i32.ge_u
            if
                local.get $character
                i32.const 0x01A5
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x01A8)) (then (i32.const 0x01A7) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01A9)) (then (i32.const 0x0283) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01AD)) (then (i32.const 0x01AC) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B0)) (then (i32.const 0x01AF) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B4)) (then (i32.const 0x01B3) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B6)) (then (i32.const 0x01B5) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01B9)) (then (i32.const 0x01B8) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01BD)) (then (i32.const 0x01BC) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01BF)) (then (i32.const 0x01F7) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01C6)) (then (i32.const 0x01C4) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01C9)) (then (i32.const 0x01C7) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01CC)) (then (i32.const 0x01CA) (return)))

            local.get $character
            i32.const 0x01CE
            i32.ge_u
            if
                local.get $character
                i32.const 0x01DC
                i32.le_u
                if
                    local.get $isOdd
                    i32.eqz
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x01DF
            i32.ge_u
            if
                local.get $character
                i32.const 0x01EF
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x01F3)) (then (i32.const 0x01F1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x01F5)) (then (i32.const 0x01F4) (return)))

            local.get $character
            i32.const 0x01F9
            i32.ge_u
            if
                local.get $character
                i32.const 0x021F
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0223
            i32.ge_u
            if
                local.get $character
                i32.const 0x0233
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x023C)) (then (i32.const 0x023B) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x023F)) (then (i32.const 0x02C7E) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0240)) (then (i32.const 0x02C7F) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0242)) (then (i32.const 0x0241) (return)))

            local.get $character
            i32.const 0x0247
            i32.ge_u
            if
                local.get $character
                i32.const 0x024F
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x0250)) (then (i32.const 0x02C6F) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0251)) (then (i32.const 0x02C6D) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0252)) (then (i32.const 0x02C70) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0253)) (then (i32.const 0x0181) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0254)) (then (i32.const 0x0186) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0256)) (then (i32.const 0x0189) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0257)) (then (i32.const 0x018A) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0258)) (then (i32.const 0x018E) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0259)) (then (i32.const 0x018F) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x025B)) (then (i32.const 0x0190) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0260)) (then (i32.const 0x0193) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0263)) (then (i32.const 0x0194) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0265)) (then (i32.const 0xA78D) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0268)) (then (i32.const 0x0197) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0269)) (then (i32.const 0x0196) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x026A)) (then (i32.const 0xA7Ae) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x026F)) (then (i32.const 0x019C) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0271)) (then (i32.const 0x2C6E) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0272)) (then (i32.const 0x019D) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0275)) (then (i32.const 0x019F) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x027D)) (then (i32.const 0x2C64) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0280)) (then (i32.const 0x01A6) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0288)) (then (i32.const 0x01AE) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0289)) (then (i32.const 0x0244) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x028A)) (then (i32.const 0x01B1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x028B)) (then (i32.const 0x01B2) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x028C)) (then (i32.const 0x0245) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0292)) (then (i32.const 0x01B7) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x0294)) (then (i32.const 0x02C0) (return)))

        end

        ;; Greek and Coptic
        local.get $character
        i32.const 0x03AC
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x03EF
        i32.le_u
        if

            (if (i32.eq (local.get $character)(i32.const 0x03AC)) (then (i32.const 0x0386) (return)))

            local.get $character
            i32.const 0x03AD
            i32.ge_u
            if
                local.get $character
                i32.const 0x03AF
                i32.le_u
                if
                    local.get $character
                    i32.const 0x25
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x03B1
            i32.ge_u
            if
                local.get $character
                i32.const 0x03C1
                i32.le_u
                if
                    local.get $character
                    i32.const 0x20
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x03C3
            i32.ge_u
            if
                local.get $character
                i32.const 0x03CB
                i32.le_u
                if
                    local.get $character
                    i32.const 0x20
                    i32.sub
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x03CC)) (then (i32.const 0x038C) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x03CD)) (then (i32.const 0x038E) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x03CE)) (then (i32.const 0x038F) (return)))

            local.get $character
            i32.const 0x03E3
            i32.ge_u
            if
                local.get $character
                i32.const 0x03EF
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

        end

        ;; Cyrillic
        local.get $character
        i32.const 0x0430
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x04F9
        i32.le_u
        if

            local.get $character
            i32.const 0x0430
            i32.ge_u
            if
                local.get $character
                i32.const 0x044F
                i32.le_u
                if
                    local.get $character
                    i32.const 0x20
                    i32.sub
                    return
                end
            end

            local.get $character
            i32.const 0x0451
            i32.ge_u
            if
                local.get $character
                i32.const 0x045C
                i32.le_u
                if
                    local.get $character
                    i32.const 0x50
                    i32.sub
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x045E)) (then (i32.const 0x040E) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x045F)) (then (i32.const 0x040F) (return)))

            local.get $character
            i32.const 0x0461
            i32.ge_u
            if
                local.get $character
                i32.const 0x0481
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x0491
            i32.ge_u
            if
                local.get $character
                i32.const 0x04BF
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x04C2)) (then (i32.const 0x04C1) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04C4)) (then (i32.const 0x04C3) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04C8)) (then (i32.const 0x04C7) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x04CC)) (then (i32.const 0x04CB) (return)))

            local.get $character
            i32.const 0x04D1
            i32.ge_u
            if
                local.get $character
                i32.const 0x04EB
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x04EF
            i32.ge_u
            if
                local.get $character
                i32.const 0x04F5
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x04F9)) (then (i32.const 0x04F8) (return)))

        end

        ;; Armenian
        local.get $character
        i32.const 0x0561
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x0586
        i32.le_u
        if
            local.get $character
            i32.const 0x30
            i32.sub
            return
        end

        ;; Georgian
        local.get $character
        i32.const 0x10D0
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x10F5
        i32.le_u
        if
            local.get $character
            i32.const 0x30
            i32.sub
            return
        end

        ;; Latin Extended Additional
        local.get $character
        i32.const 0x1E01
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x1EF9
        i32.le_u
        if

            local.get $character
            i32.const 0x1E01
            i32.ge_u
            if
                local.get $character
                i32.const 0x1E95
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x1EA1
            i32.ge_u
            if
                local.get $character
                i32.const 0x1EF9
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 1
                        i32.sub
                        return
                    end
                end
            end

        end

        ;; Greek Extended
        local.get $character
        i32.const 0x1F00
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x1FE1
        i32.le_u
        if

            local.get $character
            i32.const 0x1F00
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F07
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x1F10
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F15
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x1F20
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F27
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x1F30
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F37
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x1F40
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F45
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x1F51
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F57
                i32.le_u
                if
                    local.get $isOdd
                    if
                        local.get $character
                        i32.const 8
                        i32.add
                        return
                    end
                end
            end

            local.get $character
            i32.const 0x1F60
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F67
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x1F80
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F87
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x1F90
            i32.ge_u
            if
                local.get $character
                i32.const 0x1F97
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.add
                    return
                end
            end

            local.get $character
            i32.const 0x1FA0
            i32.ge_u
            if
                local.get $character
                i32.const 0x1FA7
                i32.le_u
                if
                    local.get $character
                    i32.const 8
                    i32.add
                    return
                end
            end

            (if (i32.eq (local.get $character)(i32.const 0x1FB0)) (then (i32.const 0x1FB8) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FB1)) (then (i32.const 0x1FB9) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FD0)) (then (i32.const 0x1FD8) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FD1)) (then (i32.const 0x1FD9) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FE0)) (then (i32.const 0x1FE8) (return)))
            (if (i32.eq (local.get $character)(i32.const 0x1FE1)) (then (i32.const 0x1FE9) (return)))

        end

        ;; Encloded Alphanumerics
        local.get $character
        i32.const 0x24D0
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x24E9
        i32.le_u
        if
            local.get $character
            i32.const 0x1A
            i32.sub
            return
        end

        ;; Halwidth and Fullwidth Forms
        local.get $character
        i32.const 0xFF41
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0xFF5A
        i32.le_u
        if
            local.get $character
            i32.const 0x20
            i32.sub
            return
        end

        ;; Got to end therefore already upper case or something else
        local.get $character
    )
)
