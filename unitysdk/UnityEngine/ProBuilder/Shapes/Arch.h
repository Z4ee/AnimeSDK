#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_ARCH_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1B134AC0)
#define UNITYENGINE_PROBUILDER_SHAPES_ARCH_GETFACE_OFFSET UNITYSDK_OFFSET(0x1B134B40)
#define UNITYENGINE_PROBUILDER_SHAPES_ARCH_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1B134BF0)
#define UNITYENGINE_PROBUILDER_SHAPES_ARCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B135DC0)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Arch_TypeDefinitionIndex = 40840;

	class Arch : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		::System::Int32 m_NumberOfSides; // 0x10
		::System::Single m_ArchDegrees; // 0x14
		::System::Single m_Thickness; // 0x18
		::System::Boolean m_Smooth; // 0x1C
		::System::Boolean m_EndCaps; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_ARCH__CTOR_OFFSET))(this);
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_ARCH_COPYSHAPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetFace(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_ARCH_GETFACE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_ARCH_REBUILDMESH_OFFSET))(this, a1, a2, a3);
		}
	};
}
