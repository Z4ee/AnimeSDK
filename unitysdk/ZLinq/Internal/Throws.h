#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define ZLINQ_INTERNAL_THROWS_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x18CEF940)
#define ZLINQ_INTERNAL_THROWS_NOELEMENTS_OFFSET UNITYSDK_OFFSET(0x18CEF990)
#define ZLINQ_INTERNAL_THROWS_NOTSUPPORTEDTYPE_OFFSET UNITYSDK_OFFSET(0x18CEF9E0)

namespace ZLinq::Internal
{
	inline static constexpr unsigned int Throws_TypeDefinitionIndex = 6535;

	class Throws : public ::System::Object
	{
	public:
		static ::System::Void ArgumentOutOfRange(::System::String* paramName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ZLINQ_INTERNAL_THROWS_ARGUMENTOUTOFRANGE_OFFSET))(paramName);
		}

		static ::System::Void NoElements()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZLINQ_INTERNAL_THROWS_NOELEMENTS_OFFSET))();
		}

		static ::System::Void NotSupportedType(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + ZLINQ_INTERNAL_THROWS_NOTSUPPORTEDTYPE_OFFSET))(type);
		}
	};
}
