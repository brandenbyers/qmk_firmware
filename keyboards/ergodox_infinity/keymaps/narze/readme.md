# narze's layout

## Notes
- SuperDuper mode for Ergodox is still under development, since combo keys does not work very well on Ergodox firmware.
  Now it is using multiple layers as a workaround. Actual implementation using combos are on my Planck layout.

## Key features
- Qwerty + [Colemak](https://colemak.com) layouts, and you can type Qwerty on software-level Colemak as well. Very useful for gaming or when your friend wanna type something but don't use Colemak.
- [(S)uper (D)uper Mode](https://github.com/jasonrudolph/keyboard#super-duper-mode) inspired by [jasonrudolph](https://github.com/jasonrudolph), with [some extensions](https://gist.github.com/narze/861e2167784842d38771) such as backspace & forward delete.
- Mouse keys with Z

## (S)uper (D)uper Mode
Press `S+D` simultaneously and hold, then...
- `H/J/K/L` for Vim-like movement
- `I/O` to move between browser tabs (Not working on Windows yet)
- `A` for `Option (Alt)`
- `F/;` for `Backspace/Forward delete`
- `A` with `H/L` to move to previous/next word
- `A` with `G/;` to delete to previous/next word
- `G` for `Cmd` (Gui/Windows)
- Available for all layouts (but plover) using physical S & D keys position in qwerty
- `Spacebar` for `Shift` (it's easier when already holding A with your pinky)
- Disable with `Raise+Lower+M`
- You can edit or add more useful keys in SUPERDUPER layer
- It can be activated by holding `/` as well, but it's slower since `LT()` uses `TAPPING_TERM` of 200ms but `S+D` uses `COMBO_TERM` of only 20ms (Can be changed within config.h)

## Build instructions
- `cd /path/to/qmk_firmware`

#### Left side
 ```
docker run -e keymap=narze -e subproject=infinity -e keyboard=ergodox --rm -v $('pwd'):/qmk:rw edasque/qmk_firmware
avr-objcopy -Iihex -Obinary .build/ergodox_infinity_narze.hex .build/ergodox_infinity_narze_left.bin
dfu-util --device 1c11:b007 -D .build/ergodox_infinity_narze_left.bin
```

#### Right side
```
docker run -e keymap=narze -e subproject=infinity -e keyboard=ergodox -e MASTER=right --rm -v $('pwd'):/qmk:rw edasque/qmk_firmware
avr-objcopy -Iihex -Obinary .build/ergodox_infinity_narze.hex .build/ergodox_infinity_narze_right.bin
dfu-util --device 1c11:b007 -D .build/ergodox_infinity_narze_right.bin
```

## TODO
- [ ] Make SuperDuper mode fully-compatible in Windows by swapping GUI with Ctrl
