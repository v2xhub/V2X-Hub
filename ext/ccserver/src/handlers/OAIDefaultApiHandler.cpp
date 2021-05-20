/**
 * Carma Cloud Webservice
 * Carma cloud  Webservice accepts requests from vehicles and response message from carma cloud
 *
 * The version of the OpenAPI document: 0.1.9
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIDefaultApiHandler.h"
#include "OAIDefaultApiRequest.h"

namespace OpenAPI {

OAIDefaultApiHandler::OAIDefaultApiHandler(){

}

OAIDefaultApiHandler::~OAIDefaultApiHandler(){

}

void OAIDefaultApiHandler::tcmreplyPost(QString body) {
    Q_UNUSED(body);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        
        reqObj->tcmreplyPostResponse();
    }    
}
void OAIDefaultApiHandler::tcmreqPost(QString body) {
    Q_UNUSED(body);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        
        reqObj->tcmreqPostResponse();
    }    
}
void OAIDefaultApiHandler::v2xhubPost(QString body) {
    Q_UNUSED(body);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        
        reqObj->v2xhubPostResponse();
    }    
}


}