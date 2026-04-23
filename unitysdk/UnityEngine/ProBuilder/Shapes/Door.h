#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_DOOR_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1A2D7DC0)
#define UNITYENGINE_PROBUILDER_SHAPES_DOOR_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1A2D7E50)
#define UNITYENGINE_PROBUILDER_SHAPES_DOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D9210)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Door_TypeDefinitionIndex = 40017;

	class Door : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Single m_LegWidth; // 0x10
		::System::Single m_DoorHeight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_DOOR__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_DOOR_COPYSHAPE_OFFSET))(this, shape);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_DOOR_REBUILDMESH_OFFSET))(this, mesh, size, rotation);
		}
	};
}
