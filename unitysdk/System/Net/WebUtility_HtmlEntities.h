#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_WEBUTILITY_HTMLENTITIES_CALCULATEKEYVALUE_OFFSET UNITYSDK_OFFSET(0x1AAAC850)
#define SYSTEM_NET_WEBUTILITY_HTMLENTITIES_LOOKUP_OFFSET UNITYSDK_OFFSET(0x1AAAC4E0)
#define SYSTEM_NET_WEBUTILITY_HTMLENTITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAACA50)

namespace System::Net
{
	inline static constexpr unsigned int WebUtility_HtmlEntities_TypeDefinitionIndex = 3363;

	class WebUtility_HtmlEntities : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int64>** StaticGet_entities()
		{
			return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(WebUtility_HtmlEntities_TypeDefinitionIndex)->GetStaticField(0x3B40);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_entities_values()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(WebUtility_HtmlEntities_TypeDefinitionIndex)->GetStaticField(0x3B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HTMLENTITIES__CCTOR_OFFSET))();
		}

		static ::System::Char Lookup(::System::String* entity)
		{
			return ((::System::Char(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HTMLENTITIES_LOOKUP_OFFSET))(entity);
		}

		static ::System::Int64 CalculateKeyValue(::System::String* s)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBUTILITY_HTMLENTITIES_CALCULATEKEYVALUE_OFFSET))(s);
		}
	};
}
