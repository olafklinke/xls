#include "libxls/xls.h"

DWORD xls_wb_sheetcount (xlsWorkBook* pWB) {
    return pWB->sheets.count;
}

/*
 * The library seems to treat lastrow/lastcol as indexes but it seems they are
 * counts because the last index always turns out to return a null cell
 */

WORD xls_ws_rowcount (xlsWorkSheet* pWS) {
    return pWS->rows.lastrow;
}

WORD xls_ws_colcount (xlsWorkSheet* pWS) {
    return pWS->rows.lastcol;
}

WORD xls_cell_type (xlsCell *cell) {
    return cell->id;
}

BYTE * xls_cell_strval (xlsCell *cell) {
    return cell->str;
}

int32_t xls_cell_formulatype (xlsCell *cell) {
    return cell->l;
}

double xls_cell_numval (xlsCell *cell) {
    return cell->d;
}

WORD xls_cell_colspan (xlsCell *cell) {
    return cell->colspan;
}

WORD xls_cell_rowspan (xlsCell *cell) {
    return cell->rowspan;
}

BYTE xls_cell_hidden (xlsCell *cell) {
    return cell->isHidden;
}
