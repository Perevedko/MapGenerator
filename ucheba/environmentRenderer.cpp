#include "environmentRenderer.h"
#include <iostream>

char environmentRenderer::getSymbolForCellValue(int cellValue) {
    switch (cellValue) {
    default:
        return ' ';  // �� ���������, ��������, ��� ����������� ��������
    case 1:
        return '$';  // ������
    case 2:
        return 't';  // ����
    case 3:
        return 'c';  // ����
    case 4:
        return 'f';  // ������
    case 5:
        return '^'; // ������
    case 6:
        return '%'; // �� ��
    case 7:
        return '+'; // ������
    case 8:
        return '-'; // �������
    case 9:
        return '@'; // ������ 
    case 10:
        return '!'; // ��������� 
    }
}

void environmentRenderer::renderCell(int cellValue) {
    std::cout << getSymbolForCellValue(cellValue);
}

void environmentRenderer::setConsoleColor(int cellValue) {
    std::string colorCode = "";
    switch (cellValue) {
    default:
        // ����������� ����
        colorCode = "\033[0m";
        break;
    case 1:
        // ���� (�������)
        colorCode = "\033[38;5;34m";
        break;
    case 2:
        // ������ (������)
        colorCode = "\033[38;5;226m";
        break;
    case 3:
        // ����� (�������)
        colorCode = "\033[38;5;196m";
        break;
    case 4:
        colorCode = "\033[38;5;126m";
        break;
    }

    std::cout << colorCode;
}

void environmentRenderer::resetConsoleColor() {
    std::cout << "\033[0m ";  // ����� �����
}
