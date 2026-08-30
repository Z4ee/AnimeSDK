#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace TMPro { class TMP_TextInfo; }
namespace UnityEngine { class Mesh; }

#define TMPRO_TMP_TEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13509230)
#define TMPRO_TMP_TEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13509260)
#define TMPRO_TMP_TEXT___C___CTOR_B__625_0_OFFSET UNITYSDK_OFFSET(0x13509270)
#define TMPRO_TMP_TEXT___C___CTOR_B__625_1_OFFSET UNITYSDK_OFFSET(0x13509280)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Text___c_TypeDefinitionIndex = 43469;

	class TMP_Text___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::TMPro::TMP_TextInfo*>** StaticGet___9__625_0()
		{
			return (::System::Action_1<::TMPro::TMP_TextInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_Text___c_TypeDefinitionIndex)->GetStaticField(0xB3F0);
		}
		static ::System::Action_3<::UnityEngine::Mesh*, ::TMPro::TMP_TextInfo*, ::System::Int32>** StaticGet___9__625_1()
		{
			return (::System::Action_3<::UnityEngine::Mesh*, ::TMPro::TMP_TextInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_Text___c_TypeDefinitionIndex)->GetStaticField(0xB3F8);
		}
		static ::TMPro::TMP_Text___c** StaticGet___9()
		{
			return (::TMPro::TMP_Text___c**)Il2CppClass::FromTypeDefinitionIndex(TMP_Text___c_TypeDefinitionIndex)->GetStaticField(0xB400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__625_0(::TMPro::TMP_TextInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_TextInfo*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT___C___CTOR_B__625_0_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__625_1(::UnityEngine::Mesh* a1, ::TMPro::TMP_TextInfo* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::TMPro::TMP_TextInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT___C___CTOR_B__625_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
