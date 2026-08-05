#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace Utf8Json::Internal::Emit { class MetaMember; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_1__BUILDANONYMOUSFORMATTER_B__2_OFFSET UNITYSDK_OFFSET(0x1FA74E60)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA74E50)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass7_1_TypeDefinitionIndex = 95090;

	class DynamicObjectTypeBuilder___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* ignoreSet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildAnonymousFormatter_b__2(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_1__BUILDANONYMOUSFORMATTER_B__2_OFFSET))(this, x);
		}
	};
}
