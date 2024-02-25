#ifndef MESSAGE_H
#define MESSAGE_H

#include <QPainter>
#include <QObject>
#include <QRect>

/**
 * @brief La classe Message représente un message.
 * 
 * Cette classe permet de créer et de dessiner des messages.
 */

class Message
{
public:
    /**
     * @brief Constructeur de la classe Message.
     */
    Message();

    /**
     * @brief Affiche le message.
     * 
     * @param m Le QPainter utilisé pour afficher le message.
     */
    void dessiner1(QPainter * m);

    /**
     * @brief Dessine le message.
     * 
     * @param m Le QPainter utilisé pour dessiner le message.
     */
    void dessiner2(QPainter * m);
};

#endif // MESSAGE_H
