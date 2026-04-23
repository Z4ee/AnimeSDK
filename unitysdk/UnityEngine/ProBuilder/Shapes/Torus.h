#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_TORUS_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1A2E1D40)
#define UNITYENGINE_PROBUILDER_SHAPES_TORUS_GETCIRCLEPOINTS_1_OFFSET UNITYSDK_OFFSET(0x1A2E3120)
#define UNITYENGINE_PROBUILDER_SHAPES_TORUS_GETCIRCLEPOINTS_OFFSET UNITYSDK_OFFSET(0x1A2E2AC0)
#define UNITYENGINE_PROBUILDER_SHAPES_TORUS_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1A2E1E60)
#define UNITYENGINE_PROBUILDER_SHAPES_TORUS_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A2E1DD0)
#define UNITYENGINE_PROBUILDER_SHAPES_TORUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E36B0)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Torus_TypeDefinitionIndex = 40028;

	class Torus : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Int32 m_Columns; // 0x10
		::System::Single m_VerticalCircumference; // 0x14
		::System::Int32 m_Rows; // 0x18
		::System::Single m_HorizontalCircumference; // 0x1C
		::System::Single m_TubeRadius; // 0x20
		::System::Boolean m_Smooth; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS_COPYSHAPE_OFFSET))(this, shape);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS_UPDATEBOUNDS_OFFSET))(this, mesh, size, rotation, bounds);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS_REBUILDMESH_OFFSET))(this, mesh, size, rotation);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetCirclePoints(::System::Int32 segments, ::System::Single radius, ::System::Single circumference, ::UnityEngine::Quaternion rotation, ::System::Single offset)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS_GETCIRCLEPOINTS_OFFSET))(segments, radius, circumference, rotation, offset);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetCirclePoints_1(::System::Int32 segments, ::System::Single radius, ::System::Single circumference, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 offset)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS_GETCIRCLEPOINTS_1_OFFSET))(segments, radius, circumference, rotation, offset);
		}
	};
}
