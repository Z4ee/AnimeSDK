#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SchemaBuilder.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class HWStack; }
namespace System::Xml { class PositionInfo; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml::Schema { class ParticleContentValidator; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XdrBuilder_AttributeContent; }
namespace System::Xml::Schema { class XdrBuilder_DeclBaseInfo; }
namespace System::Xml::Schema { class XdrBuilder_ElementContent; }
namespace System::Xml::Schema { class XdrBuilder_GroupContent; }
namespace System::Xml::Schema { class XdrBuilder_XdrAttributeEntry; }
namespace System::Xml::Schema { class XdrBuilder_XdrEntry; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaException; }

#define SYSTEM_XML_SCHEMA_XDRBUILDER_ADDORDER_OFFSET UNITYSDK_OFFSET(0x1D0C8930)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_CHECKDATATYPE_OFFSET UNITYSDK_OFFSET(0x1D0C7E40)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_CHECKDEFAULTATTVALUE_OFFSET UNITYSDK_OFFSET(0x1D0C8570)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_COMPAREMINMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1D0C7690)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_ENDCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D0C4DA0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_GETCONTENT_OFFSET UNITYSDK_OFFSET(0x1D0C5E40)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_GETMODEL_OFFSET UNITYSDK_OFFSET(0x1D0C6130)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_GETNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x1D0C37D0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_GETORDER_OFFSET UNITYSDK_OFFSET(0x1D0C6320)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_HANDLEMINMAX_OFFSET UNITYSDK_OFFSET(0x1D0C9150)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_ISCONTENTPARSED_OFFSET UNITYSDK_OFFSET(0x1D0C4C90)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_ISGLOBAL_OFFSET UNITYSDK_OFFSET(0x1D0C4110)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_ISSKIPABLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D0C4810)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_ISSKIPABLEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D0C3A80)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_ISXDRSCHEMA_OFFSET UNITYSDK_OFFSET(0x1D0C4120)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_ISYES_OFFSET UNITYSDK_OFFSET(0x1D0C7C60)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_LOADSCHEMA_OFFSET UNITYSDK_OFFSET(0x1D0C41C0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PARSEDTMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1D0C67A0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PARSEDTMINLENGTH_OFFSET UNITYSDK_OFFSET(0x1D0C6B20)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PARSEINTEGER_OFFSET UNITYSDK_OFFSET(0x1D0CA3A0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PARSEMAXOCCURS_OFFSET UNITYSDK_OFFSET(0x1D0C8DB0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PARSEMINOCCURS_OFFSET UNITYSDK_OFFSET(0x1D0C8A70)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_POPGROUPINFO_OFFSET UNITYSDK_OFFSET(0x1D0C5040)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_POP_OFFSET UNITYSDK_OFFSET(0x1D0C4E70)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PROCESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D0C3C60)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PROCESSCDATA_OFFSET UNITYSDK_OFFSET(0x1D0C4D00)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x1D0C3620)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PROCESSMARKUP_OFFSET UNITYSDK_OFFSET(0x1D0C4CA0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PUSHGROUPINFO_OFFSET UNITYSDK_OFFSET(0x1D0C4F20)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_PUSH_OFFSET UNITYSDK_OFFSET(0x1D0C3A30)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_SENDVALIDATIONEVENT_1_OFFSET UNITYSDK_OFFSET(0x1D0C6640)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_SENDVALIDATIONEVENT_2_OFFSET UNITYSDK_OFFSET(0x1D0C3B70)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_SENDVALIDATIONEVENT_3_OFFSET UNITYSDK_OFFSET(0x1D0CA4A0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1D0C4AE0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_SETATTRIBUTEPRESENCE_OFFSET UNITYSDK_OFFSET(0x1D0C8680)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_STARTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D0C4D70)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BEGINATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x1D0C8230)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BEGINATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D0C94B0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BEGINELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D0C6E20)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BEGINROOT_OFFSET UNITYSDK_OFFSET(0x1D0C51C0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1D0C7D60)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_DTMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1D0C8130)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_DTMINLENGTH_OFFSET UNITYSDK_OFFSET(0x1D0C81B0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_DTTYPE_OFFSET UNITYSDK_OFFSET(0x1D0C7D90)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_DTVALUES_OFFSET UNITYSDK_OFFSET(0x1D0C8060)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_NAME_OFFSET UNITYSDK_OFFSET(0x1D0C7850)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_REQUIRED_OFFSET UNITYSDK_OFFSET(0x1D0C7BE0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTE_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1D0C9480)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTE_REQUIRED_OFFSET UNITYSDK_OFFSET(0x1D0C93F0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTE_TYPE_OFFSET UNITYSDK_OFFSET(0x1D0C9320)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_CONTENT_OFFSET UNITYSDK_OFFSET(0x1D0C5DA0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_DTMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1D0C6720)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_DTMINLENGTH_OFFSET UNITYSDK_OFFSET(0x1D0C6AA0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_DTTYPE_OFFSET UNITYSDK_OFFSET(0x1D0C64D0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_DTVALUES_OFFSET UNITYSDK_OFFSET(0x1D0C6650)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_MODEL_OFFSET UNITYSDK_OFFSET(0x1D0C6090)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_NAME_OFFSET UNITYSDK_OFFSET(0x1D0C5B10)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_ORDER_OFFSET UNITYSDK_OFFSET(0x1D0C6260)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENT_MAXOCCURS_OFFSET UNITYSDK_OFFSET(0x1D0C8D30)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENT_MINOCCURS_OFFSET UNITYSDK_OFFSET(0x1D0C89F0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENT_TYPE_OFFSET UNITYSDK_OFFSET(0x1D0C8770)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDGROUP_MAXOCCURS_OFFSET UNITYSDK_OFFSET(0x1D0C9D40)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDGROUP_MINOCCURS_OFFSET UNITYSDK_OFFSET(0x1D0C9CB0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDGROUP_ORDER_OFFSET UNITYSDK_OFFSET(0x1D0C9BB0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDROOT_ID_OFFSET UNITYSDK_OFFSET(0x1D0C51B0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDROOT_NAME_OFFSET UNITYSDK_OFFSET(0x1D0C5150)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_CHECKATTRIBUTEDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D0C58D0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDATTRIBUTEDTTYPE_OFFSET UNITYSDK_OFFSET(0x1D0CA2A0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x1D0C82D0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D0C99D0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDELEMENTDTTYPE_OFFSET UNITYSDK_OFFSET(0x1D0CA140)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D0C71F0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1D0C8FF0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDGROUP_OFFSET UNITYSDK_OFFSET(0x1D0C9DD0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDROOT_OFFSET UNITYSDK_OFFSET(0x1D0C52C0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITATTRIBUTEDTTYPE_OFFSET UNITYSDK_OFFSET(0x1D0CA230)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x1D0C7700)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D0C9200)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITELEMENTDTTYPE_OFFSET UNITYSDK_OFFSET(0x1D0CA0A0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D0C5960)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITELEMENT_OFFSET UNITYSDK_OFFSET(0x1D0C86D0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITGROUP_OFFSET UNITYSDK_OFFSET(0x1D0C9AA0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITROOT_OFFSET UNITYSDK_OFFSET(0x1D0C50F0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0CA590)
#define SYSTEM_XML_SCHEMA_XDRBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C3300)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_TypeDefinitionIndex = 2098;

