#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_0__BUILDANONYMOUSFORMATTER_B__1_OFFSET UNITYSDK_OFFSET(0x1E7EE580)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EE570)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass7_0_TypeDefinitionIndex = 91156;

	class DynamicObjectTypeBuilder___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* serializeCustomFormatters; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* deserializeCustomFormatters; // 0x18
		::System::Func_2<::System::String*, ::System::String*>* nameMutator; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::String* _BuildAnonymousFormatter_b__1(::System::String* x)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS7_0__BUILDANONYMOUSFORMATTER_B__1_OFFSET))(this, x);
		}
	};
}
