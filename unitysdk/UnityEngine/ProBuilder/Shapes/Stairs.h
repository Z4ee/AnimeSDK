#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/StepGenerationType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_BUILDCURVEDSTAIRS_OFFSET UNITYSDK_OFFSET(0x1B13EF50)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_BUILDSTAIRS_OFFSET UNITYSDK_OFFSET(0x1B140890)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1B13EE10)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_GET_SIDES_OFFSET UNITYSDK_OFFSET(0x1B13EDF0)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1B13EEA0)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_SET_SIDES_OFFSET UNITYSDK_OFFSET(0x1B13EE00)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B141DE0)
#define UNITYENGINE_PROBUILDER_SHAPES_STAIRS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B141FB0)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Stairs_TypeDefinitionIndex = 40854;

	class Stairs : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Int32 m_StepsCount; // 0x10
		::System::Single m_StepsHeight; // 0x14
		::System::Boolean m_HomogeneousSteps; // 0x18
		::System::Boolean m_Sides; // 0x19
		::System::Single m_Circumference; // 0x1C
		::UnityEngine::ProBuilder::Shapes::StepGenerationType m_StepGenerationType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_sides()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_GET_SIDES_OFFSET))(this);
		}

		::System::Void set_sides(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_SET_SIDES_OFFSET))(this, a1);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_COPYSHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_REBUILDMESH_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_UPDATEBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Bounds BuildStairs(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_BUILDSTAIRS_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Bounds BuildCurvedStairs(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_STAIRS_BUILDCURVEDSTAIRS_OFFSET))(this, a1, a2, a3);
		}
	};
}
