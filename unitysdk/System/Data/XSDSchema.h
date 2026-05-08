#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AcceptRejectRule.h"
#include "unitysdk/System/Data/Rule.h"
#include "unitysdk/System/Data/XMLSchema.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Data { class XSDSchema_NameType; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml { class XmlAttributeCollection; }
namespace System::Xml { class XmlElement; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaAnnotated; }
namespace System::Xml::Schema { class XmlSchemaAnnotation; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaAttributeGroup; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaIdentityConstraint; }
namespace System::Xml::Schema { class XmlSchemaKeyref; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaParticle; }
namespace System::Xml::Schema { class XmlSchemaSet; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_DATA_XSDSCHEMA_ADDTABLESTOLIST_OFFSET UNITYSDK_OFFSET(0x195D2D90)
#define SYSTEM_DATA_XSDSCHEMA_BUILDKEY_OFFSET UNITYSDK_OFFSET(0x195CE5B0)
#define SYSTEM_DATA_XSDSCHEMA_COLLECTELEMENTSANNOTATIONS_1_OFFSET UNITYSDK_OFFSET(0x195C30D0)
#define SYSTEM_DATA_XSDSCHEMA_COLLECTELEMENTSANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x195C3010)
#define SYSTEM_DATA_XSDSCHEMA_DATASETELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x195C6B40)
#define SYSTEM_DATA_XSDSCHEMA_FINDDATASETELEMENT_OFFSET UNITYSDK_OFFSET(0x195C6E30)
#define SYSTEM_DATA_XSDSCHEMA_FINDFIELD_OFFSET UNITYSDK_OFFSET(0x195CE3D0)
#define SYSTEM_DATA_XSDSCHEMA_FINDNAMETYPE_OFFSET UNITYSDK_OFFSET(0x195D2A40)
#define SYSTEM_DATA_XSDSCHEMA_FINDTYPENODE_OFFSET UNITYSDK_OFFSET(0x195C7460)
#define SYSTEM_DATA_XSDSCHEMA_GETBOOLEANATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x195C6CE0)
#define SYSTEM_DATA_XSDSCHEMA_GETINSTANCENAME_OFFSET UNITYSDK_OFFSET(0x195C5260)
#define SYSTEM_DATA_XSDSCHEMA_GETMSDATAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x195C3E30)
#define SYSTEM_DATA_XSDSCHEMA_GETNAMESPACEFROMPREFIX_OFFSET UNITYSDK_OFFSET(0x195D2ED0)
#define SYSTEM_DATA_XSDSCHEMA_GETPARTICLEITEMS_OFFSET UNITYSDK_OFFSET(0x195C6540)
#define SYSTEM_DATA_XSDSCHEMA_GETPARTICLE_OFFSET UNITYSDK_OFFSET(0x195C72B0)
#define SYSTEM_DATA_XSDSCHEMA_GETPREFIX_OFFSET UNITYSDK_OFFSET(0x195D0540)
#define SYSTEM_DATA_XSDSCHEMA_GETSTRINGATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x195C73E0)
#define SYSTEM_DATA_XSDSCHEMA_GETTABLENAMESPACE_OFFSET UNITYSDK_OFFSET(0x195D2870)
#define SYSTEM_DATA_XSDSCHEMA_GETTABLENAME_OFFSET UNITYSDK_OFFSET(0x195CF6A0)
#define SYSTEM_DATA_XSDSCHEMA_HANDLEATTRIBUTECOLUMN_OFFSET UNITYSDK_OFFSET(0x195CB260)
#define SYSTEM_DATA_XSDSCHEMA_HANDLEATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x195CC050)
#define SYSTEM_DATA_XSDSCHEMA_HANDLEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x195CB020)
#define SYSTEM_DATA_XSDSCHEMA_HANDLECOLUMNEXPRESSION_OFFSET UNITYSDK_OFFSET(0x195C4BC0)
#define SYSTEM_DATA_XSDSCHEMA_HANDLECOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x195CC3E0)
#define SYSTEM_DATA_XSDSCHEMA_HANDLECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x195CF810)
#define SYSTEM_DATA_XSDSCHEMA_HANDLEDATASET_OFFSET UNITYSDK_OFFSET(0x195C7A10)
#define SYSTEM_DATA_XSDSCHEMA_HANDLEELEMENTCOLUMN_OFFSET UNITYSDK_OFFSET(0x195C9DD0)
#define SYSTEM_DATA_XSDSCHEMA_HANDLEKEYREF_OFFSET UNITYSDK_OFFSET(0x195CE9C0)
#define SYSTEM_DATA_XSDSCHEMA_HANDLEPARTICLE_OFFSET UNITYSDK_OFFSET(0x195C92E0)
#define SYSTEM_DATA_XSDSCHEMA_HANDLEREFTABLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x195C5160)
#define SYSTEM_DATA_XSDSCHEMA_HANDLERELATIONS_OFFSET UNITYSDK_OFFSET(0x195C8FB0)
#define SYSTEM_DATA_XSDSCHEMA_HANDLERELATION_OFFSET UNITYSDK_OFFSET(0x195C5330)
#define SYSTEM_DATA_XSDSCHEMA_HANDLESIMPLECONTENTCOLUMN_OFFSET UNITYSDK_OFFSET(0x195CCA50)
#define SYSTEM_DATA_XSDSCHEMA_HANDLESIMPLETYPESIMPLECONTENTCOLUMN_OFFSET UNITYSDK_OFFSET(0x195CD4E0)
#define SYSTEM_DATA_XSDSCHEMA_HANDLETABLE_OFFSET UNITYSDK_OFFSET(0x195C77F0)
#define SYSTEM_DATA_XSDSCHEMA_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x195C5D30)
#define SYSTEM_DATA_XSDSCHEMA_INSTANTIATESIMPLETABLE_OFFSET UNITYSDK_OFFSET(0x195CFD40)
#define SYSTEM_DATA_XSDSCHEMA_INSTANTIATETABLE_OFFSET UNITYSDK_OFFSET(0x195D0A80)
#define SYSTEM_DATA_XSDSCHEMA_ISDATASETPARTICLE_OFFSET UNITYSDK_OFFSET(0x195C5F80)
#define SYSTEM_DATA_XSDSCHEMA_ISTABLE_OFFSET UNITYSDK_OFFSET(0x195C67E0)
#define SYSTEM_DATA_XSDSCHEMA_ISXSDTYPE_OFFSET UNITYSDK_OFFSET(0x195D2D20)
#define SYSTEM_DATA_XSDSCHEMA_LOADSCHEMA_1_OFFSET UNITYSDK_OFFSET(0x195B7E30)
#define SYSTEM_DATA_XSDSCHEMA_LOADSCHEMA_OFFSET UNITYSDK_OFFSET(0x195C73B0)
#define SYSTEM_DATA_XSDSCHEMA_PARSEDATATYPE_OFFSET UNITYSDK_OFFSET(0x195D2B30)
#define SYSTEM_DATA_XSDSCHEMA_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x195C4050)
#define SYSTEM_DATA_XSDSCHEMA_SETEXTPROPERTIES_1_OFFSET UNITYSDK_OFFSET(0x195C4E00)
#define SYSTEM_DATA_XSDSCHEMA_SETEXTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x195C4720)
#define SYSTEM_DATA_XSDSCHEMA_SETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x195C40C0)
#define SYSTEM_DATA_XSDSCHEMA_TRANSLATEACCEPTREJECTRULE_OFFSET UNITYSDK_OFFSET(0x195CE810)
#define SYSTEM_DATA_XSDSCHEMA_TRANSLATERULE_OFFSET UNITYSDK_OFFSET(0x195CE8B0)
#define SYSTEM_DATA_XSDSCHEMA_XSDTOCLR_OFFSET UNITYSDK_OFFSET(0x1959F2A0)
#define SYSTEM_DATA_XSDSCHEMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x195D3420)
#define SYSTEM_DATA_XSDSCHEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x195B7E20)

namespace System::Data
{
	inline static constexpr unsigned int XSDSchema_TypeDefinitionIndex = 37075;

