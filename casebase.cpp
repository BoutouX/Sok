#include "casebase.h"

#include <QVBoxLayout>
#include <QPixmap>
#include <QLabel>

Casebase::Casebase(QWidget *parent) {}

void Casebase::setSize(int width, int height)
{
    // Régler la taille du widget Mur
    setFixedSize(width, height);
    setImagePath(":/case/case.jpg");
}
