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
        i32.const 0x0061
        i32.ge_u
        if
            local.get $character
            i32.const 0x007A
            i32.le_u
            if
                i32.const 1
                return
            end
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
        i32.const 0x00DF
        i32.ge_u
        if
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
        i32.const 0x0101
        i32.ge_u
        if
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
        end

        ;; Latin Extended B
        local.get $character
        i32.const 0x0180
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x0180
        i32.ge_u
        if
            local.get $character
            i32.const 0x024F
            i32.le_u
            if

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
                (if (i32.eq (local.get $character)(i32.const 0x01AD)) (then (i32.const 1) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B0)) (then (i32.const 1) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B4)) (then (i32.const 1) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B6)) (then (i32.const 1) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B9)) (then (i32.const 1) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01BD)) (then (i32.const 1) (return)))
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
                    i32.const 0x01FF
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
                i32.const 0x0201
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

            end
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
        i32.const 0x0041
        i32.ge_u
        if
            local.get $character
            i32.const 0x005A
            i32.le_u
            if
                i32.const 1
                return
            end
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
        i32.const 0x00C0
        i32.ge_u
        if
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
        end

        local.get $character
        i32.const 0x1E9E
        i32.eq
        if
            i32.const 1
            return
        end

        local.get $character
        i32.const 0x0178
        i32.eq
        if
            i32.const 1
            return
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
        i32.const 0x0100
        i32.ge_u
        if
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
                    i32.const 0x0176
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
        end

        ;; Latin Extended B
        local.get $character
        i32.const 0x0180
        i32.lt_u
        if
            i32.const 0
            return
        end

        local.get $character
        i32.const 0x0180
        i32.ge_u
        if
            local.get $character
            i32.const 0x024F
            i32.le_u
            if

                local.get $character
                i32.const 0x0182
                i32.ge_u
                if
                    local.get $character
                    i32.const 0x0184
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
                (if (i32.eq (local.get $character)(i32.const 0x018B)) (then (i32.const 1) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x0191)) (then (i32.const 1) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x0198)) (then (i32.const 1) (return)))

                local.get $character
                i32.const 0x01A0
                i32.ge_u
                if
                    local.get $character
                    i32.const 0x01A4
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
                (if (i32.eq (local.get $character)(i32.const 0x01AF)) (then (i32.const 1) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B3)) (then (i32.const 1) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B5)) (then (i32.const 1) (return)))
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
                            i32.const 1
                            return
                        end
                    end
                end

                (if (i32.eq (local.get $character)(i32.const 0x023B)) (then (i32.const 1) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x0241)) (then (i32.const 1) (return)))

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
        i32.const 0x0041
        i32.ge_u
        if
            local.get $character
            i32.const 0x005A
            i32.le_u
            if
                local.get $character
                i32.const 0x20
                i32.add
                return
            end
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
        i32.const 0x00C0
        i32.ge_u
        if
            local.get $character
            i32.const 0x00DE
            i32.le_u
            if
                local.get $character
                i32.const 0x00D7
                i32.eq
                if
                    local.get $character
                    return
                else
                    local.get $character
                    i32.const 0x20
                    i32.add
                    return
                end
            end
        end

        local.get $character
        i32.const 0x1E9E
        i32.eq
        if
            i32.const 0x00DF
            return
        end

        local.get $character
        i32.const 0x0178
        i32.eq
        if
            i32.const 0x00FF
            return
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
        i32.const 0x0100
        i32.ge_u
        if
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
                            i32.const 0x01
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
                            i32.const 0x01
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
                            i32.const 0x01
                            i32.add
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
                            local.get $character
                            i32.const 0x01
                            i32.add
                            return
                        end
                    end
                end

            end
        end

        ;; Latin Extended B
        local.get $character
        i32.const 0x0180
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x0180
        i32.ge_u
        if
            local.get $character
            i32.const 0x024F
            i32.le_u
            if

                local.get $character
                i32.const 0x0182
                i32.ge_u
                if
                    local.get $character
                    i32.const 0x0184
                    i32.le_u
                    if
                        local.get $isOdd
                        i32.eqz
                        if
                            local.get $character
                            i32.const 0x01
                            i32.add
                            return
                        end
                    end
                end

                (if (i32.eq (local.get $character)(i32.const 0x0187)) (then (i32.const 0x188) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x018B)) (then (i32.const 0x18C) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x0191)) (then (i32.const 0x192) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x0198)) (then (i32.const 0x199) (return)))

                local.get $character
                i32.const 0x01A0
                i32.ge_u
                if
                    local.get $character
                    i32.const 0x01A4
                    i32.le_u
                    if
                        local.get $isOdd
                        i32.eqz
                        if
                            local.get $character
                            i32.const 0x01
                            i32.add
                            return
                        end
                    end
                end

                (if (i32.eq (local.get $character)(i32.const 0x01A7)) (then (i32.const 0x1A8) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01AC)) (then (i32.const 0x1AD) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01AF)) (then (i32.const 0x1B0) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B3)) (then (i32.const 0x1B4) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B5)) (then (i32.const 0x1B6) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B8)) (then (i32.const 0x1B9) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01BC)) (then (i32.const 0x1BD) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01C4)) (then (i32.const 0x1C6) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01C7)) (then (i32.const 0x1C9) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01CA)) (then (i32.const 0x1CC) (return)))

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
                            i32.const 0x01
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
                            i32.const 0x01
                            i32.add
                            return
                        end
                    end
                end

                (if (i32.eq (local.get $character)(i32.const 0x01F1)) (then (i32.const 0x1F3) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01F4)) (then (i32.const 0x1F5) (return)))

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
                            i32.const 0x01
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
                            i32.const 0x01
                            i32.add
                            return
                        end
                    end
                end

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
                            i32.const 0x01
                            i32.add
                            return
                        end
                    end
                end

                (if (i32.eq (local.get $character)(i32.const 0x023B)) (then (i32.const 0x23C) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x0241)) (then (i32.const 0x242) (return)))

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
                            i32.const 0x01
                            i32.add
                            return
                        end
                    end
                end

            end
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
        i32.const 0x0061
        i32.ge_u
        if
            local.get $character
            i32.const 0x007A
            i32.le_u
            if
                local.get $character
                i32.const 0x20
                i32.sub
                return
            end
        end

        ;; Latin 1 Supplement
        local.get $character
        i32.const 0x00DF
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x00E0
        i32.ge_u
        if
            local.get $character
            i32.const 0x00FE
            i32.le_u
            if
                local.get $character
                i32.const 0x00F7
                i32.eq
                if
                    local.get $character
                    return
                else
                    local.get $character
                    i32.const 0x20
                    i32.sub
                    return
                end
            end
        end

        local.get $character
        i32.const 0x00DF
        i32.eq
        if
            i32.const 0x1E9E
            return
        end

        local.get $character
        i32.const 0x00FF
        i32.eq
        if
            i32.const 0x0178
            return
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
            local.get $character
            return
        end

        local.get $character
        i32.const 0x0101
        i32.ge_u
        if
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
                            i32.const 0x01
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
                            i32.const 0x01
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
                            i32.const 0x01
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
                            i32.const 0x01
                            i32.sub
                            return
                        end
                    end
                end

            end
        end

        ;; Latin Extended B
        local.get $character
        i32.const 0x0180
        i32.lt_u
        if
            local.get $character
            return
        end

        local.get $character
        i32.const 0x0180
        i32.ge_u
        if
            local.get $character
            i32.const 0x024F
            i32.le_u
            if

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
                            i32.const 0x01
                            i32.sub
                            return
                        end
                    end
                end

                (if (i32.eq (local.get $character)(i32.const 0x0188)) (then (i32.const 0x0187) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x018C)) (then (i32.const 0x018B) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x0192)) (then (i32.const 0x0191) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x0199)) (then (i32.const 0x0198) (return)))

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
                            i32.const 0x01
                            i32.sub
                            return
                        end
                    end
                end

                (if (i32.eq (local.get $character)(i32.const 0x01A8)) (then (i32.const 0x01A7) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01AD)) (then (i32.const 0x01AC) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B0)) (then (i32.const 0x01AF) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B4)) (then (i32.const 0x01B3) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B6)) (then (i32.const 0x01B5) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01B9)) (then (i32.const 0x01B8) (return)))
                (if (i32.eq (local.get $character)(i32.const 0x01BD)) (then (i32.const 0x01BC) (return)))
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
                            i32.const 0x01
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
                            i32.const 0x01
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
                    i32.const 0x01FF
                    i32.le_u
                    if
                        local.get $isOdd
                        if
                            local.get $character
                            i32.const 0x01
                            i32.sub
                            return
                        end
                    end
                end

                local.get $character
                i32.const 0x0201
                i32.ge_u
                if
                    local.get $character
                    i32.const 0x021F
                    i32.le_u
                    if
                        local.get $isOdd
                        if
                            local.get $character
                            i32.const 0x01
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
                            i32.const 0x01
                            i32.sub
                            return
                        end
                    end
                end

                (if (i32.eq (local.get $character)(i32.const 0x023C)) (then (i32.const 0x023B) (return)))
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
                            i32.const 0x01
                            i32.sub
                            return
                        end
                    end
                end

            end
        end

        ;; Got to end therefore already upper case or something else
        local.get $character
    )
)
