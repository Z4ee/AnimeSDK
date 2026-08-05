#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection::Emit { class ILGenerator; }
namespace Utf8Json::Internal::Emit { class MetaMember; }
namespace Utf8Json::Resolvers::Internal { class DynamicObjectTypeBuilder___c__DisplayClass7_0; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_2__BUILDANONYMOUSFORMATTER_B__5_OFFSET UNITYSDK_OFFSET(0x1FB72000)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_2__BUILDANONYMOUSFORMATTER_B__6_OFFSET UNITYSDK_OFFSET(0x1FB72010)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB71FF0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass7_2_TypeDefinitionIndex = 95091;

	class DynamicObjectTypeBuilder___c__DisplayClass7_2 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ILGenerator* il; // 0x10
		::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder___c__DisplayClass7_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_2__CTOR_OFFSET))(this);
		}

		::System::Void _BuildAnonymousFormatter_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_2__BUILDANONYMOUSFORMATTER_B__5_OFFSET))(this);
		}

		::System::Boolean _BuildAnonymousFormatter_b__6(::System::Int32 index, ::Utf8Json::Internal::Emit::MetaMember* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_2__BUILDANONYMOUSFORMATTER_B__6_OFFSET))(this, index, member);
		}
	};
}