	class XdrBuilder : public ::System::Xml::Schema::SchemaBuilder
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_S_XDR_Root_SubElements()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C40);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_S_XDR_ElementType_SubElements()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C48);
		}
		static ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>** StaticGet_S_XDR_Attribute_Attributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C50);
		}
		static ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrEntry*>** StaticGet_S_SchemaEntries()
		{
			return (::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C58);
		}
		static ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>** StaticGet_S_XDR_ElementDataType_Attributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C60);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_S_XDR_Group_SubElements()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C68);
		}
		static ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>** StaticGet_S_XDR_AttributeType_Attributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C70);
		}
		static ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>** StaticGet_S_XDR_Root_Attributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C78);
		}
		static ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>** StaticGet_S_XDR_Element_Attributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C80);
		}
		static ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>** StaticGet_S_XDR_AttributeDataType_Attributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C88);
		}
		static ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>** StaticGet_S_XDR_ElementType_Attributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C90);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_S_XDR_Root_Element()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1C98);
		}
		static ::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>** StaticGet_S_XDR_Group_Attributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1CA0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_S_XDR_AttributeType_SubElements()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(XdrBuilder_TypeDefinitionIndex)->GetStaticField(0x1CA8);
		}
		::System::Collections::Hashtable* _UndeclaredElements; // 0x10
		::System::Xml::Schema::ParticleContentValidator* _contentValidator; // 0x18
		::System::String* _XdrName; // 0x20
		::System::Xml::Schema::XdrBuilder_AttributeContent* _AttributeDef; // 0x28
		::System::Xml::XmlResolver* xmlResolver; // 0x30
		::System::Xml::Schema::XdrBuilder_ElementContent* _ElementDef; // 0x38
		::System::Xml::Schema::XdrBuilder_XdrEntry* _CurState; // 0x40
		::System::String* _Text; // 0x48
		::System::Xml::XmlNameTable* _NameTable; // 0x50
		::System::Xml::Schema::SchemaNames* _SchemaNames; // 0x58
		::System::Xml::Schema::ValidationEventHandler* validationEventHandler; // 0x60
		::System::Xml::Schema::XdrBuilder_DeclBaseInfo* _UndefinedAttributeTypes; // 0x68
		::System::Xml::HWStack* _GroupStack; // 0x70
		::System::Xml::PositionInfo* positionInfo; // 0x78
		::System::Xml::XmlNamespaceManager* _CurNsMgr; // 0x80
		::System::Xml::Schema::XdrBuilder_XdrEntry* _NextState; // 0x88
		::System::String* _XdrPrefix; // 0x90
		::System::Xml::XmlReader* _reader; // 0x98
		::System::Xml::HWStack* _StateHistory; // 0xA0
		::System::Xml::Schema::XdrBuilder_GroupContent* _GroupDef; // 0xA8
		::System::Xml::Schema::XdrBuilder_DeclBaseInfo* _BaseDecl; // 0xB0
		::System::Xml::Schema::SchemaInfo* _SchemaInfo; // 0xB8
		::System::String* _TargetNamespace; // 0xC0

		::System::Void _ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::SchemaInfo* sinfo, ::System::String* targetNamspace, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventhandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::XmlNamespaceManager*, ::System::Xml::Schema::SchemaInfo*, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER__CTOR_OFFSET))(this, reader, curmgr, sinfo, targetNamspace, nameTable, schemaNames, eventhandler);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER__CCTOR_OFFSET))();
		}

		::System::Boolean ProcessElement(::System::String* prefix, ::System::String* name, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PROCESSELEMENT_OFFSET))(this, prefix, name, ns);
		}

		::System::Void ProcessAttribute(::System::String* prefix, ::System::String* name, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PROCESSATTRIBUTE_OFFSET))(this, prefix, name, ns, value);
		}

		::System::Boolean LoadSchema(::System::String* uri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_LOADSCHEMA_OFFSET))(this, uri);
		}

		static ::System::Boolean IsXdrSchema(::System::String* uri)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_ISXDRSCHEMA_OFFSET))(uri);
		}

		::System::Boolean IsContentParsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_ISCONTENTPARSED_OFFSET))(this);
		}

		::System::Void ProcessMarkup(::Il2CppArray<::System::Xml::XmlNode*>* markup)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::XmlNode*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PROCESSMARKUP_OFFSET))(this, markup);
		}

		::System::Void ProcessCData(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PROCESSCDATA_OFFSET))(this, value);
		}

		::System::Void StartChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_STARTCHILDREN_OFFSET))(this);
		}

		::System::Void EndChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_ENDCHILDREN_OFFSET))(this);
		}

		::System::Void Push()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PUSH_OFFSET))(this);
		}

		::System::Void Pop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_POP_OFFSET))(this);
		}

		::System::Void PushGroupInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PUSHGROUPINFO_OFFSET))(this);
		}

		::System::Void PopGroupInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_POPGROUPINFO_OFFSET))(this);
		}

		static ::System::Void XDR_InitRoot(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITROOT_OFFSET))(builder, obj);
		}

		static ::System::Void XDR_BuildRoot_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDROOT_NAME_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildRoot_ID(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDROOT_ID_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BeginRoot(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BEGINROOT_OFFSET))(builder);
		}

		static ::System::Void XDR_EndRoot(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDROOT_OFFSET))(builder);
		}

		static ::System::Void XDR_InitElementType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITELEMENTTYPE_OFFSET))(builder, obj);
		}

		static ::System::Void XDR_BuildElementType_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_NAME_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildElementType_Content(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_CONTENT_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildElementType_Model(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_MODEL_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildElementType_Order(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_ORDER_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildElementType_DtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_DTTYPE_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildElementType_DtValues(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_DTVALUES_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildElementType_DtMaxLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_DTMAXLENGTH_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildElementType_DtMinLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENTTYPE_DTMINLENGTH_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BeginElementType(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BEGINELEMENTTYPE_OFFSET))(builder);
		}

		static ::System::Void XDR_EndElementType(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDELEMENTTYPE_OFFSET))(builder);
		}

		static ::System::Void XDR_InitAttributeType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITATTRIBUTETYPE_OFFSET))(builder, obj);
		}

		static ::System::Void XDR_BuildAttributeType_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_NAME_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildAttributeType_Required(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_REQUIRED_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildAttributeType_Default(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_DEFAULT_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildAttributeType_DtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_DTTYPE_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildAttributeType_DtValues(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_DTVALUES_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildAttributeType_DtMaxLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_DTMAXLENGTH_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildAttributeType_DtMinLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTETYPE_DTMINLENGTH_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BeginAttributeType(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BEGINATTRIBUTETYPE_OFFSET))(builder);
		}

		static ::System::Void XDR_EndAttributeType(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDATTRIBUTETYPE_OFFSET))(builder);
		}

		static ::System::Void XDR_InitElement(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITELEMENT_OFFSET))(builder, obj);
		}

		static ::System::Void XDR_BuildElement_Type(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENT_TYPE_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildElement_MinOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENT_MINOCCURS_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildElement_MaxOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDELEMENT_MAXOCCURS_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_EndElement(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDELEMENT_OFFSET))(builder);
		}

		static ::System::Void XDR_InitAttribute(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITATTRIBUTE_OFFSET))(builder, obj);
		}

		static ::System::Void XDR_BuildAttribute_Type(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTE_TYPE_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildAttribute_Required(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTE_REQUIRED_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildAttribute_Default(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDATTRIBUTE_DEFAULT_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BeginAttribute(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BEGINATTRIBUTE_OFFSET))(builder);
		}

		static ::System::Void XDR_EndAttribute(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDATTRIBUTE_OFFSET))(builder);
		}

		static ::System::Void XDR_InitGroup(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITGROUP_OFFSET))(builder, obj);
		}

		static ::System::Void XDR_BuildGroup_Order(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDGROUP_ORDER_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildGroup_MinOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDGROUP_MINOCCURS_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_BuildGroup_MaxOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::String* prefix)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_BUILDGROUP_MAXOCCURS_OFFSET))(builder, obj, prefix);
		}

		static ::System::Void XDR_EndGroup(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDGROUP_OFFSET))(builder);
		}

		static ::System::Void XDR_InitElementDtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITELEMENTDTTYPE_OFFSET))(builder, obj);
		}

		static ::System::Void XDR_EndElementDtType(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDELEMENTDTTYPE_OFFSET))(builder);
		}

		static ::System::Void XDR_InitAttributeDtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_INITATTRIBUTEDTTYPE_OFFSET))(builder, obj);
		}

		static ::System::Void XDR_EndAttributeDtType(::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_ENDATTRIBUTEDTTYPE_OFFSET))(builder);
		}

		::System::Boolean GetNextState(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_GETNEXTSTATE_OFFSET))(this, qname);
		}

		::System::Boolean IsSkipableElement(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_ISSKIPABLEELEMENT_OFFSET))(this, qname);
		}

		::System::Boolean IsSkipableAttribute(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_ISSKIPABLEATTRIBUTE_OFFSET))(this, qname);
		}

		::System::Int32 GetOrder(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_GETORDER_OFFSET))(this, qname);
		}

		::System::Void AddOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_ADDORDER_OFFSET))(this);
		}

		static ::System::Boolean IsYes(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_ISYES_OFFSET))(obj, builder);
		}

		static ::System::UInt32 ParseMinOccurs(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::UInt32(*)(::System::Object*, ::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PARSEMINOCCURS_OFFSET))(obj, builder);
		}

		static ::System::UInt32 ParseMaxOccurs(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::UInt32(*)(::System::Object*, ::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PARSEMAXOCCURS_OFFSET))(obj, builder);
		}

		static ::System::Void HandleMinMax(::System::Xml::Schema::ParticleContentValidator* pContent, ::System::UInt32 cMin, ::System::UInt32 cMax)
		{
			return ((::System::Void(*)(::System::Xml::Schema::ParticleContentValidator*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_HANDLEMINMAX_OFFSET))(pContent, cMin, cMax);
		}

		static ::System::Void ParseDtMaxLength(::System::UInt32& cVal, ::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::Object*, ::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PARSEDTMAXLENGTH_OFFSET))(cVal, obj, builder);
		}

		static ::System::Void ParseDtMinLength(::System::UInt32& cVal, ::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::Object*, ::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PARSEDTMINLENGTH_OFFSET))(cVal, obj, builder);
		}

		static ::System::Void CompareMinMaxLength(::System::UInt32 cMin, ::System::UInt32 cMax, ::System::Xml::Schema::XdrBuilder* builder)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Xml::Schema::XdrBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_COMPAREMINMAXLENGTH_OFFSET))(cMin, cMax, builder);
		}

		static ::System::Boolean ParseInteger(::System::String* str, ::System::UInt32& n)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_PARSEINTEGER_OFFSET))(str, n);
		}

		::System::Void XDR_CheckAttributeDefault(::System::Xml::Schema::XdrBuilder_DeclBaseInfo* decl, ::System::Xml::Schema::SchemaAttDef* pAttdef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XdrBuilder_DeclBaseInfo*, ::System::Xml::Schema::SchemaAttDef*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDR_CHECKATTRIBUTEDEFAULT_OFFSET))(this, decl, pAttdef);
		}

		::System::Void SetAttributePresence(::System::Xml::Schema::SchemaAttDef* pAttdef, ::System::Boolean fRequired)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_SETATTRIBUTEPRESENCE_OFFSET))(this, pAttdef, fRequired);
		}

		::System::Int32 GetContent(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_GETCONTENT_OFFSET))(this, qname);
		}

		::System::Boolean GetModel(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_GETMODEL_OFFSET))(this, qname);
		}

		::System::Xml::Schema::XmlSchemaDatatype* CheckDatatype(::System::String* str)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_CHECKDATATYPE_OFFSET))(this, str);
		}

		::System::Void CheckDefaultAttValue(::System::Xml::Schema::SchemaAttDef* attDef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_CHECKDEFAULTATTVALUE_OFFSET))(this, attDef);
		}

		::System::Boolean IsGlobal(::System::Int32 flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_ISGLOBAL_OFFSET))(this, flags);
		}

		::System::Void SendValidationEvent(::System::String* code, ::Il2CppArray<::System::String*>* args, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_SENDVALIDATIONEVENT_OFFSET))(this, code, args, severity);
		}

		::System::Void SendValidationEvent_1(::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_SENDVALIDATIONEVENT_1_OFFSET))(this, code);
		}

		::System::Void SendValidationEvent_2(::System::String* code, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_SENDVALIDATIONEVENT_2_OFFSET))(this, code, msg);
		}

		::System::Void SendValidationEvent_3(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_SENDVALIDATIONEVENT_3_OFFSET))(this, e, severity);
		}
	};
}
