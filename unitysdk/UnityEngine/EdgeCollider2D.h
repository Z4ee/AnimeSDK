#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_EDGECOLLIDER2D_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x1F3C19E0)
#define UNITYENGINE_EDGECOLLIDER2D_SET_EDGERADIUS_OFFSET UNITYSDK_OFFSET(0x1F3C19D0)
#define UNITYENGINE_EDGECOLLIDER2D_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x1F3C19F0)
#define UNITYENGINE_EDGECOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C1A00)

namespace UnityEngine
{
	inline static constexpr unsigned int EdgeCollider2D_TypeDefinitionIndex = 18796;

	class EdgeCollider2D : public ::UnityEngine::Collider2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EDGECOLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Void set_edgeRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EDGECOLLIDER2D_SET_EDGERADIUS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_points()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EDGECOLLIDER2D_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_points(::Il2CppArray<::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EDGECOLLIDER2D_SET_POINTS_OFFSET))(this, value);
		}
	};
}
