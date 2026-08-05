#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_UI_CUSTOMUIVECTOR3EQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F43F500)
#define UNITYENGINE_UI_CUSTOMUIVECTOR3EQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F43F610)
#define UNITYENGINE_UI_CUSTOMUIVECTOR3EQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F43F6C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CustomUIVector3EqualityComparer_TypeDefinitionIndex = 19294;

	class CustomUIVector3EqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOR3EQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOR3EQUALITYCOMPARER_EQUALS_OFFSET))(this, v, rhs);
		}

		::System::Int32 GetHashCode(::UnityEngine::Vector3 v)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CUSTOMUIVECTOR3EQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, v);
		}
	};
}
