#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1889CB00)
#define UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1889CE80)
#define UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1889CBB0)
#define UNITYENGINE_PROBUILDER_SHAPES_CYLINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1889DFD0)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Cylinder_TypeDefinitionIndex = 34197;

	class Cylinder : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Int32 m_AxisDivisions; // 0x10
		::System::Boolean m_Smooth; // 0x14
		::System::Int32 m_HeightCuts; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CYLINDER__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_COPYSHAPE_OFFSET))(this, shape);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_UPDATEBOUNDS_OFFSET))(this, mesh, size, rotation, bounds);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CYLINDER_REBUILDMESH_OFFSET))(this, mesh, size, rotation);
		}
	};
}
