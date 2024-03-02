; 메이플 매크로
; 반복문 : https://www.autohotkey.com/boards/viewtopic.php?t=87970
; 키 목록 : https://tricks-office.com/autohotkey/
; 출처 : https://www.autohotkey.com/boards/viewtopic.php?t=14164



if not A_IsAdmin
{
   Run *RunAs "%A_ScriptFullPath%"  ; Requires v1.0.92.01+
   ExitApp
}
; Run this script as admin, just to make sure....
SetTimer, Heal, 10
SetTimer, Buff, 10
SetTimer, Heal, Off
SetTimer, Buff, Off

StartTime := A_TickCount


F6::
Toggle := !Toggle
If Toggle = 1
   SetTimer, Heal, On 
Else
   SetTimer, Heal, Off
Return
 
Heal:
Send d
Sleep 160
Send {Left Down}
Sleep 160
Send {Left Up}
Sleep 160
Send {Right Down}
Sleep 160
Send {Right Up}
Sleep 160
Return

Buff:
Send 1
Sleep 800
Return


F7::Pause
F8::ExitApp