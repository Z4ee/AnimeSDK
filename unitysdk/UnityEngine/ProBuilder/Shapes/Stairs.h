#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/StepGenerationType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_BUILDCURVEDSTAIRS_OFFSET UNITYSDK_OFFSET(0x1A2DE420)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_BUILDSTAIRS_OFFSET UNITYSDK_OFFSET(0x1A2E0250)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1A2DE2E0)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_GET_SIDES_OFFSET UNITYSDK_OFFSET(0x1A2DE2C0)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1A2DE370)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_SET_SIDES_OFFSET UNITYSDK_OFFSET(0x1A2DE2D0)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A2E1B50)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E1D20)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Stairs_TypeDefinitionIndex = 40027;

	class Stairs : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Boolean m_Sides; // 0x10
		::System::Boolean m_HomogeneousSteps; // 0x11
		::System::Single m_StepsHeight; // 0x14
		::UnityEngine::ProBuilder::Shapes::StepGenerationType m_StepGenerationType; // 0x18
		::System::Int32 m_StepsCount; // 0x1C
		::System::Single m_Circumference; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_sides()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_GET_SIDES_OFFSET))(this);
		}

		::System::Void set_sides(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_SET_SIDES_OFFSET))(this, value);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_COPYSHAPE_OFFSET))(this, shape);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_REBUILDMESH_OFFSET))(this, mesh, size, rotation);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_UPDATEBOUNDS_OFFSET))(this, mesh, size, rotation, bounds);
		}

		::UnityEngine::Bounds BuildStairs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_BUILDSTAIRS_OFFSET))(this, mesh, size, rotation);
		}

		::UnityEngine::Bounds BuildCurvedStairs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_BUILDCURVEDSTAIRS_OFFSET))(this, mesh, size, rotation);
		}
	};
}
