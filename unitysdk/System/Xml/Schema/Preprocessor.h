#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/BaseProcessor.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class SortedList; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml::Schema { class RedefineEntry; }
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaAnnotation; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaAttributeGroup; }
namespace System::Xml::Schema { class XmlSchemaCompilationSettings; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaExternal; }
namespace System::Xml::Schema { class XmlSchemaGroup; }
namespace System::Xml::Schema { class XmlSchemaIdentityConstraint; }
namespace System::Xml::Schema { class XmlSchemaNotation; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaParticle; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_PREPROCESSOR_BUILDREFNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1B2A5C30)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_BUILDSCHEMALIST_OFFSET UNITYSDK_OFFSET(0x1B2A1DB0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x1B2A9AB0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1B2A9CA0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDGROUP_OFFSET UNITYSDK_OFFSET(0x1B2A9A20)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1B2A9ED0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CLEANUPREDEFINE_OFFSET UNITYSDK_OFFSET(0x1B2A5B10)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B2A58B0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_COPYINCLUDEDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1B2A6590)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_COUNTGROUPSELFREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B2AA010)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B2A03B0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GETBUILDINSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B2A4630)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GETCHAMELEONSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B2A0B60)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GETINCLUDEDSET_OFFSET UNITYSDK_OFFSET(0x1B2A98C0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GETPARENTSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B2A9840)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GETSCHEMAENTITY_OFFSET UNITYSDK_OFFSET(0x1B2A5C00)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_LOADEXTERNALS_OFFSET UNITYSDK_OFFSET(0x1B2A0CA0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PARSEURI_OFFSET UNITYSDK_OFFSET(0x1B2A5E70)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSANNOTATION_1_OFFSET UNITYSDK_OFFSET(0x1B2A97B0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSANNOTATION_OFFSET UNITYSDK_OFFSET(0x1B2A6080)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTECONTENT_OFFSET UNITYSDK_OFFSET(0x1B2AA830)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x1B2A8100)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B2AAEC0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B2A7FC0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1B2A8200)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1B2AB230)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x1B2A9110)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSGROUP_OFFSET UNITYSDK_OFFSET(0x1B2A9390)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSIDENTITYCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1B2AB9C0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSLOCALATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B2AAA50)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSLOCALELEMENT_OFFSET UNITYSDK_OFFSET(0x1B2AB5B0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSNOTATION_OFFSET UNITYSDK_OFFSET(0x1B2A9580)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSPARTICLE_OFFSET UNITYSDK_OFFSET(0x1B2ABD70)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSREDEFINE_OFFSET UNITYSDK_OFFSET(0x1B2A3600)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1B2A8B00)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1B2A2020)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_RESOLVESCHEMALOCATIONURI_OFFSET UNITYSDK_OFFSET(0x1B2A5BB0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1B2A6060)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_SETSCHEMADEFAULTS_OFFSET UNITYSDK_OFFSET(0x1B2A6480)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATEIDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B2A6170)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATENAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B2AA400)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATEQNAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B2AAC50)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A0200)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Preprocessor_TypeDefinitionIndex = 2076;

	class Preprocessor : public ::System::Xml::Schema::BaseProcessor
	{
	public:
		static ::System::Xml::Schema::XmlSchema** StaticGet_builtInSchemaForXmlNS()
		{
			return (::System::Xml::Schema::XmlSchema**)Il2CppClass::FromTypeDefinitionIndex(Preprocessor_TypeDefinitionIndex)->GetStaticField(0x2220);
		}
		::System::Collections::Hashtable* referenceNamespaces; // 0x40
		::System::Xml::Schema::XmlSchema* currentSchema; // 0x48
		::System::Collections::Hashtable* chameleonSchemas; // 0x50
		::System::Xml::Schema::XmlSchema* rootSchemaForRedefine; // 0x58
		::System::Xml::Schema::XmlSchema* rootSchema; // 0x60
		::System::Collections::Hashtable* processedExternals; // 0x68
		::System::Collections::ArrayList* redefinedList; // 0x70
		::System::Xml::XmlResolver* xmlResolver; // 0x78
		::System::String* NsXsi; // 0x80
		::System::String* targetNamespace; // 0x88
		::System::String* Xmlns; // 0x90
		::System::Xml::XmlReaderSettings* readerSettings; // 0x98
		::System::Collections::Hashtable* schemaLocations; // 0xA0
		::System::Collections::SortedList* lockList; // 0xA8
		::System::Xml::Schema::XmlSchemaDerivationMethod blockDefault; // 0xB0
		::System::Xml::Schema::XmlSchemaForm elementFormDefault; // 0xB4
		::System::Xml::Schema::XmlSchemaForm attributeFormDefault; // 0xB8
		::System::Xml::Schema::XmlSchemaDerivationMethod finalDefault; // 0xBC

		::System::Void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchemaCompilationSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR__CTOR_OFFSET))(this, nameTable, schemaNames, eventHandler, compilationSettings);
		}

		::System::Boolean Execute(::System::Xml::Schema::XmlSchema* schema, ::System::String* targetNamespace, ::System::Boolean loadExternals)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_EXECUTE_OFFSET))(this, schema, targetNamespace, loadExternals);
		}

		::System::Void Cleanup(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CLEANUP_OFFSET))(this, schema);
		}

		::System::Void CleanupRedefine(::System::Xml::Schema::XmlSchemaExternal* include)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaExternal*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CLEANUPREDEFINE_OFFSET))(this, include);
		}

		::System::Void BuildSchemaList(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_BUILDSCHEMALIST_OFFSET))(this, schema);
		}

		::System::Void LoadExternals(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_LOADEXTERNALS_OFFSET))(this, schema);
		}

		static ::System::Xml::Schema::XmlSchema* GetBuildInSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GETBUILDINSCHEMA_OFFSET))();
		}

		::System::Void BuildRefNamespaces(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_BUILDREFNAMESPACES_OFFSET))(this, schema);
		}

		::System::Void ParseUri(::System::String* uri, ::System::String* code, ::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PARSEURI_OFFSET))(this, uri, code, sourceSchemaObject);
		}

		::System::Void Preprocess(::System::Xml::Schema::XmlSchema* schema, ::System::String* targetNamespace, ::System::Collections::ArrayList* imports)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::String*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESS_OFFSET))(this, schema, targetNamespace, imports);
		}

		::System::Void CopyIncludedComponents(::System::Xml::Schema::XmlSchema* includedSchema, ::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_COPYINCLUDEDCOMPONENTS_OFFSET))(this, includedSchema, schema);
		}

		::System::Void PreprocessRedefine(::System::Xml::Schema::RedefineEntry* redefineEntry)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::RedefineEntry*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSREDEFINE_OFFSET))(this, redefineEntry);
		}

		::System::Void GetIncludedSet(::System::Xml::Schema::XmlSchema* schema, ::System::Collections::ArrayList* includesList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GETINCLUDEDSET_OFFSET))(this, schema, includesList);
		}

		static ::System::Xml::Schema::XmlSchema* GetParentSchema(::System::Xml::Schema::XmlSchemaObject* currentSchemaObject)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GETPARENTSCHEMA_OFFSET))(currentSchemaObject);
		}

		::System::Void SetSchemaDefaults(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_SETSCHEMADEFAULTS_OFFSET))(this, schema);
		}

		::System::Int32 CountGroupSelfReference(::System::Xml::Schema::XmlSchemaObjectCollection* items, ::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaGroup* redefined)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_COUNTGROUPSELFREFERENCE_OFFSET))(this, items, name, redefined);
		}

		::System::Void CheckRefinedGroup(::System::Xml::Schema::XmlSchemaGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDGROUP_OFFSET))(this, group);
		}

		::System::Void CheckRefinedAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttributeGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDATTRIBUTEGROUP_OFFSET))(this, attributeGroup);
		}

		::System::Void CheckRefinedSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* stype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDSIMPLETYPE_OFFSET))(this, stype);
		}

		::System::Void CheckRefinedComplexType(::System::Xml::Schema::XmlSchemaComplexType* ctype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDCOMPLEXTYPE_OFFSET))(this, ctype);
		}

		::System::Void PreprocessAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTE_OFFSET))(this, attribute);
		}

		::System::Void PreprocessLocalAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSLOCALATTRIBUTE_OFFSET))(this, attribute);
		}

		::System::Void PreprocessAttributeContent(::System::Xml::Schema::XmlSchemaAttribute* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTECONTENT_OFFSET))(this, attribute);
		}

		::System::Void PreprocessAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttributeGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTEGROUP_OFFSET))(this, attributeGroup);
		}

		::System::Void PreprocessElement(::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSELEMENT_OFFSET))(this, element);
		}

		::System::Void PreprocessLocalElement(::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSLOCALELEMENT_OFFSET))(this, element);
		}

		::System::Void PreprocessElementContent(::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSELEMENTCONTENT_OFFSET))(this, element);
		}

		::System::Void PreprocessIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaIdentityConstraint*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSIDENTITYCONSTRAINT_OFFSET))(this, constraint);
		}

		::System::Void PreprocessSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType, ::System::Boolean local)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSSIMPLETYPE_OFFSET))(this, simpleType, local);
		}

		::System::Void PreprocessComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Boolean local)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSCOMPLEXTYPE_OFFSET))(this, complexType, local);
		}

		::System::Void PreprocessGroup(::System::Xml::Schema::XmlSchemaGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSGROUP_OFFSET))(this, group);
		}

		::System::Void PreprocessNotation(::System::Xml::Schema::XmlSchemaNotation* notation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaNotation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSNOTATION_OFFSET))(this, notation);
		}

		::System::Void PreprocessParticle(::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSPARTICLE_OFFSET))(this, particle);
		}

		::System::Void PreprocessAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, ::System::Xml::Schema::XmlSchemaObject* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTES_OFFSET))(this, attributes, anyAttribute, parent);
		}

		::System::Void ValidateIdAttribute(::System::Xml::Schema::XmlSchemaObject* xso)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATEIDATTRIBUTE_OFFSET))(this, xso);
		}

		::System::Void ValidateNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATENAMEATTRIBUTE_OFFSET))(this, xso);
		}

		::System::Void ValidateQNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso, ::System::String* attributeName, ::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*, ::System::String*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATEQNAMEATTRIBUTE_OFFSET))(this, xso, attributeName, value);
		}

		::System::Uri* ResolveSchemaLocationUri(::System::Xml::Schema::XmlSchema* enclosingSchema, ::System::String* location)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_RESOLVESCHEMALOCATIONURI_OFFSET))(this, enclosingSchema, location);
		}

		::System::Object* GetSchemaEntity(::System::Uri* ruri)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GETSCHEMAENTITY_OFFSET))(this, ruri);
		}

		::System::Xml::Schema::XmlSchema* GetChameleonSchema(::System::String* targetNamespace, ::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GETCHAMELEONSCHEMA_OFFSET))(this, targetNamespace, schema);
		}

		::System::Void SetParent(::System::Xml::Schema::XmlSchemaObject* child, ::System::Xml::Schema::XmlSchemaObject* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_SETPARENT_OFFSET))(this, child, parent);
		}

		::System::Void PreprocessAnnotation(::System::Xml::Schema::XmlSchemaObject* schemaObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSANNOTATION_OFFSET))(this, schemaObject);
		}

		::System::Void PreprocessAnnotation_1(::System::Xml::Schema::XmlSchemaAnnotation* annotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSANNOTATION_1_OFFSET))(this, annotation);
		}
	};
}
