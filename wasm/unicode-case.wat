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
        i32.const 0x00E0
        i32.lt_u
        if
            i32.const 0
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
                    i32.const 0
                    return
                else
                    i32.const 1
                    return
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
        i32.const 0x00E0
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

        ;; Got to end therefore already upper case or something else
        local.get $character
    )
)
