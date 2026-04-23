#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_ARCH_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1A2D3CF0)
#define UNITYENGINE_PROBUILDER_SHAPES_ARCH_GETFACE_OFFSET UNITYSDK_OFFSET(0x1A2D3D80)
#define UNITYENGINE_PROBUILDER_SHAPES_ARCH_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1A2D3E60)
#define UNITYENGINE_PROBUILDER_SHAPES_ARCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D5210)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Arch_TypeDefinitionIndex = 40013;

	class Arch : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Boolean m_EndCaps; // 0x10
		::System::Boolean m_Smooth; // 0x11
		::System::Single m_Thickness; // 0x14
		::System::Int32 m_NumberOfSides; // 0x18
		::System::Single m_ArchDegrees; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_ARCH__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_ARCH_COPYSHAPE_OFFSET))(this, shape);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetFace(::UnityEngine::Vector2 vertex1, ::UnityEngine::Vector2 vertex2, ::System::Single depth)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_ARCH_GETFACE_OFFSET))(this, vertex1, vertex2, depth);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_ARCH_REBUILDMESH_OFFSET))(this, mesh, size, rotation);
		}
	};
}