	class XSDSchema : public ::System::Data::XMLSchema
	{
	public:
		static ::Il2CppArray<::System::Data::XSDSchema_NameType*>** StaticGet_s_mapNameTypeXsd()
		{
			return (::Il2CppArray<::System::Data::XSDSchema_NameType*>**)Il2CppClass::FromTypeDefinitionIndex(XSDSchema_TypeDefinitionIndex)->GetStaticField(0x275E0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*>* _tableDictionary; // 0x10
		::System::Xml::Schema::XmlSchemaSet* _schemaSet; // 0x18
		::System::Collections::Hashtable* _expressions; // 0x20
		::System::Xml::Schema::XmlSchemaElement* _dsElement; // 0x28
		::System::Collections::Hashtable* _schemaTypes; // 0x30
		::System::Collections::Hashtable* _udSimpleTypes; // 0x38
		::System::Collections::Hashtable* _elementsTable; // 0x40
		::System::Collections::Hashtable* _constraintNodes; // 0x48
		::System::Xml::Schema::XmlSchemaObjectCollection* _annotations; // 0x50
		::System::Xml::Schema::XmlSchemaObjectCollection* _elements; // 0x58
		::System::Collections::Hashtable* _existingSimpleTypeMap; // 0x60
		::System::Collections::Hashtable* _attributes; // 0x68
		::System::Collections::Hashtable* _attributeGroups; // 0x70
		::System::String* _schemaName; // 0x78
		::System::Collections::ArrayList* _refTables; // 0x80
		::System::Data::DataSet* _ds; // 0x88
		::System::Collections::ArrayList* _complexTypes; // 0x90
		::System::Collections::ArrayList* _columnExpressions; // 0x98
		::System::Boolean _fromInference; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA__CCTOR_OFFSET))();
		}

