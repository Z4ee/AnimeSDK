#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_INTERNAL_EMIT_METAMEMBER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E62D000)
#define UTF8JSON_INTERNAL_EMIT_METAMEMBER___C__DISPLAYCLASS41_0__GETSHOULDSERIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1E62D010)

namespace Utf8Json::Internal::Emit
{
	inline static constexpr unsigned int MetaMember___c__DisplayClass41_0_TypeDefinitionIndex = 91253;

	class MetaMember___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::String* shouldSerialize; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShouldSerialize_b__0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METAMEMBER___C__DISPLAYCLASS41_0__GETSHOULDSERIALIZE_B__0_OFFSET))(this, x);
		}
	};
}
