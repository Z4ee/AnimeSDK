#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define ZLINQ_INTERNAL_THROWS_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1B52C340)
#define ZLINQ_INTERNAL_THROWS_NOELEMENTS_OFFSET UNITYSDK_OFFSET(0x1B52C390)
#define ZLINQ_INTERNAL_THROWS_NOTSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1B52C3E0)

namespace ZLinq::Internal
{
	inline static constexpr unsigned int Throws_TypeDefinitionIndex = 6398;

	class Throws : public ::System::Object
	{
	public:
		static ::System::Void ArgumentOutOfRange(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZLINQ_INTERNAL_THROWS_ARGUMENTOUTOFRANGE_OFFSET))(a1);
		}

		static ::System::Void NoElements()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZLINQ_INTERNAL_THROWS_NOELEMENTS_OFFSET))();
		}

		static ::System::Void NotSupportedType(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + ZLINQ_INTERNAL_THROWS_NOTSUPPORTEDTYPE_OFFSET))(a1);
		}
	};
}
