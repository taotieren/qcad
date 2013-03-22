

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaFileImporterFactoryAdapter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RFileImporter.h"
            
                #include "RDocument.h"
            
                #include "RMessageHandler.h"
            
                #include "RProgressHandler.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaFileImporterFactory.h"
                 void REcmaFileImporterFactoryAdapter::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RFileImporterFactoryAdapter*) 0)));
        protoCreated = true;
    }

    
        // primary base class RFileImporterFactory:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RFileImporterFactory*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RFileImporterFactory
        REcmaHelper::registerFunction(&engine, proto, getRFileImporterFactory, "getRFileImporterFactory");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getFilterStrings, "getFilterStrings");
            
            REcmaHelper::registerFunction(&engine, proto, canImport, "canImport");
            
            REcmaHelper::registerFunction(&engine, proto, instantiate, "instantiate");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RFileImporterFactoryAdapter*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RFileImporterFactoryAdapter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaFileImporterFactoryAdapter::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFileImporterFactoryAdapter(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellFileImporterFactoryAdapter
                    * cppResult =
                    new
                    REcmaShellFileImporterFactoryAdapter
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
        cppResult->__qtscript_self = result;
    
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFileImporterFactoryAdapter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaFileImporterFactoryAdapter::getRFileImporterFactory(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RFileImporterFactory* cppResult =
                    qscriptvalue_cast<RFileImporterFactoryAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaFileImporterFactoryAdapter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RFileImporterFactoryAdapter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaFileImporterFactoryAdapter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RFileImporterFactory");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaFileImporterFactoryAdapter::getFilterStrings
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFileImporterFactoryAdapter::getFilterStrings", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporterFactoryAdapter::getFilterStrings";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFileImporterFactoryAdapter* self = 
                        getSelf("getFilterStrings", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QStringList'
    QStringList cppResult =
        
               self->getFilterStrings();
        // return type: QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporterFactoryAdapter.getFilterStrings().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFileImporterFactoryAdapter::getFilterStrings", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileImporterFactoryAdapter::canImport
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFileImporterFactoryAdapter::canImport", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporterFactoryAdapter::canImport";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFileImporterFactoryAdapter* self = 
                        getSelf("canImport", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->canImport(a0);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->canImport(a0
        ,
    a1);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporterFactoryAdapter.canImport().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFileImporterFactoryAdapter::canImport", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileImporterFactoryAdapter::instantiate
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFileImporterFactoryAdapter::instantiate", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporterFactoryAdapter::instantiate";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFileImporterFactoryAdapter* self = 
                        getSelf("instantiate", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RFileImporterFactoryAdapter: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'RFileImporter *'
    RFileImporter * cppResult =
        
               self->instantiate(a0);
        // return type: RFileImporter *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RMessageHandler * */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RFileImporterFactoryAdapter: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
                    // argument is pointer
                    RMessageHandler * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RMessageHandler >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RFileImporterFactoryAdapter: Argument 1 is not of type RMessageHandler *RMessageHandler *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'RFileImporter *'
    RFileImporter * cppResult =
        
               self->instantiate(a0
        ,
    a1);
        // return type: RFileImporter *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RMessageHandler * */
     && (
            context->argument(2).isVariant() || 
            context->argument(2).isQObject() || 
            context->argument(2).isNull()
        ) /* type: RProgressHandler * */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RFileImporterFactoryAdapter: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
                    // argument is pointer
                    RMessageHandler * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RMessageHandler >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RFileImporterFactoryAdapter: Argument 1 is not of type RMessageHandler *RMessageHandler *.", context);                    
                    }
                
                    // argument is pointer
                    RProgressHandler * a2 = NULL;

                    a2 = 
                        REcmaHelper::scriptValueTo<RProgressHandler >(
                            context->argument(2)
                        );
                    
                    if (a2==NULL && 
                        !context->argument(2).isNull()) {
                        return REcmaHelper::throwError("RFileImporterFactoryAdapter: Argument 2 is not of type RProgressHandler *RProgressHandler *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'RFileImporter *'
    RFileImporter * cppResult =
        
               self->instantiate(a0
        ,
    a1
        ,
    a2);
        // return type: RFileImporter *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporterFactoryAdapter.instantiate().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFileImporterFactoryAdapter::instantiate", context, engine);
            return result;
        }
         QScriptValue REcmaFileImporterFactoryAdapter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RFileImporterFactoryAdapter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RFileImporterFactoryAdapter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaFileImporterFactoryAdapter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RFileImporterFactoryAdapter* self = getSelf("RFileImporterFactoryAdapter", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RFileImporterFactoryAdapter* REcmaFileImporterFactoryAdapter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RFileImporterFactoryAdapter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RFileImporterFactoryAdapter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RFileImporterFactoryAdapter.%1(): "
                        "This object is not a RFileImporterFactoryAdapter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellFileImporterFactoryAdapter* REcmaFileImporterFactoryAdapter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RFileImporterFactoryAdapter* selfBase = getSelf(fName, context);
                REcmaShellFileImporterFactoryAdapter* self = dynamic_cast<REcmaShellFileImporterFactoryAdapter*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellFileImporterFactoryAdapter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RFileImporterFactoryAdapter.%1(): "
                    "This object is not a RFileImporterFactoryAdapter").arg(fName),
                    context);
            }

            return self;
            


        }
        