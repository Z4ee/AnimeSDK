#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace System { class String; }
namespace Utf8Json::Resolvers::Internal { class DynamicObjectTypeBuilder___c__DisplayClass12_0; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS12_1__BUILDDESERIALIZE_B__2_OFFSET UNITYSDK_OFFSET(0x1F53B4F0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS12_1__BUILDDESERIALIZE_B__3_OFFSET UNITYSDK_OFFSET(0x1F53B7F0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F53B4E0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass12_1_TypeDefinitionIndex = 95095;

	class DynamicObjectTypeBuilder___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder___c__DisplayClass12_0* CS___8__locals1; // 0x10
		::System::Reflection::Emit::Label readNext; // 0x18
		::System::Reflection::Emit::Label continueWhile; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}

		::System::Void _BuildDeserialize_b__2(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS12_1__BUILDDESERIALIZE_B__2_OFFSET))(this, x);
		}

		::System::Void _BuildDeserialize_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS12_1__BUILDDESERIALIZE_B__3_OFFSET))(this);
		}
	};
}
