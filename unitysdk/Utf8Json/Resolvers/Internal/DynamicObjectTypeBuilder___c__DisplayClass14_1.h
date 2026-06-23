#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Resolvers/Internal/DynamicObjectTypeBuilder_DeserializeInfo.h"

namespace Utf8Json::Internal::Emit { class MetaMember; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E122AC0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_1__EMITNEWOBJECT_B__2_OFFSET UNITYSDK_OFFSET(0x1E122AD0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass14_1_TypeDefinitionIndex = 91164;

	class DynamicObjectTypeBuilder___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::Utf8Json::Internal::Emit::MetaMember* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _EmitNewObject_b__2(::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS14_1__EMITNEWOBJECT_B__2_OFFSET))(this, x);
		}
	};
}
