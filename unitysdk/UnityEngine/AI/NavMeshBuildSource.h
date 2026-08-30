#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSourceShape.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x3BB3AA0)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x2F0E760)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x3BB3A60)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x3BB3A90)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x2DF4760)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_INTERNALGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1ECE2370)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_INTERNALGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1ECE2350)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_AREA_OFFSET UNITYSDK_OFFSET(0xBEF0)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x2F0E770)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x3BB3A80)
#define UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x2DF4790)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuildSource_TypeDefinitionIndex = 5654;

	struct alignas(4) NavMeshBuildSource
	{
		::UnityEngine::Matrix4x4 m_Transform; // 0x10
		::UnityEngine::Vector3 m_Size; // 0x50
		::UnityEngine::AI::NavMeshBuildSourceShape m_Shape; // 0x5C
		::System::Int32 m_Area; // 0x60
		::System::Int32 m_InstanceID; // 0x64
		::System::Int32 m_ComponentID; // 0x68

		::UnityEngine::Matrix4x4 get_transform()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_transform(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::AI::NavMeshBuildSourceShape get_shape()
		{
			return ((::UnityEngine::AI::NavMeshBuildSourceShape(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_shape(::UnityEngine::AI::NavMeshBuildSourceShape a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSourceShape))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_SHAPE_OFFSET))(this, a1);
		}

		::System::Void set_area(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_SET_AREA_OFFSET))(this, a1);
		}

		::UnityEngine::Object* get_sourceObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_SOURCEOBJECT_OFFSET))(this);
		}

		::UnityEngine::Component* get_component()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_GET_COMPONENT_OFFSET))(this);
		}

		static ::UnityEngine::Component* InternalGetComponent(::System::Int32 a1)
		{
			return ((::UnityEngine::Component*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_INTERNALGETCOMPONENT_OFFSET))(a1);
		}

		static ::UnityEngine::Object* InternalGetObject(::System::Int32 a1)
		{
			return ((::UnityEngine::Object*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDSOURCE_INTERNALGETOBJECT_OFFSET))(a1);
		}
	};
}
