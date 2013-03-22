

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMADXFIMPORTER_H
        #define RECMADXFIMPORTER_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDxfImporter.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaDxfImporter {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRFileImporter(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getDL_CreationAdapter(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRImporter(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        importFile
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        processCodeValuePair
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDxfImporter* getSelf(const QString& fName, QScriptContext* context)
    ;static RDxfImporter* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    