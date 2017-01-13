#include "ui.h"

LPOPENFILENAME getOpenFileName()
{
    return LPOPENFILENAME();
}

LPOPENFILENAME getOpenFileDialog(LPOPENFILENAME file)
{
    if (getOpenFileName(file))
    {
    }
}