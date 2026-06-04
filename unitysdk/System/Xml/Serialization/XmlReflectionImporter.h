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

#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CANBENULL_OFFSET UNITYSDK_OFFSET(0x1AE7C4D0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATEMAPMEMBER_OFFSET UNITYSDK_OFFSET(0x1AE7E030)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATETYPEMAPPING_OFFSET UNITYSDK_OFFSET(0x1AE7BF40)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1AE80DE0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETREFLECTIONMEMBERS_OFFSET UNITYSDK_OFFSET(0x1AE7D220)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AE7D0F0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTANYELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x1AE7F0D0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_1_OFFSET UNITYSDK_OFFSET(0x1AE78D40)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_OFFSET UNITYSDK_OFFSET(0x1AE7D020)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x1AE7F9E0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTENUMMAPPING_OFFSET UNITYSDK_OFFSET(0x1AE7B820)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTINCLUDEDTYPES_OFFSET UNITYSDK_OFFSET(0x1AE7ED00)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_1_OFFSET UNITYSDK_OFFSET(0x1AE7A090)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_OFFSET UNITYSDK_OFFSET(0x1AE7EE20)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTPRIMITIVEMAPPING_OFFSET UNITYSDK_OFFSET(0x1AE7B760)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTEXTELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x1AE80F60)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_1_OFFSET UNITYSDK_OFFSET(0x1AE789E0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_2_OFFSET UNITYSDK_OFFSET(0x1AE78840)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_3_OFFSET UNITYSDK_OFFSET(0x1AE789F0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET UNITYSDK_OFFSET(0x1AE78830)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLNODEMAPPING_OFFSET UNITYSDK_OFFSET(0x1AE7B610)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLSERIALIZABLEMAPPING_OFFSET UNITYSDK_OFFSET(0x1AE7BE20)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x1AE814D0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_REGISTERDERIVEDMAP_OFFSET UNITYSDK_OFFSET(0x1AE7EBF0)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE81980)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE78670)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlReflectionImporter_TypeDefinitionIndex = 2007;

	class XmlReflectionImporter : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_errSimple()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(XmlReflectionImporter_TypeDefinitionIndex)->GetStaticField(0x16B50);
		}
		static ::System::String** StaticGet_errSimple2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(XmlReflectionImporter_TypeDefinitionIndex)->GetStaticField(0x16B58);
		}
		::System::Xml::Serialization::ReflectionHelper* helper; // 0x10
		::System::Collections::ArrayList* relatedMaps; // 0x18
		::System::String* initialDefaultNamespace; // 0x20
		::System::Collections::ArrayList* includedTypes; // 0x28
		::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides; // 0x30
		::System::Int32 arrayChoiceCount; // 0x38
		::System::Boolean allowPrivateTypes; // 0x3C

		::System::Void _ctor(::System::Xml::Serialization::XmlAttributeOverrides* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlAttributeOverrides*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER__CCTOR_OFFSET))();
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(::System::Type* a1)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_1_OFFSET))(this, a1, a2);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping_2(::System::Type* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping_3(::System::Xml::Serialization::TypeData* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTYPEMAPPING_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapping* CreateTypeMapping(::System::Xml::Serialization::TypeData* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATETYPEMAPPING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportClassMapping(::System::Type* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportClassMapping_1(::System::Xml::Serialization::TypeData* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTCLASSMAPPING_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RegisterDerivedMap(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Xml::Serialization::XmlTypeMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_REGISTERDERIVEDMAP_OFFSET))(this, a1, a2);
		}

		::System::String* GetTypeNamespace(::System::Xml::Serialization::TypeData* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETTYPENAMESPACE_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportListMapping(::System::Type* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3, ::System::Xml::Serialization::XmlAttributes* a4, ::System::Int32 a5)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Xml::Serialization::XmlAttributes*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportListMapping_1(::System::Xml::Serialization::TypeData* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3, ::System::Xml::Serialization::XmlAttributes* a4, ::System::Int32 a5)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::Xml::Serialization::XmlAttributes*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTLISTMAPPING_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportXmlNodeMapping(::System::Xml::Serialization::TypeData* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLNODEMAPPING_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportPrimitiveMapping(::System::Xml::Serialization::TypeData* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTPRIMITIVEMAPPING_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportEnumMapping(::System::Xml::Serialization::TypeData* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTENUMMAPPING_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapping* ImportXmlSerializableMapping(::System::Xml::Serialization::TypeData* a1, ::System::Xml::Serialization::XmlRootAttribute* a2, ::System::String* a3)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTXMLSERIALIZABLEMAPPING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ImportIncludedTypes(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTINCLUDEDTYPES_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>* GetReflectionMembers(::System::Type* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETREFLECTIONMEMBERS_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlTypeMapMember* CreateMapMember(::System::Type* a1, ::System::Xml::Serialization::XmlReflectionMember* a2, ::System::String* a3)
		{
			return ((::System::Xml::Serialization::XmlTypeMapMember*(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlReflectionMember*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CREATEMAPMEMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* ImportElementInfo(::System::Type* a1, ::System::String* a2, ::System::String* a3, ::System::Type* a4, ::System::Xml::Serialization::XmlTypeMapMemberElement* a5, ::System::Xml::Serialization::XmlAttributes* a6)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::PVOID, ::System::Type*, ::System::String*, ::System::String*, ::System::Type*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTELEMENTINFO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* ImportAnyElementInfo(::System::String* a1, ::System::Xml::Serialization::XmlReflectionMember* a2, ::System::Xml::Serialization::XmlTypeMapMemberElement* a3, ::System::Xml::Serialization::XmlAttributes* a4)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::PVOID, ::System::String*, ::System::Xml::Serialization::XmlReflectionMember*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTANYELEMENTINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ImportTextElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* a1, ::System::Type* a2, ::System::Xml::Serialization::XmlTypeMapMemberElement* a3, ::System::Xml::Serialization::XmlAttributes* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfoList*, ::System::Type*, ::System::Xml::Serialization::XmlTypeMapMemberElement*, ::System::Xml::Serialization::XmlAttributes*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_IMPORTTEXTELEMENTINFO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean CanBeNull(::System::Xml::Serialization::TypeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_CANBENULL_OFFSET))(this, a1);
		}

		::System::Void IncludeType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_INCLUDETYPE_OFFSET))(this, a1);
		}

		::System::Object* GetDefaultValue(::System::Xml::Serialization::TypeData* a1, ::System::Object* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER_GETDEFAULTVALUE_OFFSET))(this, a1, a2);
		}
	};
}
