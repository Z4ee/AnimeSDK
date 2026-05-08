#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_COMPOSITECOLLIDER2D_GETPATHARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC4DD20)
#define UNITYENGINE_COMPOSITECOLLIDER2D_GETPATH_OFFSET UNITYSDK_OFFSET(0x1BC4DC10)
#define UNITYENGINE_COMPOSITECOLLIDER2D_GET_PATHCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC4DBF0)
#define UNITYENGINE_COMPOSITECOLLIDER2D_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC4DC00)
#define UNITYENGINE_COMPOSITECOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4DD30)

namespace UnityEngine
{
	inline static constexpr unsigned int CompositeCollider2D_TypeDefinitionIndex = 7642;

	class CompositeCollider2D : public ::UnityEngine::Collider2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Int32 get_pathCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_GET_PATHCOUNT_OFFSET))(this);
		}

		::System::Int32 get_pointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_GET_POINTCOUNT_OFFSET))(this);
		}

		::System::Int32 GetPath(::System::Int32 index, ::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_GETPATH_OFFSET))(this, index, points);
		}

		::System::Int32 GetPathArray_Internal(::System::Int32 index, ::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_GETPATHARRAY_INTERNAL_OFFSET))(this, index, points);
		}
	};
}
