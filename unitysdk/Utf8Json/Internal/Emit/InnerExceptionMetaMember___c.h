#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C47A530)
#define UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47A570)

namespace Utf8Json::Internal::Emit
{
	inline static constexpr unsigned int InnerExceptionMetaMember___c_TypeDefinitionIndex = 85682;

	class InnerExceptionMetaMember___c : public ::System::Object
	{
	public:
		static ::Utf8Json::Internal::Emit::InnerExceptionMetaMember___c** StaticGet___9()
		{
			return (::Utf8Json::Internal::Emit::InnerExceptionMetaMember___c**)Il2CppClass::FromTypeDefinitionIndex(InnerExceptionMetaMember___c_TypeDefinitionIndex)->GetStaticField(0x4AB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_INNEREXCEPTIONMETAMEMBER___C__CTOR_OFFSET))(this);
		}
	};
}
