#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection::Emit { class ILGenerator; }
namespace Utf8Json::Internal::Emit { class MetaMember; }
namespace Utf8Json::Resolvers::Internal { class DynamicObjectTypeBuilder___c__DisplayClass6_0; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_1__BUILDTYPE_B__1_OFFSET UNITYSDK_OFFSET(0x1F355E60)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_1__BUILDTYPE_B__2_OFFSET UNITYSDK_OFFSET(0x1F355F90)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F34F070)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass6_1_TypeDefinitionIndex = 95086;

	class DynamicObjectTypeBuilder___c__DisplayClass6_1 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ILGenerator* il; // 0x10
		::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder___c__DisplayClass6_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_1__CTOR_OFFSET))(this);
		}

		::System::Void _BuildType_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_1__BUILDTYPE_B__1_OFFSET))(this);
		}

		::System::Boolean _BuildType_b__2(::System::Int32 index, ::Utf8Json::Internal::Emit::MetaMember* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS6_1__BUILDTYPE_B__2_OFFSET))(this, index, member);
		}
	};
}
