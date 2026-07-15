#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ProBuilder/Shapes/Shape.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE_COPYSHAPE_OFFSET UNITYSDK_OFFSET(0x177940E0)
#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0x177941F0)
#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE_SUBDIVIDEICOSAHEDRON_OFFSET UNITYSDK_OFFSET(0x17794F30)
#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x17794160)
#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17795420)
#define UNITYENGINE_PROBUILDER_SHAPES_SPHERE__CTOR_OFFSET UNITYSDK_OFFSET(0x17795410)

namespace UnityEngine::ProBuilder::Shapes
{
	inline static constexpr unsigned int Sphere_TypeDefinitionIndex = 41666;

	class Sphere : public ::UnityEngine::ProBuilder::Shapes::Shape
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_k_IcosphereVertices()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Sphere_TypeDefinitionIndex)->GetStaticField(0x557D0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_k_IcosphereTriangles()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Sphere_TypeDefinitionIndex)->GetStaticField(0x557D8);
		}
		::System::Boolean m_Smooth; // 0x10
		::System::Int32 m_Subdivisions; // 0x14
		::System::Int32 m_BottomMostVertexIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE__CCTOR_OFFSET))();
		}

		::System::Void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Shapes::Shape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE_COPYSHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE_UPDATEBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE_REBUILDMESH_OFFSET))(this, a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* SubdivideIcosahedron(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Single a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAPES_SPHERE_SUBDIVIDEICOSAHEDRON_OFFSET))(a1, a2);
		}
	};
}
