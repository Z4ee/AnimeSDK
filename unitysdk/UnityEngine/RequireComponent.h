#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_REQUIRECOMPONENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DCD8420)
#define UNITYENGINE_REQUIRECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD8410)

namespace UnityEngine
{
	inline static constexpr unsigned int RequireComponent_TypeDefinitionIndex = 4300;

	class RequireComponent : public ::System::Attribute
	{
	public:
		::System::Type* m_Type0; // 0x10
		::System::Type* m_Type1; // 0x18
		::System::Type* m_Type2; // 0x20

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_REQUIRECOMPONENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_REQUIRECOMPONENT__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
