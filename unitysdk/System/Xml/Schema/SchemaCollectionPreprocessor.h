#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/BaseProcessor.h"
#include "unitysdk/System/Xml/Schema/SchemaCollectionPreprocessor_Compositor.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class Hashtable; }
namespace System::IO { class Stream; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaAttributeGroup; }
namespace System::Xml::Schema { class XmlSchemaCollection; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaGroup; }
namespace System::Xml::Schema { class XmlSchemaIdentityConstraint; }
namespace System::Xml::Schema { class XmlSchemaNotation; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaParticle; }
namespace System::Xml::Schema { class XmlSchemaRedefine; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_BUILDREFNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1D096880)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x1D099A00)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1D099BF0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDGROUP_OFFSET UNITYSDK_OFFSET(0x1D099980)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1D099E20)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D0920C0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_COUNTGROUPSELFREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D099F60)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D091E20)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_GETSCHEMAENTITY_OFFSET UNITYSDK_OFFSET(0x1D0967A0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_LOADEXTERNALS_OFFSET UNITYSDK_OFFSET(0x1D092480)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSANNOTATION_OFFSET UNITYSDK_OFFSET(0x1D096B00)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTECONTENT_OFFSET UNITYSDK_OFFSET(0x1D09A770)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x1D098330)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D09AD10)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D0981F0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1D098420)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1D09B000)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x1D099310)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSGROUP_OFFSET UNITYSDK_OFFSET(0x1D099590)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSIDENTITYCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1D09BA30)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSLOCALATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D09A9C0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSLOCALELEMENT_OFFSET UNITYSDK_OFFSET(0x1D09B620)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSNOTATION_OFFSET UNITYSDK_OFFSET(0x1D099770)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSPARTICLE_OFFSET UNITYSDK_OFFSET(0x1D09BDE0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSREDEFINE_OFFSET UNITYSDK_OFFSET(0x1D096C10)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1D098CE0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1D093470)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_RESOLVESCHEMALOCATIONURI_OFFSET UNITYSDK_OFFSET(0x1D096720)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1D096AE0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATEIDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D093220)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATENAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D09A340)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATEQNAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D09ABB0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D091D80)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaCollectionPreprocessor_TypeDefinitionIndex = 2080;

	class SchemaCollectionPreprocessor : public ::System::Xml::Schema::BaseProcessor
	{
	public:
		::System::Collections::Hashtable* schemaLocations; // 0x40
		::System::String* Xmlns; // 0x48
		::System::Collections::Hashtable* referenceNamespaces; // 0x50
		::System::String* targetNamespace; // 0x58
		::System::Xml::XmlResolver* xmlResolver; // 0x60
		::System::Xml::Schema::XmlSchema* schema; // 0x68
		::System::Xml::Schema::XmlSchemaForm elementFormDefault; // 0x70
		::System::Xml::Schema::XmlSchemaDerivationMethod blockDefault; // 0x74
		::System::Xml::Schema::XmlSchemaDerivationMethod finalDefault; // 0x78
		::System::Boolean buildinIncluded; // 0x7C
		::System::Xml::Schema::XmlSchemaForm attributeFormDefault; // 0x80

		::System::Void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR__CTOR_OFFSET))(this, nameTable, schemaNames, eventHandler);
		}

		::System::Boolean Execute(::System::Xml::Schema::XmlSchema* schema, ::System::String* targetNamespace, ::System::Boolean loadExternals, ::System::Xml::Schema::XmlSchemaCollection* xsc)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::String*, ::System::Boolean, ::System::Xml::Schema::XmlSchemaCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_EXECUTE_OFFSET))(this, schema, targetNamespace, loadExternals, xsc);
		}

		::System::Void Cleanup(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CLEANUP_OFFSET))(this, schema);
		}

		::System::Void LoadExternals(::System::Xml::Schema::XmlSchema* schema, ::System::Xml::Schema::XmlSchemaCollection* xsc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_LOADEXTERNALS_OFFSET))(this, schema, xsc);
		}

		::System::Void BuildRefNamespaces(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_BUILDREFNAMESPACES_OFFSET))(this, schema);
		}

		::System::Void Preprocess(::System::Xml::Schema::XmlSchema* schema, ::System::String* targetNamespace, ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor compositor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::String*, ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESS_OFFSET))(this, schema, targetNamespace, compositor);
		}

		::System::Void PreprocessRedefine(::System::Xml::Schema::XmlSchemaRedefine* redefine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaRedefine*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSREDEFINE_OFFSET))(this, redefine);
		}

		::System::Int32 CountGroupSelfReference(::System::Xml::Schema::XmlSchemaObjectCollection* items, ::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_COUNTGROUPSELFREFERENCE_OFFSET))(this, items, name);
		}

		::System::Void CheckRefinedGroup(::System::Xml::Schema::XmlSchemaGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDGROUP_OFFSET))(this, group);
		}

		::System::Void CheckRefinedAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttributeGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDATTRIBUTEGROUP_OFFSET))(this, attributeGroup);
		}

		::System::Void CheckRefinedSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* stype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDSIMPLETYPE_OFFSET))(this, stype);
		}

		::System::Void CheckRefinedComplexType(::System::Xml::Schema::XmlSchemaComplexType* ctype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDCOMPLEXTYPE_OFFSET))(this, ctype);
		}

		::System::Void PreprocessAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTE_OFFSET))(this, attribute);
		}

		::System::Void PreprocessLocalAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSLOCALATTRIBUTE_OFFSET))(this, attribute);
		}

		::System::Void PreprocessAttributeContent(::System::Xml::Schema::XmlSchemaAttribute* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTECONTENT_OFFSET))(this, attribute);
		}

		::System::Void PreprocessAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttributeGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTEGROUP_OFFSET))(this, attributeGroup);
		}

		::System::Void PreprocessElement(::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSELEMENT_OFFSET))(this, element);
		}

		::System::Void PreprocessLocalElement(::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSLOCALELEMENT_OFFSET))(this, element);
		}

		::System::Void PreprocessElementContent(::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSELEMENTCONTENT_OFFSET))(this, element);
		}

		::System::Void PreprocessIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaIdentityConstraint*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSIDENTITYCONSTRAINT_OFFSET))(this, constraint);
		}

		::System::Void PreprocessSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType, ::System::Boolean local)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSSIMPLETYPE_OFFSET))(this, simpleType, local);
		}

		::System::Void PreprocessComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Boolean local)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSCOMPLEXTYPE_OFFSET))(this, complexType, local);
		}

		::System::Void PreprocessGroup(::System::Xml::Schema::XmlSchemaGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSGROUP_OFFSET))(this, group);
		}

		::System::Void PreprocessNotation(::System::Xml::Schema::XmlSchemaNotation* notation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaNotation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSNOTATION_OFFSET))(this, notation);
		}

		::System::Void PreprocessParticle(::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSPARTICLE_OFFSET))(this, particle);
		}

		::System::Void PreprocessAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, ::System::Xml::Schema::XmlSchemaObject* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTES_OFFSET))(this, attributes, anyAttribute, parent);
		}

		::System::Void ValidateIdAttribute(::System::Xml::Schema::XmlSchemaObject* xso)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATEIDATTRIBUTE_OFFSET))(this, xso);
		}

		::System::Void ValidateNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATENAMEATTRIBUTE_OFFSET))(this, xso);
		}

		::System::Void ValidateQNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso, ::System::String* attributeName, ::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*, ::System::String*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATEQNAMEATTRIBUTE_OFFSET))(this, xso, attributeName, value);
		}

		::System::Void SetParent(::System::Xml::Schema::XmlSchemaObject* child, ::System::Xml::Schema::XmlSchemaObject* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_SETPARENT_OFFSET))(this, child, parent);
		}

		::System::Void PreprocessAnnotation(::System::Xml::Schema::XmlSchemaObject* schemaObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSANNOTATION_OFFSET))(this, schemaObject);
		}

		::System::Uri* ResolveSchemaLocationUri(::System::Xml::Schema::XmlSchema* enclosingSchema, ::System::String* location)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_RESOLVESCHEMALOCATIONURI_OFFSET))(this, enclosingSchema, location);
		}

		::System::IO::Stream* GetSchemaEntity(::System::Uri* ruri)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_GETSCHEMAENTITY_OFFSET))(this, ruri);
		}
	};
}
