#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_CUBE_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x1889C4D0)
#define UNITYENGINE_PROBUILDER_SHAPES_CUBE_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x1889C4E0)
#define UNITYENGINE_PROBUILDER_SHAPES_CUBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1889C8E0)
#define UNITYENGINE_PROBUILDER_SHAPES_CUBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1889C8D0)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Cube_TypeDefinitionIndex = 34196;

	class Cube : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_k_CubeVertices()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Cube_TypeDefinitionIndex)->GetStaticField(0x2A430);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_k_CubeTriangles()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Cube_TypeDefinitionIndex)->GetStaticField(0x2A438);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CUBE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CUBE__CCTOR_OFFSET))();
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CUBE_COPYSHAPE_OFFSET))(this, shape);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_CUBE_REBUILDMESH_OFFSET))(this, mesh, size, rotation);
		}
	};
}
