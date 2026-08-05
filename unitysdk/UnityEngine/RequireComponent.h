#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define UNITYENGINE_REQUIRECOMPONENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA1BC10)
#define UNITYENGINE_REQUIRECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1BC00)

namespace UnityEngine
{
	inline static constexpr unsigned int RequireComponent_TypeDefinitionIndex = 5326;

	class RequireComponent : public ::System::Attribute
	{
	public:
		::System::Type* m_Type1; // 0x10
		::System::Type* m_Type2; // 0x18
		::System::Type* m_Type0; // 0x20

		::System::Void _ctor(::System::Type* requiredComponent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_REQUIRECOMPONENT__CTOR_OFFSET))(this, requiredComponent);
		}

		::System::Void _ctor_1(::System::Type* requiredComponent, ::System::Type* requiredComponent2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_REQUIRECOMPONENT__CTOR_1_OFFSET))(this, requiredComponent, requiredComponent2);
		}
	};
}