		::System::Void CollectElementsAnnotations(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_COLLECTELEMENTSANNOTATIONS_OFFSET))(this, schema);
		}

		::System::Void CollectElementsAnnotations_1(::System::Xml::Schema::XmlSchema* schema, ::System::Collections::ArrayList* schemaList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_COLLECTELEMENTSANNOTATIONS_1_OFFSET))(this, schema, schemaList);
		}

		static ::System::String* QualifiedName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_QUALIFIEDNAME_OFFSET))(name);
		}

		static ::System::Void SetProperties(::System::Object* instance, ::Il2CppArray<::System::Xml::XmlAttribute*>* attrs)
		{
			return ((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Xml::XmlAttribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_SETPROPERTIES_OFFSET))(instance, attrs);
		}

		static ::System::Void SetExtProperties(::System::Object* instance, ::Il2CppArray<::System::Xml::XmlAttribute*>* attrs)
		{
			return ((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Xml::XmlAttribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_SETEXTPROPERTIES_OFFSET))(instance, attrs);
		}

		::System::Void HandleColumnExpression(::System::Object* instance, ::Il2CppArray<::System::Xml::XmlAttribute*>* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Xml::XmlAttribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLECOLUMNEXPRESSION_OFFSET))(this, instance, attrs);
		}

		static ::System::String* GetMsdataAttribute(::System::Xml::Schema::XmlSchemaAnnotated* node, ::System::String* ln)
		{
			return ((::System::String*(*)(::System::Xml::Schema::XmlSchemaAnnotated*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_GETMSDATAATTRIBUTE_OFFSET))(node, ln);
		}

		static ::System::Void SetExtProperties_1(::System::Object* instance, ::System::Xml::XmlAttributeCollection* attrs)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Xml::XmlAttributeCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_SETEXTPROPERTIES_1_OFFSET))(instance, attrs);
		}

		::System::Void HandleRefTableProperties(::System::Collections::ArrayList* RefTables, ::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLEREFTABLEPROPERTIES_OFFSET))(this, RefTables, element);
		}

		::System::Void HandleRelation(::System::Xml::XmlElement* node, ::System::Boolean fNested)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLERELATION_OFFSET))(this, node, fNested);
		}

		::System::Boolean HasAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HASATTRIBUTES_OFFSET))(this, attributes);
		}

		::System::Boolean IsDatasetParticle(::System::Xml::Schema::XmlSchemaParticle* pt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_ISDATASETPARTICLE_OFFSET))(this, pt);
		}

		::System::Int32 DatasetElementCount(::System::Xml::Schema::XmlSchemaObjectCollection* elements)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_DATASETELEMENTCOUNT_OFFSET))(this, elements);
		}

		::System::Xml::Schema::XmlSchemaElement* FindDatasetElement(::System::Xml::Schema::XmlSchemaObjectCollection* elements)
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_FINDDATASETELEMENT_OFFSET))(this, elements);
		}

		::System::Void LoadSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Data::DataTable* dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSet*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_LOADSCHEMA_OFFSET))(this, schemaSet, dt);
		}

		::System::Void LoadSchema_1(::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Data::DataSet* ds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSet*, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_LOADSCHEMA_1_OFFSET))(this, schemaSet, ds);
		}

		::System::Void HandleRelations(::System::Xml::Schema::XmlSchemaAnnotation* ann, ::System::Boolean fNested)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotation*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLERELATIONS_OFFSET))(this, ann, fNested);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* GetParticleItems(::System::Xml::Schema::XmlSchemaParticle* pt)
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_GETPARTICLEITEMS_OFFSET))(this, pt);
		}

		::System::Void HandleParticle(::System::Xml::Schema::XmlSchemaParticle* pt, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren, ::System::Boolean isBase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Data::DataTable*, ::System::Collections::ArrayList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLEPARTICLE_OFFSET))(this, pt, table, tableChildren, isBase);
		}

		::System::Void HandleAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Data::DataTable* table, ::System::Boolean isBase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLEATTRIBUTES_OFFSET))(this, attributes, table, isBase);
		}

		::System::Void HandleAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup, ::System::Data::DataTable* table, ::System::Boolean isBase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttributeGroup*, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLEATTRIBUTEGROUP_OFFSET))(this, attributeGroup, table, isBase);
		}

		::System::Void HandleComplexType(::System::Xml::Schema::XmlSchemaComplexType* ct, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren, ::System::Boolean isNillable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Data::DataTable*, ::System::Collections::ArrayList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLECOMPLEXTYPE_OFFSET))(this, ct, table, tableChildren, isNillable);
		}

		::System::Xml::Schema::XmlSchemaParticle* GetParticle(::System::Xml::Schema::XmlSchemaComplexType* ct)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_GETPARTICLE_OFFSET))(this, ct);
		}

		::System::Data::DataColumn* FindField(::System::Data::DataTable* table, ::System::String* field)
		{
			return ((::System::Data::DataColumn*(*)(::PVOID, ::System::Data::DataTable*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_FINDFIELD_OFFSET))(this, table, field);
		}

		::Il2CppArray<::System::Data::DataColumn*>* BuildKey(::System::Xml::Schema::XmlSchemaIdentityConstraint* keyNode, ::System::Data::DataTable* table)
		{
			return ((::Il2CppArray<::System::Data::DataColumn*>*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaIdentityConstraint*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_BUILDKEY_OFFSET))(this, keyNode, table);
		}

		::System::Boolean GetBooleanAttribute(::System::Xml::Schema::XmlSchemaAnnotated* element, ::System::String* attrName, ::System::Boolean defVal)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotated*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_GETBOOLEANATTRIBUTE_OFFSET))(this, element, attrName, defVal);
		}

		::System::String* GetStringAttribute(::System::Xml::Schema::XmlSchemaAnnotated* element, ::System::String* attrName, ::System::String* defVal)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotated*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_GETSTRINGATTRIBUTE_OFFSET))(this, element, attrName, defVal);
		}

		static ::System::Data::AcceptRejectRule TranslateAcceptRejectRule(::System::String* strRule)
		{
			return ((::System::Data::AcceptRejectRule(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_TRANSLATEACCEPTREJECTRULE_OFFSET))(strRule);
		}

		static ::System::Data::Rule TranslateRule(::System::String* strRule)
		{
			return ((::System::Data::Rule(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_TRANSLATERULE_OFFSET))(strRule);
		}

		::System::Void HandleKeyref(::System::Xml::Schema::XmlSchemaKeyref* keyref)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaKeyref*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLEKEYREF_OFFSET))(this, keyref);
		}

		::System::Void HandleConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* keyNode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaIdentityConstraint*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLECONSTRAINT_OFFSET))(this, keyNode);
		}

		::System::Data::DataTable* InstantiateSimpleTable(::System::Xml::Schema::XmlSchemaElement* node)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_INSTANTIATESIMPLETABLE_OFFSET))(this, node);
		}

		::System::String* GetInstanceName(::System::Xml::Schema::XmlSchemaAnnotated* node)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotated*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_GETINSTANCENAME_OFFSET))(this, node);
		}

		::System::Data::DataTable* InstantiateTable(::System::Xml::Schema::XmlSchemaElement* node, ::System::Xml::Schema::XmlSchemaComplexType* typeNode, ::System::Boolean isRef)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_INSTANTIATETABLE_OFFSET))(this, node, typeNode, isRef);
		}

		static ::System::Type* XsdtoClr(::System::String* xsdTypeName)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_XSDTOCLR_OFFSET))(xsdTypeName);
		}

		static ::System::Data::XSDSchema_NameType* FindNameType(::System::String* name)
		{
			return ((::System::Data::XSDSchema_NameType*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_FINDNAMETYPE_OFFSET))(name);
		}

		::System::Type* ParseDataType(::System::String* dt)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_PARSEDATATYPE_OFFSET))(this, dt);
		}

		static ::System::Boolean IsXsdType(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_ISXSDTYPE_OFFSET))(name);
		}

		::System::Xml::Schema::XmlSchemaAnnotated* FindTypeNode(::System::Xml::Schema::XmlSchemaAnnotated* node)
		{
			return ((::System::Xml::Schema::XmlSchemaAnnotated*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotated*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_FINDTYPENODE_OFFSET))(this, node);
		}

		::System::Void HandleSimpleTypeSimpleContentColumn(::System::Xml::Schema::XmlSchemaSimpleType* typeNode, ::System::String* strType, ::System::Data::DataTable* table, ::System::Boolean isBase, ::Il2CppArray<::System::Xml::XmlAttribute*>* attrs, ::System::Boolean isNillable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*, ::System::String*, ::System::Data::DataTable*, ::System::Boolean, ::Il2CppArray<::System::Xml::XmlAttribute*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLESIMPLETYPESIMPLECONTENTCOLUMN_OFFSET))(this, typeNode, strType, table, isBase, attrs, isNillable);
		}

		::System::Void HandleSimpleContentColumn(::System::String* strType, ::System::Data::DataTable* table, ::System::Boolean isBase, ::Il2CppArray<::System::Xml::XmlAttribute*>* attrs, ::System::Boolean isNillable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::DataTable*, ::System::Boolean, ::Il2CppArray<::System::Xml::XmlAttribute*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLESIMPLECONTENTCOLUMN_OFFSET))(this, strType, table, isBase, attrs, isNillable);
		}

		::System::Void HandleAttributeColumn(::System::Xml::Schema::XmlSchemaAttribute* attrib, ::System::Data::DataTable* table, ::System::Boolean isBase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLEATTRIBUTECOLUMN_OFFSET))(this, attrib, table, isBase);
		}

		::System::Void HandleElementColumn(::System::Xml::Schema::XmlSchemaElement* elem, ::System::Data::DataTable* table, ::System::Boolean isBase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLEELEMENTCOLUMN_OFFSET))(this, elem, table, isBase);
		}

		::System::Void HandleDataSet(::System::Xml::Schema::XmlSchemaElement* node, ::System::Boolean isNewDataSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLEDATASET_OFFSET))(this, node, isNewDataSet);
		}

		::System::Void AddTablesToList(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList, ::System::Data::DataTable* dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_ADDTABLESTOLIST_OFFSET))(this, tableList, dt);
		}

		::System::String* GetPrefix(::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_GETPREFIX_OFFSET))(this, ns);
		}

		::System::String* GetNamespaceFromPrefix(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_GETNAMESPACEFROMPREFIX_OFFSET))(this, prefix);
		}

		::System::String* GetTableNamespace(::System::Xml::Schema::XmlSchemaIdentityConstraint* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaIdentityConstraint*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_GETTABLENAMESPACE_OFFSET))(this, key);
		}

		::System::String* GetTableName(::System::Xml::Schema::XmlSchemaIdentityConstraint* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaIdentityConstraint*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_GETTABLENAME_OFFSET))(this, key);
		}

		::System::Boolean IsTable(::System::Xml::Schema::XmlSchemaElement* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_ISTABLE_OFFSET))(this, node);
		}

		::System::Data::DataTable* HandleTable(::System::Xml::Schema::XmlSchemaElement* node)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XSDSCHEMA_HANDLETABLE_OFFSET))(this, node);
		}
	};
}
