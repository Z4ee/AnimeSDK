#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define TMPRO_EXTENTS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AE84B0)
#define TMPRO_EXTENTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B23E90)
#define TMPRO_EXTENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85C0)

namespace TMPro
{
	inline static constexpr unsigned int Extents_TypeDefinitionIndex = 43494;

	struct alignas(4) Extents
	{
		static ::TMPro::Extents* StaticGet_uninitialized()
		{
			return (::TMPro::Extents*)Il2CppClass::FromTypeDefinitionIndex(Extents_TypeDefinitionIndex)->GetStaticField(0x990);
		}
		static ::TMPro::Extents* StaticGet_zero()
		{
			return (::TMPro::Extents*)Il2CppClass::FromTypeDefinitionIndex(Extents_TypeDefinitionIndex)->GetStaticField(0x9A0);
		}
		::UnityEngine::Vector2 min; // 0x10
		::UnityEngine::Vector2 max; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TMPRO_EXTENTS__CTOR_OFFSET))(this, a1, a2);
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
