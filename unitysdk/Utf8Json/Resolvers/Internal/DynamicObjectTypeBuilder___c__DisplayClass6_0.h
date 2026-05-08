#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection::Emit { class FieldBuilder; }
namespace Utf8Json::Internal::Emit { class MetaMember; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FD330)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass6_0_TypeDefinitionIndex = 85578;

	class DynamicObjectTypeBuilder___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Reflection::FieldInfo*>* customFormatterLookup; // 0x10
		::System::Reflection::Emit::FieldBuilder* stringByteKeysField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}
	};
}
