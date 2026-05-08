#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_UI_CUSTOMUIVECTOR4EQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BBC6700)
#define UNITYENGINE_UI_CUSTOMUIVECTOR4EQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BBC6850)
#define UNITYENGINE_UI_CUSTOMUIVECTOR4EQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC6910)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CustomUIVector4EqualityComparer_TypeDefinitionIndex = 8441;

	class CustomUIVector4EqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOR4EQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Vector4 v, ::UnityEngine::Vector4 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOR4EQUALITYCOMPARER_EQUALS_OFFSET))(this, v, rhs);
		}

		::System::Int32 GetHashCode(::UnityEngine::Vector4 v)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOR4EQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, v);
		}
	};
}
