#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Resolvers/Internal/DynamicObjectTypeBuilder_DeserializeInfo.h"

namespace Utf8Json::Internal::Emit { class MetaMember; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E122AA0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_0__EMITNEWOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x1E122AB0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass14_0_TypeDefinitionIndex = 91163;

	class DynamicObjectTypeBuilder___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::Utf8Json::Internal::Emit::MetaMember* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _EmitNewObject_b__0(::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_0__EMITNEWOBJECT_B__0_OFFSET))(this, x);
		}
	};
}
