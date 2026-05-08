#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC51AA0)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_OFFSET UNITYSDK_OFFSET(0x1BC519A0)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETTOTALPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC51980)
#define UNITYENGINE_POLYGONCOLLIDER2D_GET_PATHCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC51990)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC51B50)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_OFFSET UNITYSDK_OFFSET(0x1BC51AB0)
#define UNITYENGINE_POLYGONCOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC51B60)

namespace UnityEngine
{
	inline static constexpr unsigned int PolygonCollider2D_TypeDefinitionIndex = 7641;

	class PolygonCollider2D : public ::UnityEngine::Collider2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Int32 GetTotalPointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETTOTALPOINTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_pathCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GET_PATHCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetPath(::System::Int32 index)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_OFFSET))(this, index);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetPath_Internal(::System::Int32 index)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_INTERNAL_OFFSET))(this, index);
		}

		::System::Void SetPath(::System::Int32 index, ::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_OFFSET))(this, index, points);
		}

		::System::Void SetPath_Internal(::System::Int32 index, ::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_INTERNAL_OFFSET))(this, index, points);
		}
	};
}
