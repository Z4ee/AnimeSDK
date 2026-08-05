#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define TMPRO_TMP_MATH_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1FBAC0F0)
#define TMPRO_TMP_MATH_MOD_OFFSET UNITYSDK_OFFSET(0x1FBAC120)
#define TMPRO_TMP_MATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAC140)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Math_TypeDefinitionIndex = 39903;

	class TMP_Math : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_MIN_16BIT()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_Math_TypeDefinitionIndex)->GetStaticField(0x9810);
		}
		static ::UnityEngine::Vector2* StaticGet_MAX_16BIT()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_Math_TypeDefinitionIndex)->GetStaticField(0x9818);
		}
		// static const ::System::Single FLOAT_MAX; // 0x0
		// static const ::System::Single FLOAT_MIN; // 0x0
		// static const ::System::Int32 INT_MAX = 0x7FFFFFFF; // 0x0
		// static const ::System::Int32 INT_MIN = 0x80000001; // 0x0
		// static const ::System::Single FLOAT_UNSET; // 0x0
		// static const ::System::Int32 INT_UNSET = 0xFFFF8001; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_MATH__CCTOR_OFFSET))();
		}

		static ::System::Boolean Approximately(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATH_APPROXIMATELY_OFFSET))(a, b);
		}

		static ::System::Int32 Mod(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATH_MOD_OFFSET))(a, b);
		}
	};
}
