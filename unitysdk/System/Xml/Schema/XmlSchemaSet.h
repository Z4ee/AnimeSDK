#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class SortedList; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class ValidationEventArgs; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaCompilationSettings; }
namespace System::Xml::Schema { class XmlSchemaException; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }
namespace System::Xml::Schema { class XmlSchemaSubstitutionGroup; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADDSCHEMATOSET_OFFSET UNITYSDK_OFFSET(0x1ACD3420)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADDTOTABLE_OFFSET UNITYSDK_OFFSET(0x1ACD5250)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_1_OFFSET UNITYSDK_OFFSET(0x1ACCEBC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_2_OFFSET UNITYSDK_OFFSET(0x1ACCEB60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_3_OFFSET UNITYSDK_OFFSET(0x1ACD3B60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_OFFSET UNITYSDK_OFFSET(0x1ACCB780)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_VALIDATIONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1ACCB3A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_CLEARTABLES_OFFSET UNITYSDK_OFFSET(0x1ACD0DD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_COMPILE_OFFSET UNITYSDK_OFFSET(0x1ACD06E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1ACD06A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_COPYFROMCOMPILEDSET_OFFSET UNITYSDK_OFFSET(0x1ACCC320)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_COPYTO_OFFSET UNITYSDK_OFFSET(0x1ACD3280)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_FINDSCHEMABYNSANDURL_OFFSET UNITYSDK_OFFSET(0x1ACCE890)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETRESOLVER_OFFSET UNITYSDK_OFFSET(0x1ACD5740)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETSCHEMABYURI_OFFSET UNITYSDK_OFFSET(0x1ACD5760)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETSCHEMANAMES_OFFSET UNITYSDK_OFFSET(0x1ACD55C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETTARGETNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1ACD0130)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1ACCB550)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1ACCB5E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALELEMENTS_OFFSET UNITYSDK_OFFSET(0x1ACCB580)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALTYPES_OFFSET UNITYSDK_OFFSET(0x1ACCB640)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1ACCAEE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_SUBSTITUTIONGROUPS_OFFSET UNITYSDK_OFFSET(0x1ACCB6B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_TYPEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1ACCB710)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_INTERNALVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1ACD5890)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ISSCHEMALOADED_OFFSET UNITYSDK_OFFSET(0x1ACD4100)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_PARSESCHEMA_OFFSET UNITYSDK_OFFSET(0x1ACD4650)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_PREPROCESSSCHEMA_OFFSET UNITYSDK_OFFSET(0x1ACD3120)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_PROCESSNEWSUBSTITUTIONGROUPS_OFFSET UNITYSDK_OFFSET(0x1ACD4840)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVERECURSIVE_OFFSET UNITYSDK_OFFSET(0x1ACCEE00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVESCHEMAFROMCACHES_OFFSET UNITYSDK_OFFSET(0x1ACD2840)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVESCHEMAFROMGLOBALTABLES_OFFSET UNITYSDK_OFFSET(0x1ACD1A30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVE_OFFSET UNITYSDK_OFFSET(0x1ACD0230)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVE_VALIDATIONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1ACCB480)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REPROCESS_OFFSET UNITYSDK_OFFSET(0x1ACD1010)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_RESOLVESUBSTITUTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1ACD4D30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_SCHEMAS_1_OFFSET UNITYSDK_OFFSET(0x1ACD2F30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x1ACD33F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1ACD0170)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x1ACCB4F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_VERIFYTABLES_OFFSET UNITYSDK_OFFSET(0x1ACD5650)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ACCAFE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACCAF20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSet_TypeDefinitionIndex = 2185;

	class XmlSchemaSet : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectTable* attributes; // 0x10
		::System::Xml::Schema::SchemaInfo* cachedCompiledInfo; // 0x18
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x20
		::System::Collections::SortedList* schemas; // 0x28
		::System::Collections::Hashtable* targetNamespaces; // 0x30
		::System::Object* internalSyncObject; // 0x38
		::System::Xml::Schema::XmlSchemaObjectTable* elements; // 0x40
		::System::Xml::XmlReaderSettings* readerSettings; // 0x48
		::System::Xml::Schema::ValidationEventHandler* eventHandler; // 0x50
		::System::Collections::Hashtable* schemaLocations; // 0x58
		::System::Xml::Schema::XmlSchema* schemaForSchema; // 0x60
		::System::Xml::Schema::XmlSchemaObjectTable* substitutionGroups; // 0x68
		::System::Xml::XmlNameTable* nameTable; // 0x70
		::System::Xml::Schema::ValidationEventHandler* internalEventHandler; // 0x78
		::System::Xml::Schema::XmlSchemaObjectTable* typeExtensions; // 0x80
		::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings; // 0x88
		::System::Xml::Schema::XmlSchemaObjectTable* schemaTypes; // 0x90
		::System::Collections::Hashtable* chameleonSchemas; // 0x98
		::System::Boolean compileAll; // 0xA0
		::System::Boolean isCompiled; // 0xA1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_1_OFFSET))(this, nameTable);
		}

		::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_INTERNALSYNCOBJECT_OFFSET))(this);
		}

