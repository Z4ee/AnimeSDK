#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_HTMLTERNARYTREE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FAE4B0)

namespace System::Xml
{
	inline static constexpr unsigned int HtmlTernaryTree_TypeDefinitionIndex = 1792;

	class HtmlTernaryTree : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_htmlAttributes()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(HtmlTernaryTree_TypeDefinitionIndex)->GetStaticField(0xCE50);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_htmlElements()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(HtmlTernaryTree_TypeDefinitionIndex)->GetStaticField(0xCE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_HTMLTERNARYTREE__CCTOR_OFFSET))();
		}
	};
}
