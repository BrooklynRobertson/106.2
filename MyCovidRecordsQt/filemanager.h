#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QVector>

class FileManager
{
public:
    FileManager();
    QVector<QVector<QString>> ReadFile(QString filename, int numRows);
    void WriteFile(QString fileName, QVector<QString> fileContent);
    bool CheckValidUser(QString email, QString fileName);

public slots:

private:
    bool userFound = false;

};

#endif // FILEMANAGER_H
