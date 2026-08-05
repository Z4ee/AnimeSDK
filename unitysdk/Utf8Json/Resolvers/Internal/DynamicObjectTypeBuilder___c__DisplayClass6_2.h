#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection::Emit { class ILGenerator; }
namespace Utf8Json::Internal::Emit { class MetaMember; }
namespace Utf8Json::Resolvers::Internal { class DynamicObjectTypeBuilder___c__DisplayClass6_0; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_2__BUILDTYPE_B__3_OFFSET UNITYSDK_OFFSET(0x1F95CC70)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1F95CC60)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass6_2_TypeDefinitionIndex = 95087;

	class DynamicObjectTypeBuilder___c__DisplayClass6_2 : public ::System::Object
	{
	public:
		::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder___c__DisplayClass6_0* CS___8__locals2; // 0x10
		::System::Reflection::Emit::ILGenerator* il; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildType_b__3(::System::Int32 index, ::Utf8Json::Internal::Emit::MetaMember* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_2__BUILDTYPE_B__3_OFFSET))(this, index, member);
		}
	};
}
