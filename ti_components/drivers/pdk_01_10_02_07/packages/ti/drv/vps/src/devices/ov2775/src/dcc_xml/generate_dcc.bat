    del *.bin
    for %%X in (*.xml) do ..\..\..\..\..\docs\tda3xx\dcc_gen_win.exe %%X
    copy /b *.bin sensor.bin
    ..\..\..\..\..\docs\tda3xx\bin2c.exe sensor.bin ..\bspdrv_ov2775Dcc.h ov2775
    del *.bin
