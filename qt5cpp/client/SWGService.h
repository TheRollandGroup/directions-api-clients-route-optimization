/**
 * Route Optimization API
 * Our Route Optimization API solves the so called vehicle routing problem fast. It calculates an optimal tour for a set of vehicles, services and constraints
 *
 * OpenAPI spec version: 1.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGService.h
 * 
 * 
 */

#ifndef SWGService_H_
#define SWGService_H_

#include <QJsonObject>


#include "SWGAddress.h"
#include "SWGTimeWindow.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGService: public SWGObject {
public:
    SWGService();
    SWGService(QString* json);
    virtual ~SWGService();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGService* fromJson(QString &jsonString);

    QString* getId();
    void setId(QString* id);

    QString* getType();
    void setType(QString* type);

    qint32 getPriority();
    void setPriority(qint32 priority);

    QString* getName();
    void setName(QString* name);

    SWGAddress* getAddress();
    void setAddress(SWGAddress* address);

    qint64 getDuration();
    void setDuration(qint64 duration);

    QList<SWGTimeWindow*>* getTimeWindows();
    void setTimeWindows(QList<SWGTimeWindow*>* time_windows);

    QList<qint32>* getSize();
    void setSize(QList<qint32>* size);

    QList<QString*>* getRequiredSkills();
    void setRequiredSkills(QList<QString*>* required_skills);

    QList<QString*>* getAllowedVehicles();
    void setAllowedVehicles(QList<QString*>* allowed_vehicles);


private:
    QString* id;
    QString* type;
    qint32 priority;
    QString* name;
    SWGAddress* address;
    qint64 duration;
    QList<SWGTimeWindow*>* time_windows;
    QList<qint32>* size;
    QList<QString*>* required_skills;
    QList<QString*>* allowed_vehicles;
};

} /* namespace Swagger */

#endif /* SWGService_H_ */
