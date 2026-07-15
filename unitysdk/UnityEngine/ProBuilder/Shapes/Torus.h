#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_TORUS_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x17798B30)
#define UNITYENGINE_PROBUILDER_SHAPES_TORUS_GETCIRCLEPOINTS_1_OFFSET UNITYSDK_OFFSET(0x17799EC0)
#define UNITYENGINE_PROBUILDER_SHAPES_TORUS_GETCIRCLEPOINTS_OFFSET UNITYSDK_OFFSET(0x177998D0)
#define UNITYENGINE_PROBUILDER_SHAPES_TORUS_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x17798C50)
#define UNITYENGINE_PROBUILDER_SHAPES_TORUS_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x17798BC0)
#define UNITYENGINE_PROBUILDER_SHAPES_TORUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1779A3F0)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Torus_TypeDefinitionIndex = 41670;

	class Torus : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Boolean m_Smooth; // 0x10
		::System::Int32 m_Columns; // 0x14
		::System::Single m_VerticalCircumference; // 0x18
		::System::Single m_TubeRadius; // 0x1C
		::System::Single m_HorizontalCircumference; // 0x20
		::System::Int32 m_Rows; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS_COPYSHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS_UPDATEBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS_REBUILDMESH_OFFSET))(this, a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetCirclePoints(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Quaternion a4, ::System::Single a5)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS_GETCIRCLEPOINTS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetCirclePoints_1(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Quaternion a4, ::UnityEngine::Vector3 a5)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_TORUS_GETCIRCLEPOINTS_1_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
