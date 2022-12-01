#include "filemanager.h"
#include <QFile>
#include <QTextStream>

FileManager::FileManager()
{

}

//function to add user
void FileManager::WriteFile(QString fileName, QVector<QString> fileContent){
  fileName.append(".csv");
    QFile file(fileName);

    file.open(QIODevice::ReadWrite | QIODevice::Append);

    if(!file.isOpen()){
         qDebug("no file was found  (readwrite)....");
        return;
    }


    QTextStream stream(&file);
    for(int i = 0; i < fileContent.size(); i++){
        stream << fileContent.at(i);
        if(i != fileContent.size()-1){
            stream << ",";
        }
        else{
            stream << "\n";
        }
    }
    file.close();
    if(!file.isOpen()){
        qDebug("File closed - write..");
    }
}

//function to check user already in file
bool FileManager::CheckValidUser(QString email, QString fileName){
    userFound = false;
    QVector<QVector<QString>> content = ReadFile(fileName, 3);

    for(int i = 0; i < content.size(); i++){
        if(content.at(i).at(0) == email){
            userFound = true;
            return false;
        }
        else{
            continue;
        }
    }
    if(!userFound){
        return true;
    }
    return false;
}

//function to read files
QVector<QVector<QString>> FileManager::ReadFile(QString fileName, int numRows){
    fileName.append(".csv");

    QVector<QVector<QString>> columns;
    QVector<QString> rows;

    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    if(!file.isOpen()){
        qDebug("no file was found....(readonly)");
        return columns;
    }

    QTextStream stream(&file);

    while(!stream.atEnd()) {
            QString str = stream.readLine();
            rows.append(str.split(","));
             for(int i = 0; i < numRows; i++){
                 if(i == numRows -1) {
                columns.append(rows);
                rows.clear();  }
             }


        }

    return columns;
}
