#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace TMPro { class TMP_TextInfo; }

#define TMPRO_TMP_TEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4038B0)
#define TMPRO_TMP_TEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4038F0)
#define TMPRO_TMP_TEXT___C___CTOR_B__622_0_OFFSET UNITYSDK_OFFSET(0x1C403900)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Text___c_TypeDefinitionIndex = 37593;

	class TMP_Text___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::TMPro::TMP_TextInfo*>** StaticGet___9__622_0()
		{
			return (::System::Action_1<::TMPro::TMP_TextInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_Text___c_TypeDefinitionIndex)->GetStaticField(0x29050);
		}
		static ::TMPro::TMP_Text___c** StaticGet___9()
		{
			return (::TMPro::TMP_Text___c**)Il2CppClass::FromTypeDefinitionIndex(TMP_Text___c_TypeDefinitionIndex)->GetStaticField(0x29058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__622_0(::TMPro::TMP_TextInfo* _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_TextInfo*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT___C___CTOR_B__622_0_OFFSET))(this, _p0_);
		}
	};
}