		::System::Void add_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_VALIDATIONEVENTHANDLER_OFFSET))(this, value);
		}

		::System::Void remove_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVE_VALIDATIONEVENTHANDLER_OFFSET))(this, value);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_SET_XMLRESOLVER_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_COUNT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalElements()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALELEMENTS_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalAttributes()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalTypes()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALTYPES_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_SubstitutionGroups()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_SUBSTITUTIONGROUPS_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_TypeExtensions()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_TYPEEXTENSIONS_OFFSET))(this);
		}

		::System::Void Add(::System::Xml::Schema::XmlSchemaSet* schemas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_OFFSET))(this, schemas);
		}

		::System::Xml::Schema::XmlSchema* Add_1(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_1_OFFSET))(this, schema);
		}

		::System::Boolean RemoveRecursive(::System::Xml::Schema::XmlSchema* schemaToRemove)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVERECURSIVE_OFFSET))(this, schemaToRemove);
		}

		::System::Boolean Contains(::System::String* targetNamespace)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_CONTAINS_OFFSET))(this, targetNamespace);
		}

		::System::Void Compile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_COMPILE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* Reprocess(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REPROCESS_OFFSET))(this, schema);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Xml::Schema::XmlSchema*>* schemas, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::Schema::XmlSchema*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_COPYTO_OFFSET))(this, schemas, index);
		}

		::System::Collections::ICollection* Schemas()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_SCHEMAS_OFFSET))(this);
		}

		::System::Collections::ICollection* Schemas_1(::System::String* targetNamespace)
		{
			return ((::System::Collections::ICollection*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_SCHEMAS_1_OFFSET))(this, targetNamespace);
		}

		::System::Xml::Schema::XmlSchema* Add_2(::System::String* targetNamespace, ::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_2_OFFSET))(this, targetNamespace, schema);
		}

		::System::Void Add_3(::System::String* targetNamespace, ::System::Xml::XmlReader* reader, ::System::Collections::Hashtable* validatedNamespaces)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlReader*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_3_OFFSET))(this, targetNamespace, reader, validatedNamespaces);
		}

		::System::Xml::Schema::XmlSchema* FindSchemaByNSAndUrl(::System::Uri* schemaUri, ::System::String* ns, ::Il2CppArray<::System::Collections::DictionaryEntry>* locationsTable)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::Uri*, ::System::String*, ::Il2CppArray<::System::Collections::DictionaryEntry>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_FINDSCHEMABYNSANDURL_OFFSET))(this, schemaUri, ns, locationsTable);
		}

		::System::Void AddSchemaToSet(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADDSCHEMATOSET_OFFSET))(this, schema);
		}

		::System::Void ProcessNewSubstitutionGroups(::System::Xml::Schema::XmlSchemaObjectTable* substitutionGroupsTable, ::System::Boolean resolve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_PROCESSNEWSUBSTITUTIONGROUPS_OFFSET))(this, substitutionGroupsTable, resolve);
		}

		::System::Void ResolveSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup, ::System::Xml::Schema::XmlSchemaObjectTable* substTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSubstitutionGroup*, ::System::Xml::Schema::XmlSchemaObjectTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_RESOLVESUBSTITUTIONGROUP_OFFSET))(this, substitutionGroup, substTable);
		}

		::System::Xml::Schema::XmlSchema* Remove(::System::Xml::Schema::XmlSchema* schema, ::System::Boolean forceCompile)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVE_OFFSET))(this, schema, forceCompile);
		}

		::System::Void ClearTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_CLEARTABLES_OFFSET))(this);
		}

		::System::Boolean PreprocessSchema(::System::Xml::Schema::XmlSchema*& schema, ::System::String* targetNamespace)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchema*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_PREPROCESSSCHEMA_OFFSET))(this, schema, targetNamespace);
		}

		::System::Xml::Schema::XmlSchema* ParseSchema(::System::String* targetNamespace, ::System::Xml::XmlReader* reader)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::String*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_PARSESCHEMA_OFFSET))(this, targetNamespace, reader);
		}

		::System::Void CopyFromCompiledSet(::System::Xml::Schema::XmlSchemaSet* otherSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_COPYFROMCOMPILEDSET_OFFSET))(this, otherSet);
		}

		::System::Xml::XmlResolver* GetResolver()
		{
			return ((::System::Xml::XmlResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETRESOLVER_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaNames* GetSchemaNames(::System::Xml::XmlNameTable* nt)
		{
			return ((::System::Xml::Schema::SchemaNames*(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETSCHEMANAMES_OFFSET))(this, nt);
		}

		::System::Boolean IsSchemaLoaded(::System::Uri* schemaUri, ::System::String* targetNamespace, ::System::Xml::Schema::XmlSchema*& schema)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Xml::Schema::XmlSchema*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ISSCHEMALOADED_OFFSET))(this, schemaUri, targetNamespace, schema);
		}

		::System::Boolean GetSchemaByUri(::System::Uri* schemaUri, ::System::Xml::Schema::XmlSchema*& schema)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Xml::Schema::XmlSchema*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETSCHEMABYURI_OFFSET))(this, schemaUri, schema);
		}

		::System::String* GetTargetNamespace(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETTARGETNAMESPACE_OFFSET))(this, schema);
		}

		::System::Void RemoveSchemaFromCaches(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVESCHEMAFROMCACHES_OFFSET))(this, schema);
		}

		::System::Void RemoveSchemaFromGlobalTables(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVESCHEMAFROMGLOBALTABLES_OFFSET))(this, schema);
		}

		::System::Boolean AddToTable(::System::Xml::Schema::XmlSchemaObjectTable* table, ::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADDTOTABLE_OFFSET))(this, table, qname, item);
		}

		::System::Void VerifyTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_VERIFYTABLES_OFFSET))(this);
		}

		::System::Void InternalValidationCallback(::System::Object* sender, ::System::Xml::Schema::ValidationEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::ValidationEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_INTERNALVALIDATIONCALLBACK_OFFSET))(this, sender, e);
		}

		::System::Void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_SENDVALIDATIONEVENT_OFFSET))(this, e, severity);
		}
	};
}
