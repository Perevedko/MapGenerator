#include "mapRenderer.h"
#include <iostream>

    char MapRenderer::getSymbolForCellValue(int cellValue) {
        switch (cellValue) {
        case 0:
            return ' ';  // �������
        case 1:
            return '.';  // ����
        case 2:
            return 'I';  // ������
        case 3:
            return 'H';  // �����
        default:
            return ' ';  // �� ���������, ��������, ��� ����������� ��������
        }
    }

    void MapRenderer::renderCell(int cellValue) {
        std::cout << getSymbolForCellValue(cellValue);
    }

    void MapRenderer::setConsoleColor(int cellValue) {
        std::string colorCode = "";
        switch (cellValue) {
        case 2:
            // ������ (������)
            colorCode = "\033[38;5;226m";
            break;
        case 1:
            // ���� (�������)
            colorCode = "\033[38;5;34m";
            break;
        case 3:
            // ����� (�������)
            colorCode = "\033[38;5;196m";
            break;
        default:
            // ����������� ����
            colorCode = "\033[0m";
            break;
        }

        std::cout << colorCode;
    }

    void MapRenderer::resetConsoleColor() {
        std::cout << "\033[0m ";  // ����� �����
    }
