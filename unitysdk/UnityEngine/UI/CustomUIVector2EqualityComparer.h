#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_UI_CUSTOMUIVECTOR2EQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DC0DFD0)
#define UNITYENGINE_UI_CUSTOMUIVECTOR2EQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DC0E090)
#define UNITYENGINE_UI_CUSTOMUIVECTOR2EQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC0E110)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CustomUIVector2EqualityComparer_TypeDefinitionIndex = 18951;

	class CustomUIVector2EqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOR2EQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOR2EQUALITYCOMPARER_EQUALS_OFFSET))(this, v, rhs);
		}

		::System::Int32 GetHashCode(::UnityEngine::Vector2 v)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOR2EQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, v);
		}
	};
}
