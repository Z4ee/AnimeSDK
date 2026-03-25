#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace System::Xml::Serialization { class XmlReflectionMember; }

#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x185D4020)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x185D4060)
#define SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C__IMPORTCLASSMAPPING_B__28_0_OFFSET UNITYSDK_OFFSET(0x185D4070)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlReflectionImporter___c_TypeDefinitionIndex = 2007;

	class XmlReflectionImporter___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>**)Il2CppClass::FromTypeDefinitionIndex(XmlReflectionImporter___c_TypeDefinitionIndex)->GetStaticField(0xBF20);
		}
		static ::System::Xml::Serialization::XmlReflectionImporter___c** StaticGet___9()
		{
			return (::System::Xml::Serialization::XmlReflectionImporter___c**)Il2CppClass::FromTypeDefinitionIndex(XmlReflectionImporter___c_TypeDefinitionIndex)->GetStaticField(0xBF28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ImportClassMapping_b__28_0(::System::Xml::Serialization::XmlReflectionMember* m1, ::System::Xml::Serialization::XmlReflectionMember* m2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Serialization::XmlReflectionMember*, ::System::Xml::Serialization::XmlReflectionMember*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLREFLECTIONIMPORTER___C__IMPORTCLASSMAPPING_B__28_0_OFFSET))(this, m1, m2);
		}
	};
}
