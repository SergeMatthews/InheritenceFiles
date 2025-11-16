#include <iostream>
#include <string>

#include "FigureClass.h"

#include "TriangleClass.h"
#include "RightTriangleClass.h"
#include "IsoscelesTriangleClass.h"
#include "EquilateralTriangleClass.h"

#include "QuadrangleClass.h"
#include "ParallelogramClass.h"
#include "RhombusClass.h"
#include "RectangleClass.h"
#include "SquareClass.h"
using std::cout;
using std::endl;
using std::string;



void PrintInfo(Triangle* pTriangle);
void PrintInfo(Quadrangle* pQuadrangle);

int main()
{
    setlocale(LC_ALL, "RU");

    Triangle triObj(10, 20, 30, 50, 60, 70);
    RightTriangle RTriObj(10, 20, 30, 50, 60);
    IsoscelesTriangle iscTriObj(10, 20, 50, 60);
    EquilateralTriangle EqiTriObj(30);

    Quadrangle QuadObj(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle RectObj(10, 20);
    Square SqObj(20);
    Parallelogram ParObj(20, 30, 30, 40);
    Rhombus RomObj(30, 30, 40);

    PrintInfo(&triObj);
    PrintInfo(&RTriObj);
    PrintInfo(&iscTriObj);
    PrintInfo(&EqiTriObj);

    PrintInfo(&QuadObj);
    PrintInfo(&RectObj);
    PrintInfo(&SqObj);
    PrintInfo(&ParObj);
    PrintInfo(&RomObj);

    return EXIT_SUCCESS;
}

void PrintInfo(Triangle* pTriangle) {
    cout << pTriangle->GetFigureName() << ":" << endl;
    cout << "Стороны: a=" << pTriangle->GetLength_a() << " b=" \
        << pTriangle->GetLength_b() << " c=" << pTriangle->GetLength_c() << endl;
    cout << "Углы: A=" << pTriangle->GetAngle_A() << " B=" << pTriangle->GetAngle_B() << \
        " C=" << pTriangle->GetAngle_C() << endl << endl;
}

void PrintInfo(Quadrangle* pQuadrangle) {
    cout << pQuadrangle->GetFigureName() << ":" << endl;
    cout << "Стороны: a=" << pQuadrangle->GetLength_a() << " b=" << pQuadrangle->GetLength_b() << " c=" \
        << pQuadrangle->GetLength_c() << " d=" << pQuadrangle->GetLength_d() << endl;
    cout << "Углы: A=" << pQuadrangle->GetAngle_A() << " B=" << pQuadrangle->GetAngle_B() << \
        " C=" << pQuadrangle->GetAngle_C() << " D=" << pQuadrangle->GetAngle_D() << endl << endl;
}
