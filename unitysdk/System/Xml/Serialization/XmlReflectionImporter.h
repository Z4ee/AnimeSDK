#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml::Serialization { class ReflectionHelper; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlAttributeOverrides; }
namespace System::Xml::Serialization { class XmlAttributes; }
namespace System::Xml::Serialization { class XmlReflectionMember; }
namespace System::Xml::Serialization { class XmlRootAttribute; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfoList; }
namespace System::Xml::Serialization { class XmlTypeMapMember; }
namespace System::Xml::Serialization { class XmlTypeMapMemberElement; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CANBENULL_OFFSET UNITYSDK_OFFSET(0x185CEAF0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATEMAPMEMBER_OFFSET UNITYSDK_OFFSET(0x185D06C0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATETYPEMAPPING_OFFSET UNITYSDK_OFFSET(0x185CE550)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x185D3430)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETREFLECTIONMEMBERS_OFFSET UNITYSDK_OFFSET(0x185CF850)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x185CF720)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTANYELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x185D17A0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_1_OFFSET UNITYSDK_OFFSET(0x185CB410)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_OFFSET UNITYSDK_OFFSET(0x185CF650)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x185D2090)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTENUMMAPPING_OFFSET UNITYSDK_OFFSET(0x185CDE60)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTINCLUDEDTYPES_OFFSET UNITYSDK_OFFSET(0x185D13B0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_1_OFFSET UNITYSDK_OFFSET(0x185CC710)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_OFFSET UNITYSDK_OFFSET(0x185D14D0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTPRIMITIVEMAPPING_OFFSET UNITYSDK_OFFSET(0x185CDDA0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTEXTELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x185D35B0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_1_OFFSET UNITYSDK_OFFSET(0x185CAF40)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_2_OFFSET UNITYSDK_OFFSET(0x185CADA0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_3_OFFSET UNITYSDK_OFFSET(0x185CAF50)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET UNITYSDK_OFFSET(0x185CAD90)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLNODEMAPPING_OFFSET UNITYSDK_OFFSET(0x185CDC40)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLSERIALIZABLEMAPPING_OFFSET UNITYSDK_OFFSET(0x185CE430)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x185D3B40)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_REGISTERDERIVEDMAP_OFFSET UNITYSDK_OFFSET(0x185D12A0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x185D3FD0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER__CTOR_OFFSET UNITYSDK_OFFSET(0x185CABD0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlReflectionImporter_TypeDefinitionIndex = 2006;

	class XmlReflectionImporter : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_errSimple2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(XmlReflectionImporter_TypeDefinitionIndex)->GetStaticField(0xBF60);
		}
		static ::System::String** StaticGet_errSimple()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(XmlReflectionImporter_TypeDefinitionIndex)->GetStaticField(0xBF68);
		}
		::System::Xml::Serialization::ReflectionHelper* helper; // 0x10
		::System::Collections::ArrayList* includedTypes; // 0x18
		::System::Collections::ArrayList* relatedMaps; // 0x20
		::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides; // 0x28
		::System::String* initialDefaultNamespace; // 0x30
		::System::Boolean allowPrivateTypes; // 0x38
		::System::Int32 arrayChoiceCount; // 0x3C

		::System::Void _ctor(::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::System::String* defaultNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlAttributeOverrides*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER__CTOR_OFFSET))(this, attributeOverrides, defaultNamespace);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER__CCTOR_OFFSET))();
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(::System::Type* type)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET))(this, type);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping_1(::System::Type* type, ::System::String* defaultNamespace)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_1_OFFSET))(this, type, defaultNamespace);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping_2(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_2_OFFSET))(this, type, root, defaultNamespace);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping_3(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_3_OFFSET))(this, typeData, root, defaultNamespace);
		}

		::System::Xml::Serialization::XmlTypeMapping* CreateTypeMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultXmlType, ::System::String* defaultNamespace)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATETYPEMAPPING_OFFSET))(this, typeData, root, defaultXmlType, defaultNamespace);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportClassMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace, ::System::Boolean isBaseType)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_OFFSET))(this, type, root, defaultNamespace, isBaseType);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportClassMapping_1(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace, ::System::Boolean isBaseType)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_1_OFFSET))(this, typeData, root, defaultNamespace, isBaseType);
		}

		::System::Void RegisterDerivedMap(::System::Xml::Serialization::XmlTypeMapping* map, ::System::Xml::Serialization::XmlTypeMapping* derivedMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_REGISTERDERIVEDMAP_OFFSET))(this, map, derivedMap);
		}

		::System::String* GetTypeNamespace(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETTYPENAMESPACE_OFFSET))(this, typeData, root, defaultNamespace);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportListMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace, ::System::Xml::Serialization::XmlAttributes* atts, ::System::Int32 nestingLevel)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Xml::Serialization::XmlAttributes*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_OFFSET))(this, type, root, defaultNamespace, atts, nestingLevel);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportListMapping_1(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace, ::System::Xml::Serialization::XmlAttributes* atts, ::System::Int32 nestingLevel)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Xml::Serialization::XmlAttributes*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_1_OFFSET))(this, typeData, root, defaultNamespace, atts, nestingLevel);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportXmlNodeMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLNODEMAPPING_OFFSET))(this, typeData, root, defaultNamespace);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportPrimitiveMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTPRIMITIVEMAPPING_OFFSET))(this, typeData, root, defaultNamespace);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportEnumMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTENUMMAPPING_OFFSET))(this, typeData, root, defaultNamespace);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportXmlSerializableMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLSERIALIZABLEMAPPING_OFFSET))(this, typeData, root, defaultNamespace);
		}

		::System::Void ImportIncludedTypes(::System::Type* type, ::System::String* defaultNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTINCLUDEDTYPES_OFFSET))(this, type, defaultNamespace);
		}

		::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>* GetReflectionMembers(::System::Type* type)
		{
			return ((::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETREFLECTIONMEMBERS_OFFSET))(this, type);
		}

		::System::Xml::Serialization::XmlTypeMapMember* CreateMapMember(::System::Type* declaringType, ::System::Xml::Serialization::XmlReflectionMember* rmember, ::System::String* defaultNamespace)
		{
			return ((::System::Xml::Serialization::XmlTypeMapMember*(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlReflectionMember*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATEMAPMEMBER_OFFSET))(this, declaringType, rmember, defaultNamespace);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* ImportElementInfo(::System::Type* cls, ::System::String* defaultName, ::System::String* defaultNamespace, ::System::Type* defaultType, ::System::Xml::Serialization::XmlTypeMapMemberElement* member, ::System::Xml::Serialization::XmlAttributes* atts)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::PVOID, ::System::Type*, ::System::String*, ::System::String*, ::System::Type*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTELEMENTINFO_OFFSET))(this, cls, defaultName, defaultNamespace, defaultType, member, atts);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* ImportAnyElementInfo(::System::String* defaultNamespace, ::System::Xml::Serialization::XmlReflectionMember* rmember, ::System::Xml::Serialization::XmlTypeMapMemberElement* member, ::System::Xml::Serialization::XmlAttributes* atts)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::PVOID, ::System::String*, ::System::Xml::Serialization::XmlReflectionMember*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTANYELEMENTINFO_OFFSET))(this, defaultNamespace, rmember, member, atts);
		}

		::System::Void ImportTextElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* list, ::System::Type* defaultType, ::System::Xml::Serialization::XmlTypeMapMemberElement* member, ::System::Xml::Serialization::XmlAttributes* atts, ::System::String* defaultNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfoList*, ::System::Type*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTEXTELEMENTINFO_OFFSET))(this, list, defaultType, member, atts, defaultNamespace);
		}

		::System::Boolean CanBeNull(::System::Xml::Serialization::TypeData* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CANBENULL_OFFSET))(this, type);
		}

		::System::Void IncludeType(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_INCLUDETYPE_OFFSET))(this, type);
		}

		::System::Object* GetDefaultValue(::System::Xml::Serialization::TypeData* typeData, ::System::Object* defaultValue)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETDEFAULTVALUE_OFFSET))(this, typeData, defaultValue);
		}
	};
}
