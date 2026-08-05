#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define TMPRO_EXTENTS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A6120)
#define TMPRO_EXTENTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D701B40)
#define TMPRO_EXTENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

namespace TMPro
{
	inline static constexpr unsigned int Extents_TypeDefinitionIndex = 39910;

	struct alignas(4) Extents
	{
		static ::TMPro::Extents* StaticGet_zero()
		{
			return (::TMPro::Extents*)Il2CppClass::FromTypeDefinitionIndex(Extents_TypeDefinitionIndex)->GetStaticField(0x9700);
		}
		static ::TMPro::Extents* StaticGet_uninitialized()
		{
			return (::TMPro::Extents*)Il2CppClass::FromTypeDefinitionIndex(Extents_TypeDefinitionIndex)->GetStaticField(0x9710);
		}
		::UnityEngine::Vector2 min; // 0x10
		::UnityEngine::Vector2 max; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TMPRO_EXTENTS__CTOR_OFFSET))(this, min, max);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_EXTENTS__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_EXTENTS_TOSTRING_OFFSET))(this);
		}
	};
}
